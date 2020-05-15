// Section 9
// Challenge
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    char choice{};
    vector<int> list {};
    
    do {
        
        cout << "\n============ MENU =============" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "F - Find a number" << endl;
        cout << "C - Clear the list" << endl;
        cout << "Q - Quit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        cout << "===============================" << endl;

        if (choice == 'P' || choice == 'p'){
            if (list.size() != 0) {
                cout << "[ ";
                for (auto item:list) {
                    cout << item << " ";
                }
                cout << "]";
            } else {
                cout << "[] - the list is empty" << endl;
            }
        }
        
        else if (choice == 'A' || choice == 'a'){
            cout << "Add an integer to the list: ";
            int num{};
            
            cin >> num;
            if (cin.fail()) {
                cout << "Not int - Restarting..." << endl;
                break;
            }
            else {
                list.push_back(num);
                cout << num << " added." << endl;
            }
        }
        else if (choice == 'M' || choice == 'm'){
            if (list.size() != 0) {
                cout << "Calculating mean..." << endl;
                int total{};
                    for(auto element:list){
                        total += element;
                    }
                double mean{ static_cast<double>(total) / list.size()};
                cout << "The mean is " << mean << endl;
            } else {
                cout << "Unable to calculate the mean - no data" << endl;
            }
        }
        else if (choice == 'S' || choice == 's') {            
            if (list.size() != 0) {
                
                int min{list[0]};
                for (int i{1} ; i < list.size() ; ++i){
                    if (list[i] < min)
                        min = list[i];
                }
                cout << "The min is " << min << endl;

            } else {
                cout << "Unable to determine the smallest number - list is empty" << endl;
            }
        }
            
        else if (choice == 'L' || choice == 'l') {            
            if (list.size() != 0) {
                
                int max{list[0]};
                for (int i{1} ; i < list.size() ; ++i){
                    if (list[i] > max)
                        max = list[i];
                }
                cout << "The max is " << max << endl;

            } else {
                cout << "Unable to determine the largest number - list is empty" << endl;
            }           
        }
        
        
        else if (choice == 'F' || choice == 'f') {            
            if (list.size() != 0) {
                
                cout << "Enter the int that you want to find: "; 
                int looking{};
            
                cin >> looking;
                if (cin.fail()) {
                    cout << "Not int - Restarting..." << endl;
                    break;
                }
                else {
                    bool found{0};
                    int i {0};
                    i = 0;
                    found = 0;
                    
                    while (i < list.size() && !found)
                    {
                        if (list[i] == looking) {
                            cout << "Element " << list[i] << " found at index " << i << "!" << endl; 
                            found = 1;
                        }
                        
                        i++;
                    }
                    
                    if (found == 0) {
                        cout << "Element not found" << endl;
                    }
                }

            } else {
                cout << "Unable to find any number - list is empty" << endl;
            }           
        }
        
        else if (choice == 'C' || choice == 'c'){
            char answer{};
            do {
                cout << "Clearing list...Are you sure? (Y/N)" << endl;
                cin >> answer;
                
                if (answer == 'Y'){
                    list.clear();
                    cout << "Done.";
                } else if (answer == 'N') {
                    cout << "Declined - Coming back..." << endl;
                } else if (answer == 'n' || answer == 'y') {
                    cout << "In capital letters please" << endl;
                }

            } while (answer != 'Y' && answer != 'N');
                
        }
        
        else if (choice == 'Q' || choice == 'q'){
            cout << "Goodbye" << endl;
        }
        else 
            cout << "Unknown selection, please try again" << endl;
            
        
    } while (choice != 'Q' && choice != 'q');
    
    cout << "Loop end" << endl;
    

    return 0;
}

