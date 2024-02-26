#include "QuadraticEquationSolver.hpp"
#include <iostream>

int main(){
    QuadraticEquationSolver<int> a;
    a.SetInput({3,6,2});
    a.Run();
    auto solution = a.GetOutput();
    std::cout << solution[0] << " " << solution[1] << std::endl;
}
