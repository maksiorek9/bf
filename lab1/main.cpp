﻿#include <iostream>
#include <fstream>
#include <string>
#include "func.hpp"

int main()
{
    std::ifstream in("input.txt");
    if (!in.is_open())
    {
        std::cout << "Err";
        return 0;
    }
    
    std::string s; 
    std::string lasts;
    std::ofstream out("input.txt", std::ios::app);


    while (std::getline(in, s))
    {
        lasts = s;
    }
    
    
    if (!lasts.empty())
    {
        int i = 0;
        std::string number;
        while (lasts[i] != ' ')
        {
            number += lasts[i];
            i++;
        }
        int num = stoi(number);
        out << '\n' << num + 1 << " " << dateyear() + 1900 << "_" << datemon() + 1 << "_" << dateday() << "_" << datehour() << "_" << datemin() << "_" << datesec();
    }
    else
    {
        out << 1 << " " << dateyear() + 1900 << "_" << datemon() + 1 << "_" << dateday() << "_" << datehour() << "_" << datemin() << "_" << datesec();
    }

 
    
	

	return 0;
}
