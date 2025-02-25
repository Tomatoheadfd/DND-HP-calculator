
#include "hp_calculator.hpp"

int main ()
{
User_Interface calculation;
Health_Die_List list;
string program_loop;
int do_calculation = 0;

    while (do_calculation != 4)
    {
        //___________________________________________________________________
        cout << "Type the corronsponding number of the option to execute it:" 
        << endl << "Type 1) to calculate health point start of gains" 
        << endl << "Type 2) to see class hit die table" 
        << endl << "Type 3) role hit die" 
        << endl << "Type 4) to end the program" 
        << endl;
        //___________________________________________________________________
        if (!(cin >> do_calculation) || do_calculation < 1 || do_calculation > 4)
        {
            cout << "Invalid input. Please enter a number between 1 and 4." << endl;

            // Clear the error flag and ignore the rest of the input until a newline is encountered
            cin.clear();  // Clears error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Discards invalid input in the buffer
            continue;  // Skips the rest of the loop and asks for input again
        }

        if (do_calculation == 1)
        {
        calculation.data_request();
        } else if (do_calculation == 2)
               {
                list.print_hitdie();
               } else if (do_calculation == 3) 
                      {
                        list.role_die();
                      }
    }



return 0;


}
