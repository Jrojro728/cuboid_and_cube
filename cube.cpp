#include <cmath>
#include "define.h"
#pragma once

class cube
{
    public:
    void setCube(general_a general)
    {
        a = general;
    }
    general_a getCudeArea()
    {
        return pow(a, 2);
    }
    general_a getCudeSufaceArea()
    {
        return a * 6;
    }
    general_a getCudeSize()
    {
        return pow(a, 3);
    }
    private:
    general_a a;
};