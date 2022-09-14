



bool and(bool input1, bool input2){
    return input1 && input2; 
}

bool or(bool input1, bool input2){
    return input1 || input2; 
}
bool and_not(bool input1, bool input2){
    return !(input1 && input2); 
}

bool or_not(bool input1, bool input2){
    return !(input1 || input2); 
}