/* Ramsha Bilal
bilal_week2_ps
*/

//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iomanip>
using namespace std; 

void problem1()
{
    int x = 10, y = 10, z;
    double d;
    x = x + 1;
    cout << "x + 1 = " << x << endl;
    x++;
    cout << "x + 1  = " << x << endl;
    x += 1;
    cout << "x + 1 = " << x << endl;
    y = 4;
    z = 8;
    x = z / y;
    cout << "x = z/y = " << x << endl;
    d = static_cast<double>(y) / z;
    cout << "d = y/z = " << d << endl;
    if (x > 0)
    {
        x += 10;
        cout << "x + 10 = " << x << endl;
    }
    if ((x > 0) && (y < 10))
    {
        d++;
        cout << "x: " << x << endl << "y: " << y << endl << "d: " << d << endl;
    }
    if ((x > 0) || (y < 10))
    {
        d++;
        cout << "x: " << x << endl << "y: " << y << endl << "d: " << d << endl;
    }
    cout << endl;
}

void problem2()
{

    int noOfHotdogs, noOfSodas, noOffries;
    const double HOTDOG_COST = 3.5, FRIES_COST = 2.50, SODA_COST = 1.25, TAX_RATE = 6.25, DISCOUNT = 10;
    double subtotal, total, taxAmount;

    cout << "Welcome to Joe's" << endl
        << endl
        << "How many hotdogs? ";
    cin >> noOfHotdogs;
    cout << "How many fries? ";
    cin >> noOffries;
    cout << "How many sodas? ";
    cin >> noOfSodas;

    if (noOfHotdogs + noOffries + noOfSodas == 0)
    {
        cout << "There are no items in your order. " << endl;
    }
    else
    {
       subtotal = (HOTDOG_COST * noOfHotdogs + FRIES_COST * noOffries + SODA_COST * noOfSodas);
        if (subtotal >= 20)
        {
            subtotal -= (DISCOUNT / 100 * subtotal);
        }

        taxAmount = ((TAX_RATE / 100) * (subtotal));

        total = subtotal + taxAmount;

        cout << "Your order :" << endl
            << noOfHotdogs << " Hotdogs" << endl
            << noOffries << " Fries" << endl
            << noOfSodas << " Sodas" << endl << endl;
        cout << fixed;
        cout << setprecision(2);
        cout << "SubTotal: " << subtotal << endl
            << "Meals Tax:" << taxAmount << endl
            << "Total Due: " << total << endl;
    }
    cout << endl;

}

void problem3WithArray()
{
    const int MAX_VALUES = 30, MIN_VALUES = 1;
    int numOfValues, fibonacciSequence[MAX_VALUES] = { 0,1 };

    cout << "How many numbers in the Fibonacci Sequence do you want displayed? Please choose an integer between " << MIN_VALUES << " and " << MAX_VALUES << endl;
    cin >> numOfValues;
    if ((numOfValues >= MIN_VALUES) && (numOfValues <= MAX_VALUES))
    {
        for (int c = 2; c <= (numOfValues - 1); c++)
            fibonacciSequence[c] = (fibonacciSequence[c - 1] + fibonacciSequence[c - 2]);
    }

    for (int i = 0; i <= (numOfValues - 1); i++)
        cout << fibonacciSequence[i] << " ";
    cout << endl;
}

void problem3WithVector()

{
    const int MAX_VALUES = 30, MIN_VALUES = 1;
    int numOfValues;
    vector<int>sequence = { 0,1 };

    cout << "How many numbers in the Fibonacci Sequence do you want displayed? Please choose an integer between " << MIN_VALUES << " and " << MAX_VALUES << endl;

    cin >> numOfValues;

    if ((numOfValues >= MIN_VALUES) && (numOfValues <= MAX_VALUES))
    {

        for (int c = 2; c < (numOfValues); c++)
        {
            int sum = sequence[c - 1] + sequence[c - 2];
            sequence.push_back(sum);
        }
    }

    for (int i = 0; i <= (numOfValues - 1); i++)
    {
        cout << sequence[i] << " ";
    }
    cout << endl;
}


int main() { 

     cout << "running problem 1" << endl << endl;
     problem1();
     cout << "running problem 2" << endl << endl;
     problem2();
     cout << "running problem 3 using arrays" << endl << endl;
     problem3WithArray();
     cout << "running problem 3 using vectors" << endl << endl; 
     problem3WithVector(); 
     return 0;
     
      
}

