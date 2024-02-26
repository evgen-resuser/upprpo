#pragma once
#include <array>
template <typename T, int InP, int OutP> class ISolver {
public:
  virtual void SetInput(std::array<T, InP> parameters) = 0;
  virtual void Run() = 0;
  virtual std::array<T, OutP> GetOutput() = 0;
};
