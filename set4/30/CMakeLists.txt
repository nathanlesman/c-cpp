cmake_minimum_required(VERSION 3.10)
project(CalculatorProject)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)
include_directories(${PROJECT_SOURCE_DIR}/calculator)
add_executable(calculator
    main.cpp
    calculator/run.cpp
    calculator/expression.cpp
    calculator/number.cpp
    calculator/getOperator.cpp
    calculator/evaluate.cpp
    calculator/evaluate2.cpp
    calculator/evaluate3.cpp
    calculator/evaluate4.cpp
)
