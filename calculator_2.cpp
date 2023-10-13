#include <iostream>
using namespace std;

// Algorithm:
/* 
    1. Creating c++ boilerplate (preprocessing command!)
    2. declearing while loop for the continuety of the code!
    3. declearing variables to store the values to from the user!
    4. prompting user to enter data
    5. Switch statement to watchdog operators
    6. conditions to check the values for division
    7. showing final result to user
*/

// document.designMode = 'on'; 

int main()
{

    while (true)
    {
        double num1, num2, result;
        char op;

        cout<<endl;

        cout<<"Enter your 1st Number: "<<endl;
        cin>>num1;

        cout<<"Choose Operator: +, -, *, /"<<endl;
        cin>>op;
        
        cout<<"Enter your 2nd Number: "<<endl;
        cin>>num2;

        if (op == '+')
        {
            result = num1 + num2;
            cout<<"Your answer is: "<<result<<endl;
        }
        else if (op == '-')
        {
            result = num1 - num2;
            cout<<"Your answer is: "<<result<<endl;
        }
        else if (op == '*')
        {
            result = num1 * num2;
            cout<<"Your answer is: "<<result<<endl;
        }
        else if (op == '/')
        {
            if (num2 == 0)
            {
                cout<<"Division with 0 is not allowed!"<<endl;
            }
            else{
                result = num1 / num2;
                cout<<"Your answer is: "<<result<<endl;
            }        
        }
        else{
            cout<<"Result was not possible due to Invalid Operator!"<<endl;
        }
    }
    
}
