#ifndef TESTS_H_INCLUDED
#define TESTS_H_INCLUDED

#include <string>


namespace tests{
    void two_inputs_gate_test(std::string gate_name, bool(* gate) (bool, bool));
    void one_input_gate_test(std::string gate_name, bool(* gate) (bool));
    void sum_test(bool, bool);
}

#endif