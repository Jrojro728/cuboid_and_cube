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
    general_a getCubeArea()
    {
        return pow(a, 2);
    }
    general_a getCubeSurfaceArea()
    {
        return a * 6;
    }
    general_a getCubeSize()
    {
        return pow(a, 3);
    }
    private:
    general_a a;
};