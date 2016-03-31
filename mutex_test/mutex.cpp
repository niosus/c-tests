// Copyright Igor Bogoslavskyi, year 2016.
// In case of any problems with the code please contact me.
// Email: igor.bogoslavskyi@uni-bonn.de.

#include <unistd.h>
#include <thread>
#include <chrono>
#include <mutex>
#include <iostream>

using std::mutex;
using std::cerr;
using std::endl;

class MyClass {
 public:
  void f() {
    std::unique_lock<std::mutex> my_lock(_m, std::adopt_lock);
    if (!my_lock.owns_lock()) {
      fprintf(stderr, "waiting for lock in f\n");
      my_lock.lock();
    }
    _thread_counter++;
    cerr << "f started from thread id " << std::this_thread::get_id() << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    fprintf(stderr, "function f, thread %d\n", _thread_counter);
    this->g();
  }

  void g() {
    std::unique_lock<std::mutex> my_lock(_m, std::adopt_lock);
    if (!my_lock.owns_lock()) {
      fprintf(stderr, "waiting for lock in g\n");
      my_lock.lock();
    }
    cerr << "g started from thread id " << std::this_thread::get_id() << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    fprintf(stderr, "function g, thread %d\n", _thread_counter);
  }

 protected:
  mutex _m;
  int _thread_counter = 0;
};

int main(int argc, char const *argv[]) {
  /* code */
  MyClass obj;
  std::thread my_thread(&MyClass::f, &obj);
  obj.f();
  my_thread.join();
  return 0;
}