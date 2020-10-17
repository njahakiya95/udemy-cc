#include <iostream>
using namespace std;
/*This program creates two 1D vectors, then adds elements to them and displays
each element along with vector size. It then creates a 2D vector using both 1D vectors
and displays each element and size.*/ 

int main() {
    //Declare two empty integer vectors named vector1 and vector 2
    vector<int> vector1 (0);
    vector<int> vector2 (0);

    //Add 10 and 20 to vector1 using push back
    vector1.push_back(10);
    vector1.push_back(20);

    //Display elements along with vector size
    cout << "The first element of vector1 is " << vector1.at(0) << "\n";
    cout << "The second element of vector1 is " << vector1.at(1) << "\n";
    cout << "The size of the vector is " << vector1.size() << endl;

    //Add 10 and 20 to vector1 using push back
    vector2.push_back(100);
    vector2.push_back(200);

    //Display elements along with vector size 
    cout << "The first element of vector2 is " << vector2.at(0) << "\n";
    cout << "The second element of vector2 is " << vector2.at(1) << "\n";
    cout << "The size of the vector is " << vector2.size() << endl;

    //Add vector1 and vector2 to a 2D array called vector_2d
    vector<vector<int>> vector_2d (0);
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    //Display elements of vector_2d along with size of vector
    cout << "The first element of vector_2d is " << vector_2d.at(0).at(0) << "\n";
    cout << "The second element of vector_2d is " << vector_2d.at(1).at(0) << "\n";
    cout << "The size of the 2D vector is " << vector_2d.size() << endl;

    //Update vector1.at(0) to 1000
    vector1.at(0) = 1000;

    //Re-display elements in vector1
    cout << "The first element of vector1 is " << vector1.at(0) << "\n";
    cout << "The second element of vector1 is " << vector1.at(1) << endl;
}