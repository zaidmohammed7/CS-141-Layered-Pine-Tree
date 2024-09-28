/**------------------------------------------
 
    Program 1: Layered Pine Tree
    Prompt for the number of tree layers and display
    ASCII layered pine tree

    Course: CS 141, Fall 2022.
    System: MacOS and G++
    Author: Zaid Khan Mohammed (Starter code provided by Dr. Sara Riazi)
 ---------------------------------------------**/


/*
 * Instructions for the Layered Pine Tree Program:
 *
 * 1. Run the program to display the main menu.
 * 2. Choose an option:
 *    - Option 1: Display a "HELLO" ASCII graphic.
 *    - Option 2: Display a layered pine tree.
 *    - Option 3: Exit the program.
 * 3. If you choose option 1, enter a character for the frame and view the ASCII graphic.
 * 4. If you choose option 2, enter the number of layers for the pine tree and see the output.
 * 5. The program will loop back to the menu until you exit.
 */


#include <iostream>   // for cin and cout
#include <iomanip>    // for setw. The number in setw(...) is the total of blank spaces including the printed item.

using namespace std; // so that we don't need to preface every cin and cout with std::

int main()
{
    while(1){
        // Display the menu and get the user choice
        int menu_option = 0;
        cout << "Program 1: The Pine Tree            \n"
            << "Choose from the following options:  \n"
            << "   1. Display the HELLO graphic  \n"
            << "   2. Display The Pine Tree        \n"
            << "   3. Exit the program          \n"
            << "Your choice -> ";
        cin >> menu_option;

        if (menu_option == 3) { // Handle menu option of 3 to exit
            exit(0); // The call to exit the code successfully (0 means the runs didn't encounter any problem).
        }

        else if (menu_option == 1) { // Handle menu option of 1 to display custom ASCII graphics
            // Display ASCII graphics for "HELLO".
            // The main purpose of this part is to give you hints about usnig setw and setfill and their behaviors.

            //the character for the frame of our display.
            char frame = '-';
            cout << "Enter your frame character: ";
            cin >> frame;
            cout << endl;
            // The goal of next three lines is to print a line with 77 dashes differently.
            cout << setfill(frame); //change the default character for filling the fields defined using setw. You can change it fill to different character to see the difference.
            cout << setw(78) << "\n"; // \n counts in 78 so you will get 77 dashes plus one \n
            cout << setw(78) << endl; ///after setfill you need to pass a string or character to push setfil to fill the field, otherwise you will see an empty line for this instruction. See the differnce in output from this line and the above line.
            cout << setw(77) << frame << endl; //I use 77 with setfill and one extra at the end to get the same result

            cout << setw(8) << " " << "   **    **    ********    **         **         ********    " << setw(9) << "\n";
            cout << setw(8) << " " << "   **    **    ********    **         **         ********    " << setw(9) << "\n";
            cout << setw(8) << " " << "   **    **    **          **         **         **    **    " << setw(9) << "\n";
            cout << setw(8) << " " << "   ********    ********    **         **         **    **    " << setw(9) << "\n";
            cout << setw(8) << " " << "   ********    ********    **         **         **    **    " << setw(9) << "\n";
            cout << setw(8) << " " << "   **    **    **          **         **         **    **    " << setw(9) << "\n";
            cout << setw(8) << " " << "   **    **    ********    ********   ********   ********    " << setw(9) << "\n";
            cout << setw(8) << " " << "   **    **    ********    ********   ********   ********    " << setw(9) << "\n";
            cout << setw(77) << frame << endl; //the extra character is - so in total we will have 77 dashes.
            cout << setw(78) << "\n"; //again, the extra character is \n so you have set the width to 78

            //you can do it this way using a for-loop too
            for (int i = 0; i < 77; i++) {
                cout << frame;
            }
            cout << endl;



        } else if (menu_option == 2) {
            // Prompt for and get the number of layers for the tree.
            int number_of_tree_layers = 0;
            cout << "Number of tree layers -> ";
            cin >> number_of_tree_layers;

            cout << endl; //do not remove this line. It is essential for the autograder!



            // declaring variables
            int curRow;
            int curStars;
            int curLayer;
            int curSpace;
            int trunkHeight;
            int curHeight;
            int curTrunkSpaces;
            int numSpaces;
            int numStars;

            // printing pine stars
            for (curLayer=0;curLayer<number_of_tree_layers;++curLayer){ // outer for loop to loop number_of_tree_layers times
                for (curRow=0;curRow<3;++curRow){ // for loop to iterate 3 times per layer (because there are 3 rows in each layer)
                    numSpaces=number_of_tree_layers-curLayer-curRow+1; // formula I made to calculate the number of spaces depending on the row and layer number
                    for (curSpace=0;curSpace<numSpaces;++curSpace) { // for loop to print spaces based on the spaces formula
                        cout << " ";
                    }
                    numStars=curLayer*2+curRow*2+1; // formula I made to calculate required number of stars for each row
                    for (curStars=0;curStars<numStars;++curStars){ // for loop to print stars based on the stars formula
                        cout<<"*";
                    }
                    cout<<endl; // making sure to jump to a newline after each row
                }
            }

            //printing trunk
            trunkHeight=2*number_of_tree_layers;
            for (curHeight=0;curHeight<trunkHeight;++curHeight){ // for loop that iterates trunkHeight number of times
                for (curTrunkSpaces=0;curTrunkSpaces<number_of_tree_layers;++curTrunkSpaces){ // for loop to print spaces to correctly align the trunk
                    cout<<" ";
                }
                cout<<"|||"<<endl; // jumping to a newline after printing a trunk row
            }


        } //end if( menu_option == 2)


        cout << endl; //DO NOT CHANGE THIS LINE

    }
    return 0;
}
