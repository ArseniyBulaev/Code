#include <iostream>
#include <string>

#include "Gates/logic_gates.h"
#include "Tests/tests.h"

using std::cout, std::cin, std::endl;
using std::string;


int main(){

    // tests::two_inputs_gate_test("And", &logic_gates::and_gate);
    // tests::two_inputs_gate_test("Or", &logic_gates::or_gate);
    // tests::two_inputs_gate_test("And-not", &logic_gates::and_not_gate);
    // tests::two_inputs_gate_test("Or-not", &logic_gates::or_not_gate);
    // tests::one_input_gate_test("Inverter", &logic_gates::inverter);
    tests::two_inputs_gate_test("Exclusive or", &logic_gates::exclusive_or_gate);
    

    return 0;
}