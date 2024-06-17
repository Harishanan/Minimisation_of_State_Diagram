#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;                      //number of entering states
    string a[10];               //maximum 10 states can be enter
    int pos = -1;               //position in array
    char replace_state;         //existing state
    char search_state;          //duplicate state

    cout << "Enter your number of elements: " << endl;  //ask how many states
    cin >> n;

    cout << "Enter your elements: " << endl;            //strore the entering elements
    for (int i = 0; i < n; i++) {
        char replacestate = 'a' + i;
        cout << replacestate << " ";
        cin >> a[i];
    }

    // "removing duplicate from ";
    do
    {
        pos = -1;

        for (int i = 0; ((i < n) && (pos == -1)); i++)
        {
            for (int j = i + 1; j < n; j++)
            {


                if (a[i] == a[j])                   // Looking for duplicates
                {
                    pos = i;                        // Marking the position duplicate was found
                    replace_state = 'a' + i;        // The existing elements' present state
                    search_state = 'a' + j;         // The dulpicating elements' present state

                    while (j < n)                  // If found, removing it from the array
                    {
                        a[j] = a[j + 1];           //duplicate element takes the next row value.
                        j++;
                    } // while
                    n--;


                    for (int pos = 0; pos < n; pos++)       // looking for the state to be replaced
                    {
                        for (int k = 0; k < 4; k++) {       //checking every elements in a row
                            if (a[pos][k] == search_state)
                            {
                                a[pos][k] = replace_state;  // replacing the duplicate state
                            }    // if
                        }       // for
                    }          // for


                    cout << "removing duplicates from your elements: " << endl;     //print minimised state table
                    for (int i = 0; i < n; i++) {
                        char replacestate = 'a' + i;
                        cout << replacestate << "  " << a[i] << endl;
                    }           // for
                }               // if
                else {
                    continue;
                }
            }                   // for
        }                       // for
    } while (pos != -1);        //yes, exit do while loop
}