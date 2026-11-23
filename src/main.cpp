#include <iostream>
#include <thread>

void hello() {
  std::cout<<"Hello"<<std::endl;
}

int main() {
  std::thread t(hello);
  t.join();
  std::cout<<"Help"<<std::endl;
  return 0;
}