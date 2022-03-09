#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int Recursion(int n, int& c);

int main() {
    
    int a, n;       //a- new int returned; n- starting point;
    static int c = 0;    //steps counter;
    
    cout << "Enter a value to test the Collatz Conejcture: ";        //user prompt/input for starting point
    cin >> n;
    cout << "\nTesting the Collatz Conjecture with n = " << n << endl << endl;
    
    a = Recursion(n ,c);    //recursion function call
    
    if(a == -1)             //-1 returned when finished at 1
    {cout << "\nValue 1 reached in " << c << " steps.\n\n";}  //print counter (number of steps done
    
    return 0;

}

int Recursion(int n, int& c)
{
    cout << setw(3);
    if(n == 1)//Base case of 1
    {
        return -1 ;
    }
    else if(n % 2 == 0)//if even
    {
        cout << n << "     / 2 = ";
        c++;                //adds to steps counter
        n = n/2;            //calculating next number
        cout << n << endl;
        return Recursion(n, c); //calling function
    }
    else if(n % 2 == 1)//if odd
    {
        cout << n << " * 3 + 1 = ";
        c++;                 //adds to steps counter
        n = (n*3)+1;         //calculating next number
        cout << n << endl;
        return Recursion(n, c); //calling function
    }
    else    //anything else(error)
    {
        throw string("ERROR");
    }
    
}


