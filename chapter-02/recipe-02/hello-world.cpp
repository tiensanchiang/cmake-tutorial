#include<cstdlib>
#include<iostream>
#include<string>

using namespace std;

string say_hello(){
  #ifdef IS_WINDOWS
  return string("Hello from Windows!");
  #elif IS_LINUX
  return string("Hello from Linux!");
  #elif IS_MACOS
  return string("Hello from macOS!");
  #else
  return string("Hello from an unknown system!");
  #endif
}

int main(){
  cout<< say_hello() << endl;
  return EXIT_SUCCESS;
}
