#include <iostream>
#include <string>

#include "Gates/logic_gates.h"

using std::cout, std::cin, std::endl;
using std::string;


/*
 Тестирование гейтов с двумя логическими входоми
 и одним логическим выходом  
 */
void gait_test(string gate_name, bool(* gate) (bool, bool)){

    cout << "Start test of " << gate_name << " gate" << endl;

    const int bools_size = 2;
    bool bools [bools_size] = {false, true};
    bool input1, input2, output;

    for (int input_1_state = 0; input_1_state < bools_size; ++input_1_state){

        for (int input_2_state = 0; input_2_state < bools_size; ++input_2_state){

             input1 = bools[input_1_state];
             input2 = bools[input_2_state];
             output = gate(input1, input2);

             cout << "State of input1 " << input1;
             cout << ", state of input2 " << input2;
             cout << ", output " << output << endl; 
        }
    }

    cout << "End test of " << gate_name << " gate" << endl << endl;
}


int main(){

    gait_test("And", &logic_gates::and_gate);
    gait_test("Or", &logic_gates::or_gate);
    gait_test("And-not", &logic_gates::and_not_gate);
    gait_test("Or-not", &logic_gates::or_not_gate);

    return 0;
}