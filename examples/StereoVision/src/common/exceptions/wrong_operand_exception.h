//
// Created by vahagn on 11/27/19.
//

#ifndef STEREOVISION_WRONG_OPERAND_EXCEPTION_H
#define STEREOVISION_WRONG_OPERAND_EXCEPTION_H

#include <exception>
#include <string>

namespace StereoVision {
class WrongOperandException : std::exception {
 public:
  explicit WrongOperandException(const std::string & message) : message_(message) {};
  const char *what() const noexcept override{
    return message_.c_str();
  }
 private:
  std::string message_;
};
}
#endif //STEREOVISION_WRONG_OPERAND_EXCEPTION_H
