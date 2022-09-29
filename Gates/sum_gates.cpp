#include "logic_gates.h"
#include "sum_gates.h"


using logic_gates::exclusive_or_gate;
using logic_gates::and_gate;
using sum_gates::sum;


sum sum_gates::half_adder(bool input1, bool input2){

    sum result;

    // Sum bit
    result.sum = exclusive_or_gate(input1, input2);

    // Carry out bit
    result.carry_out = and_gate(input1, input2);

    return result;

}