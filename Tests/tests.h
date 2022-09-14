#ifndef TESTS_H_INCLUDED
#define TESTS_H_INCLUDED

#include <string>
#include <iostream>

using std::cout, std::endl;
using std::string;


namespace tests{
    void two_inputs_gate_test(string gate_name, bool(* gate) (bool, bool));
    void one_input_gate_test(string gate_name, bool(* gate) (bool));
}

#endif