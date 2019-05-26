#include "Message.hpp"

#include<iostream>
#include<string>

std::ostream &Message::printobject(std::ostream &os){
  os << "This is my very nice message:" << std::endl;
  os << message_;

  return os;
}
