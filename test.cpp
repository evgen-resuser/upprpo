#include "QuadraticEquationSolver.hpp"
#include <gtest/gtest.h>

#define QUADRATIC_TEST(name, in, out, delta)                                   \
  TEST(sample_test, name) {                                                    \
    QuadraticEquationSolver<double> solver;                                    \
    solver.SetInput(in);                                                       \
    solver.Run();                                                              \
    auto output = solver.GetOutput();                                          \
    decltype(output) expected_output = out;                                    \
    ASSERT_NEAR(output.size(), expected_output.size(), delta);                 \
    for (int i = 0; i < output.size(); i++) {                                  \
      ASSERT_NEAR(output[i], expected_output[i], delta);                       \
    }                                                                          \
  }

QUADRATIC_TEST(Test1, (std::array<double, 3>{3.0, 6.0, 2.0}),
               (std::array<double, 2>{-0.422649730810374, -1.57735026918963}),
               1.0e-3);

QUADRATIC_TEST(Test2, (std::array<double, 3>{-1.0, 10.0, -10.0}),
               (std::array<double, 2>{1.127, 8.872}), 1.0e-3);

QUADRATIC_TEST(Test3, (std::array<double, 3>{18.0, 19.0, 20.0}),
               (std::array<double, 2>{0, 0}), 1.0e-3);

QUADRATIC_TEST(Test4, (std::array<double, 3>{7.0, 1.0, 2.0}),
               (std::array<double, 2>{0, 0}), 1.0e-3);
