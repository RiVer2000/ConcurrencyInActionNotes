#include <iostream>
#include <thread>

class background_task {
  public:
  void operator()() {
    std::cout<<"Do something"<<std::endl;
  }
};

int main() {
  background_task task;
  std::thread thread{background_task()};
  thread.join();
  std::cout<<"Help"<<std::endl;
  return 0;
}