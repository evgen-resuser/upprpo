#include "QuadraticEquationSolver.hpp"
#include <array>
#include <cmath>

template <typename T>
void QuadraticEquationSolver<T>::SetInput(std::array<T, 3> parameters) {
  _coefficientA = parameters[0];
  _coefficientB = parameters[1];
  _coefficientC = parameters[2];
}

template <typename T> void QuadraticEquationSolver<T>::Run() {
  double d = std::pow(_coefficientB, 2) - 4 * _coefficientA * _coefficientC;
  if (d < 0) {
    return;
  }
  _output[0] = (-_coefficientB + std::sqrt(std::pow(_coefficientB, 2) -
                                           4 * _coefficientA * _coefficientC)) /
               (2 * _coefficientA);
  _output[1] = (-_coefficientB - std::sqrt(std::pow(_coefficientB, 2) -
                                           4 * _coefficientA * _coefficientC)) /
               (2 * _coefficientA);
}

template <typename T> std::array<T, 2> QuadraticEquationSolver<T>::GetOutput() {
  return _output;
}

void initer() {
  QuadraticEquationSolver<int> b;
  QuadraticEquationSolver<double> d;
}
