#ifndef STD2ARRAYS_H
#define STD2ARRAYS_H

#include <array>
#include <stdexcept>  

const int MAXNUMBEROFROWS = 100;      
const int MAXNUMBEROFCOLUMNS = 100;   


void fillArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns);
void printArray(const std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns);
void fillArrayNWVER(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns);

#endif 
