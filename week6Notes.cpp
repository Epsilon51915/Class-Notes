#include <iostream>
using namespace std;

/*
Patterns
*/

int main(){

    /*
    1.
    * * * * *
    * * * * *
    * * * * * 
    * * * * * 
    * * * * * 
    */ 



   cout << "* * * * *" << endl;
   cout << "* * * * *" << endl;
   cout << "* * * * *" << endl;
   cout << "* * * * *" << endl;
   cout << "* * * * *" << endl;


   cout << endl << "OR" << endl << endl;

   for(int i = 1; i <= 5; i++)
   {
    cout << "* * * * *" << endl;
   }
   cout << endl;
   
   cout << "OR" << endl << endl;

   for(int i = 1; i <= 5; i++)
   {
        for(int j = 1; j <= 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
   }

    /*
    2.
    0 * * * *
    * 0 * * *
    * * 0 * *
    * * * 0 *
    * * * * 0
    */
cout << endl << endl;

   for (int i = 1; i <= 5; i++)
   {
        for(int j = 1; j <= 5; j++)
        {
            if (i == j)
            {
                cout << "0 ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
   }

    /*
        Day 2!
        Arrays : Store a sequence of data (Provided these are all the same data type [Double, int, string, char, etc.])
        Array syntax: [num, num2, num3, num4, etc.]
        Advantages : You can easily visit each element in an array, checking and updating a value holding the maximum.
    */
   double values[10];

   int array[10]; // Creates a list (arrar) of 10 ints.
   int a = 0;
   int b = 1;
   int c = 2;
   int d = 3;
   int e = 4;
   int f = 5;
   int g = 6;
   int h = 7;
   int i = 8;
   int j = 9;
   int array2[10] = {a, b, c, d, e, f, g, h, i, j};


    // Initialised and defines an array without explicitly declaring the size.
   int array3[] = {a, b, c, d, e};
   string names[11]; // Creates an array of name "names" that holds 11 values.

   // Initialise an array using loops
   for(int i = 0; i < 10; i++)
   {
     array2[i] = i*i;
   }

   for (int i = 0; i <= 9; i++)
   {
    cout << array2[i] << " ";
   }

   // Updating array values: 
   for(int i = 0; i < 10; i++)
   {
    array2[i] = array2[i] + 1;
   }

   for (int i = 0; i < 10; i++)
   {
    cout << array2[i] << " ";
   }


    cout << endl << endl;

   int stock_price[10] = {32, 52, 63, 8, 194, 62, 82, 90, 17, 183};

   for (int i = 0; i < 10; i++)
   {
    cout << stock_price[i] << " ";
   }

    int max_seen = -100000;
    for(int i = 0; i < 10; i++)
    {
        if (stock_price[i] > max_seen)
        {
            max_seen = stock_price[i];
        }
    }
   
    return 0;
}