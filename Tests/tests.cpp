#include <string>
#include <iostream>


#include "tests.h"
#include "../Gates/sum_gates.h"


using std::cout, std::endl;
using std::string;
using sum_gates::sum;
using sum_gates::half_adder;




/*
 Тестирование гейтов с двумя логическими входоми
 и одним логическим выходом  
 */
void tests::two_inputs_gate_test(string gate_name, bool(* gate) (bool, bool)){

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

/*
 Тестирование гейтов с одним логическим входом
 и одним логическим выходом  
 */


/*
Тестирование полусумматора
*/
void tests::one_input_gate_test(string gate_name, bool(* gate) (bool)){


    cout << "Start test of " << gate_name << " gate" << endl;
    const int bools_size = 2;
    bool bools [bools_size] = {false, true};
    bool input, output;

    for (int input_state = 0; input_state < bools_size; ++input_state){

        input = bools[input_state];
        output = gate(input);

        cout << "State of input " << input;
        cout << ", output " << output << endl; 
    }

    cout << "End test of " << gate_name << " gate" << endl << endl;
}


void tests::sum_test(bool input1, bool input2){

    sum result = half_adder(input1, input2);

    cout << "Input :" << input1 << ", " << input2 << endl;
    cout << "Sum bit : " <<  result.sum << endl;
    cout << "Carry out bit :" << result.carry_out << endl;
}