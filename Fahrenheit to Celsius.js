
//fahtemp = (celtemp * 9.0 / 5.0) + 32; --------F1
//convert faherheit into celsius
//C= (5/9)x(f-32) ------------------------------F2
//---------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main()
{
   float fahtemp , celtemp;
   cout<<"Enter the temperature in fahrenheit:"<<endl;
   cin >> fahtemp;
   celtemp=((fahtemp-32)*(5.0/9.0));
   cout<<"temeprature in celsius:"<<celtemp<<endl;
}
//----------------------------------------------------------------------------------------------------------

// BY JAVASCRIPT

function fahrenheitToCelsius(fahtemp) {
    return (fahtemp - 32) * 5/9;
}
// input from the user
//the prompt function returns the user's input as a string regardless of whether the user enters numeric characters or any other type of data
var fahtemperature = prompt("Enter the temperature in Fahrenheit:");

// Convert Fahrenheit to Celsius
var celtemperature = fahrenheitToCelsius(parseFloat(fahtemperature));
//fahrenheitToCelsius function call 
//floating-point number using parseFloat

//  result
console.log("Temperature in Celsius: " + celtemperature.toFixed(2));
//2 float point


//-----------------------------------------------------------------------------------------------------------
//PYTHON
fahtemp = float(input("Enter the temperature in Fahrenheit: "))
# Fahrenheit to Celsius
celtemp = (fahtemp - 32) * (5.0 / 9.0)
print(f"Temperature in Celsius: {celtemp:.2f}")

//------------------------------------------------------------------------------------------------------------
//IN C#
using System;

class Program
{
    static void Main()
    {
        Console.Write("Enter the temperature in Fahrenheit: ");
        double fahtemp = Convert.ToDouble(Console.ReadLine());
        // Convert Fahrenheit to Celsius
        double celtemp = (fahtemp - 32) * (5.0 / 9.0);
        Console.WriteLine($"Temperature in Celsius: {celtemp:F2}");
    }
}

//-----------------------------------------------------------------------------------------------------------
 // IN C 
 #include <stdio.h>

int main() {
    // Write C code here
    double feh,cel ;
    printf("ENETR TEM IN FAHE:");
    scanf("%lf",&feh);
    cel = (feh - 32) * (5.0 / 9.0);
    printf("cel:%.2f\n",cel);

    return 0;
}

//--------------------------------------------------------------------------------------------------------------
// IN R LANGUAGE 
//readline is used to get user input as a string.
//as.numeric is used to convert the input to a numeric value.
fahtemp <- as.numeric(readline("Enter the temperature in Fahrenheit: "))
//<- is used as an assignment operator.
celtemp <- (fahtemp - 32) * (5.0 / 9.0)
//cat is a function used for printing
//digir =2 in 2 decimal places
cat("Temperature in Celsius:", format(celtemp, digits = 2), "\n")

//--------------------------------------------------------------------------------------------------------------
