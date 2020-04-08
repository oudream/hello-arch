//
// Created by vahagn on 12/2/19.
//

#ifndef STEREOVISION_INVALID_CONVERSION_EXCEPTION_H
#define STEREOVISION_INVALID_CONVERSION_EXCEPTION_H
#include <exception>
#include <string>

namespace StereoVision {

class InvalidConversionException : std::exception {
 public:
  explicit InvalidConversionException(const std::string & message) : message_(message) {};
  const char *what() const noexcept override{
    return message_.c_str();
  }
 private:
  std::string message_;
};

}

#endif //STEREOVISION_INVALID_CONVERSION_EXCEPTION_H
