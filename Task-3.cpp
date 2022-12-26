#include <iostream>
using namespace std;
void printletter(char choice);
int main()
{
    char store;
    cout << "enter the charcter to print " << endl;
    cin >> store;
    printletter(store);
}
void printletter(char choice)
{
    if (choice == 'A')
    {
        cout << "        @@@@@" << endl;
        cout << "       @     @" << endl;
        cout << "      @       @    " << endl;
        cout << "     @         @     " << endl;
        cout << "    @@@@@@@@@@@@@    " << endl;
        cout << "   @             @   " << endl;
        cout << "  @               @    " << endl;
        cout << " @                 @   " << endl;
        cout << "@                   @   " << endl
             << endl
             << endl;
    }
    if (choice == 'X')
    {
        cout << "      #       #              " << endl;
        cout << "       #     #                " << endl;
        cout << "        #   #                  " << endl;
        cout << "         # #                  " << endl;
        cout << "          #                  " << endl;
        cout << "         # #                 " << endl;
        cout << "        #   #                " << endl;
        cout << "       #     #               " << endl;
        cout << "      #       #              " << endl
             << endl
             << endl;
    }
    if (choice == 'Z')
    {
        cout << "       $$$$$$$$$$$$$$$$$$$$$" << endl;
        cout << "                          $  " << endl;
        cout << "                       $     " << endl;
        cout << "                    $        " << endl;
        cout << "                 $           " << endl;
        cout << "              $              " << endl;
        cout << "           $                 " << endl;
        cout << "        $                    " << endl;
        cout << "      $                      " << endl;
        cout << "      $$$$$$$$$$$$$$$$$$$$$$" << endl
             << endl
             << endl;
    }
    if (choice == 'K')
    {
        cout << "           =         =                   " << endl;
        cout << "           =       =                     " << endl;
        cout << "           =     =                       " << endl;
        cout << "           =   =                         " << endl;
        cout << "           ===                           " << endl;
        cout << "           =  =                          " << endl;
        cout << "           =     =                        " << endl;
        cout << "           =        =                      " << endl;
        cout << "           =           =                    " << endl
             << endl
             << endl;
    }
    if (choice == 'S')
    {
        cout << "                       & & & & & & &                       " << endl;
        cout << "                     &                           " << endl;
        cout << "                    &                           " << endl;
        cout << "                   &                             " << endl;
        cout << "                    &                            " << endl;
        cout << "                      &                          " << endl;
        cout << "                        & & & & & & &                  " << endl;
        cout << "                                      &             " << endl;
        cout << "                                       &               " << endl;
        cout << "                                        &                  " << endl;
        cout << "                                      &                 " << endl;
        cout << "                                    &                        " << endl;
        cout << "                        & & & & & &                       " << endl
             << endl
             << endl;
    }
    if (choice == 'U')
    {
        cout << "        *                  *              " << endl;
        cout << "        *                  *              " << endl;
        cout << "        *                  *              " << endl;
        cout << "        *                  *              " << endl;
        cout << "        *                  *              " << endl;
        cout << "        *                  *              " << endl;
        cout << "        *                  *              " << endl;
        cout << "        *                  *              " << endl;
        cout << "        *                  *             " << endl;
        cout << "         *                *              " << endl;
        cout << "          *              *                " << endl;
        cout << "            * * * * * * *                    " << endl;
    }
}
