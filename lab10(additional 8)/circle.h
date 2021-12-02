#pragma once
#include <iostream>
#define PI acos(-1)

namespace mt
{

    class Square
    {
    public:
        Square();
        Square(int line);
        ~Square();
        double square();
        double Perimetr();
        void Setline(int line);
        int GetR(){
            return m_line;
        }


    private:
        int m_line;
    };
}
