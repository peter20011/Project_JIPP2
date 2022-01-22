//
// Created by PW on 22.01.2022.
//

#include "Help_place.h"
#include <iostream>
using namespace std;
//Static Acount number
int gen_acc_num()
{
    static int s_nID = 1;
    return s_nID++;
}