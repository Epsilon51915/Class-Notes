#include <iostream>
#include <cmath>

using namespace std;

// Greets three different users.
int greetUser(string name, string name2, string name3){

  cout << "Hello " << name << endl;  
  cout << "Hello " << name2 << endl;
  cout << "Hello " << name3 << endl;
  return 0;
}
// DO NOT write functions inside int main.

double getArea(float side_length){
    double area;
    area = side_length * side_length;
    return area;
}

int main(){
  // Let's print hello as we have learnt so far!
    cout << "Hello" << endl;

    // Let's create a name variable and greet the person
    string name = "John";
    cout << "Hello " << name << endl;

    // Let's update the name and then greet the new person now
    string name2 = "Mark";
    cout << "Hello " << name2 << endl;

    // Let's update it again!
    string name3 = "Steve";
    cout << "Hello " << name3 << endl;

    /* Greeting the user, as we saw above requires cout statements each time we need to greet. 
    ** Can we identify what's common here across all the lines of code... and sort of pull it out into a block of its own?
    */
cout << "Now to use our created function" << endl;
cout << endl << endl;
   greetUser(name, name2, name3);
   cout << endl << endl;


cout << "Area of Square:" << endl << endl;

    // Let's define the logic for printing area of a square
    // Think about what we need as variables.... - perhaps one variable that stores length of the side?

    float side_length = 2;

    // Calculate area of the square as Area = side_length x side_length
    float area = side_length * side_length;

    // Print the area
    cout << "Area of square of length " << side_length << " = " << area << endl;

    // Maybe the length has to change... so let's update it.
    side_length = 3;

    // What's the area now?
    area = side_length * side_length;

    // Print the area
    cout << "Area of square of length " << side_length << " = " << area << endl;

    // Maybe the length has to change again
    side_length = 3.5;

    // What's the area now?
    area = side_length * side_length;

    // Print the area
    cout << "Area of square of length " << side_length << " = " << area << endl;

    cout << "Now with our function" << endl;
    getArea (side_length);
    side_length = 5;
    cout << "Area of square of length " << side_length << " = " << area << endl;
    cout << endl << endl;
    return 0;
}