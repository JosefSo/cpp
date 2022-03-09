#include "mat.hpp"
#include <string>
#include <iostream>
#include <stdexcept>

using namespace std;
namespace ariel
{
    string mat(int col, int row, char symbol1, char symbol2)
    {
        string ans = "";

        if (row % 2 == 0 || col % 2 == 0)
        {
            throw runtime_error("Mat size is always odd");
        }
        else if (row == 0 || col == 0)
        {
            throw runtime_error("Mat size is always non-zero");
        }
        else if (row < 0 || col < 0)
        {
            throw runtime_error("Mat size is always positive");
        }
        else if (symbol1 == symbol2)
        {
            throw runtime_error("Entered wrong values: symbol1 and symbol2 need be a different symbols");
        }
        else
        {
            for (int i = 0; i<row; i++){
                for (int j = 0; j<col; j++){
                    
                    if (i < row/2)
                    {
                        if (i%2 == 0 && j>=i && j<=col-(i+1))
                            ans += symbol1;
                        else if (j==0)
                            ans += symbol1;
                        else if (j==col-1)
                            ans += symbol1;
                        else
                            ans += symbol2;
                    }
                    else
                    {
                        if (i%2 == 0 && j>=row-(i+1) && j<=col-(row-i))
                            ans += symbol1;
                        else if (j==0)
                            ans += symbol1;
                        else if (j==col-1)
                            ans += symbol1;
                        else
                            ans += symbol2;
                    }
                }
            ans.append("\n");
            }
            return ans;
        }
    }
}
