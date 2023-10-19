#include <iostream>
#include <vector>
using namespace std;

// This functions is a part of the Day 2 Code.
int insertAtPosition(int position, int element, int A[], const int CAPACITY, int current_size)
{
    for (int i = current_size - 1; i >= position; i--)
    {
        // Puts the value of the array at index i + 1 equal to the value of array at index i.
        // This shifts the element of each index to the right one.
        A[i+1] = A[i];
    }
    A[position] = element;
    current_size ++;

    return current_size;
}

void displayArray(int A[], int current_size)
{
    for (int i = 0; i < current_size; i++)
    {
        cout << A[i] << " ";
    }
}

int deleteElement(int to_delete, int A[], int current_size)
{
    int position_found = -1;
    // We don't know where 7 is in our array, so we must search for it.
    for (int i = 0; i < current_size; i++)
    {
        if(A[i] == to_delete)
        {
            position_found = i;
        }
    }
    for (int i = position_found + 1; i < current_size; i++)
    {
        A[i-1] = A[i];
    }
    current_size --;
    return current_size;
}

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
        Day 2
        When sending an array to a function, don't send the rows, but you send the columns
        Every row must have a fixed # of columns, so you must specify which columns to use.

        Arrays in memory:
        stored as one big line of data.
        Array [3][2] = [][] | [][] | [][]
        where [] is a piece of data in the array, and the | tells the compiler that 
        this is a new column of data

        offset: row_index * # of columns + column_index

        Drawbacks of an array:
        Size cannot be changed after it is first initialised.
        Size must be correct when the array is created.
        Compiler needs to know size in order to build array and functions need to be
        told the number of elements in an array, and its capacity

        Commonly Used Array Algorithms
        Insertion:
        Given an array of elements, (int in this example,) we can insert an element in 2 ways.
            Either at the end of the array, or anywhere there is space.

        int Array[10] = 
        
        0  1  2  3  4  5  6  7  8  9 
        1  3  5  7  9  11

        **Where the top row is the index and the bottom row is the element itself.

        We need the position of insertion and the element to insert.
        All we do is equate array at the index (position,) to the element we wish to insert.

        Given an array A:

        A[position] = element;

        Array[6] = 13;

        Or, we could choose to insert an element into index #1
        Again, all we need to know is the position and the desired element.
        This inserts the element and then shifts all other values up one index value.

        element = 1
        position = 1

        Start at the last element we have stored and move them to the right, 
        in order to not lose values

        for (int i = index_max; i > (POSITION); i--)


    */


   cout << endl << endl << "DAY 2 CODE" << endl << endl;

   const int ARRAY_CAPACITY = 10;
   int current_size = 7;
   int A[10] = {1, 3, 5, 7, 9, 11, 13};

    // Insert element 1 at index position 1.
   int element = 1;
   int position = 1;

   displayArray(A, current_size);

   current_size = insertAtPosition(position, element, A, ARRAY_CAPACITY, current_size);

   displayArray(A, current_size);

   cout << endl << endl;

   element = 2;
   position = 2;

   current_size = insertAtPosition(position, element, A, ARRAY_CAPACITY, current_size);

   displayArray(A, current_size);

   /*
        Deletion:
        Delete a specific element from the array

        A[10] = {1, 1, 2, 3, 5, 7, 9, 11, 13};
        Start at index 6, moving everything left by one.
        This replaces 7 with 9.
   */

  // The number we wish to delete
  int to_delete = 7;
  
  // We reassign current size, as doing this operation will change the current length of our array.
  current_size = deleteElement(to_delete, A, current_size);
  cout << endl << endl;

    // Displays array.
  displayArray(A, current_size);

    // Repeats
  to_delete = 9;
  
  current_size = deleteElement(to_delete, A, current_size);
  cout << endl << endl;

  displayArray(A, current_size);

  to_delete = 11;
  
  current_size = deleteElement(to_delete, A, current_size);
  cout << endl << endl;

  displayArray(A, current_size);


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