#include <iostream>
#include <vector>
using namespace std;

int main(){
    // 2D Arrays: Arrangement consisting of tabular data (rows and columns) is called a 2D Array or Matrix
    const int COUNTRIES = 5;
    const int MEDALS = 3;
    // First const creates an array of 10 values
    // second const creates an array of 3 values
    // counts creates the 2D array

    string countries[] = 
    {
        "US",
        "China",
        "ROC",
        "Great Britain",
        "Japan"
    };
    int total = 0;
    int medal_counts [COUNTRIES][MEDALS] = 
    {
        {39, 41, 33},
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {13, 1, 19}
    };

    // Print in tabular format:
    for(int i = 0; i < COUNTRIES; i++)
    {
        for (int j = 0; j < MEDALS + 1; j++)
        {
            if (j < MEDALS)
            {
            cout << medal_counts[i][j] << ", ";
            }
            else
            {
            total = medal_counts[i][0] + medal_counts[i][1] + medal_counts[i][2];
            cout << total;
            }
        }
        cout << endl;
    }

    // boolean matrix of a 5x5 with true or false values.
    bool mat[5][5] = 
    {
        {true, true, false, true, false},
        {false, false, false, false, true},
        {false, true, false, true, true},
        {true, true, true, false, false},
        {false, false, false ,false, false}
    }; 


    /*
        Day 3:
        ** Missing day 2's notes **
        Vectors:
        The size of an array cannot be changed after it is created.
        You need to know the size BEFORE you define an array
        Any function calling the array needs the capacity/size of array

        Vectors are arrays that don't have a fixed size.
        Doesn't require an extra variable to tracak the size
            Has vector.size()
            (Similar to string.length())
        Useful when data is added frequently and removed frequently.

        #include <vector> 

        vector<double> vector_name;
        Default: Vector is created empty
        Always initialised to be empty.
        Size of vector does not need to be declared. (No number in [])

        vector<int> name1(10);
        vector<string> name2(3);
        vetor<double> values();  -- DO NOT USE EMPTY PARENTHESIS TO CREATE VECTOR -- ERROR --
        When you add an element that goes beyond the obunds of a vector,
        (i.e, an 11th element to a vector of size 10,) the vector size
        DOUBLES.

    */

   cout << endl << endl << "DAY 3 " << endl << endl;

   vector<int> v;
   // v.size() == 0
   v.push_back(1); // Size 1, Capacity 1
   v.push_back(2); // Size 2, Capacity 2
   v.push_back(3); // Size 3, Capacity 4
   v.push_back(4); // Size 4, Capacity 4
   v.push_back(5); // Size 5, Capacity 8
   // Push works as an insert, pop works as a deletion.
   v.pop_back(); // Size 4, Capacity 4

    // Creates a vector, and initialises each value to an integer from 1-10.
   vector<int> numbers(10);
   for (int i = 0; i < numbers.size(); i++)
   {
    numbers[i] = i + 1;
   }

   // OR

   for (int i = 0; i <= 10; i++)
   {
    numbers.push_back(i);
   }

    // Vectors can aso be initialised like arrays.
    vector<int> your_money = {5, 16, 82, 4, 98, 14, 2};
    
    vector<int> v; // Creates a vector
    vector<int> g(5); // Creates a vector of 5 elements
    vector<int> j(5,1); // Creates a vector of 5 elements, each being a 1.

    // CANNOT do vector<int> name(length) = {1, 2, 3, ...}
    // This creates a compile-time error.
    // MUST do vector<int> name(length);
    //                     name = {1, 2, 3, ...}

    /*
        View each element of a vector in the same way as arrays.
        for(int i = 0; i < vector_name.size(); i++)
        {
            cout << vector_name[i] << endl;
        }

        You can also copy vectors by doing vector_name_1 = vector_name_2;

        [vector].size()
        .at(i)
        .push_back
        .pop_back
        .front  -- Return the first value in a vector
        .back  -- Return the last value in a vector

        double sum(vector<double> values)
        {
            double total = 0;
            for(int i = 0; i < values.size(); i++)
            {
                total += values[i];
            }
            return total;
        }

        Does NOT change the vector values globally, only changes values in the function.
        Unlike arrays, where chainging an array in a function would
        globally change that array.

        You can create a function that returns a vector, using

        vector<double> functionName(Function, Parameters)  
    */

    return 0;
}