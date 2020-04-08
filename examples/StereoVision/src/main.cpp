//
// Created by vahagn on 11/27/19.
//
#include <iostream>
#include <variant>
#include <memory>
#include <linalg/tensor.h>

int main(int argc, char *argv[]) {
  std::variant<std::shared_ptr<int[]>, int *> q(std::shared_ptr<int[]>(new int[10]));
//  q = ;

  {
    StereoVision::linalg::Shape shape = {2, 3};
    StereoVision::linalg::Shape shape2 = {3};
    StereoVision::linalg::Tensor<int> tensor(shape);
    StereoVision::linalg::Tensor<int> row(shape2);
    row[0] = 1;
    row[1] = 2;
    row[2] = 3;
    tensor = row;
    StereoVision::linalg::Tensor<float > tensor2 = tensor + row;

    tensor2.Dot(row);

//    tensor[0][2] = 10;
    int m = tensor[0][1];
    std::cout << tensor2<< std::endl;

  }


  return 0;
}