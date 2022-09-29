#ifndef SUM_GATES_H_INCLUDED

#define SUM_GATES_H_INCLUDED


namespace sum_gates{

    struct sum{
        bool sum;
        bool carry_out;
    };

    sum half_adder(bool, bool);
}




#endif