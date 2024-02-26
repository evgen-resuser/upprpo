#pragma once
#include "ISolver.hpp"
#include <array>

template <typename T> class QuadraticEquationSolver : public ISolver<T, 3, 2> {
public:

  void SetInput(std::array<T, 3> parameters) override;
  void Run() override;
  std::array<T, 2> GetOutput() override;

private:
  double _coefficientA;
  double _coefficientB;
  double _coefficientC;
  std::array<T, 2> _output;
};
