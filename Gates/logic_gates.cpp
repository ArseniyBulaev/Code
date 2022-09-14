#include "logic_gates.h"


bool logic_gates::and_gate(bool input1, bool input2){
    return input1 && input2; 
}

bool logic_gates::or_gate(bool input1, bool input2){
    return input1 || input2; 
}
bool logic_gates::and_not_gate(bool input1, bool input2){
    return !(input1 && input2); 
}

bool logic_gates::or_not_gate(bool input1, bool input2){
    return !(input1 || input2); 
}
