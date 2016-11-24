#include<iostream>
#include<string>
#include<trigo>
#include<smath>

using namespace std;

int main()
{
    string ch;
    int choice, choice1, a, b;
    do{
        cout << "Scientific calculator" << endl;
        cout << "1) Basic maths calculations" << endl;
        cout << "2) Trignometric/Inverse trignometric calculations" << endl;
        cout << "3) Logarithimic calculation" << endl;
        cout << "4) Exponentional calculation" << endl;
        cout << "5) Conversions" << endl;
        cout << "6)" << endl;
        cout << "What do you want to do - ";
        cin >> choice;
        switch(chioce)
        {
            case 1: cout << "Maths";
                    cout << "1) Add" << endl;
                    cout << "2) Subtract" << endl;
                    cout << "3) Multiply" << endl;
                    cout << "4) Divide" << endl;
                    cout < <"6) Factorial" << endl;
                    cout << "7) Percent" << endl;
                    cout << "what do you wantg to do - ";
                    cin >> chioce1;
                    switch(choice1)
                    {
                        case 1: cout << "enter the numbers " ;
                            cin >> a >> b
                            break;
                        
                        case 2: //sub
                            break;
                    
                        case 3: //mul
                            break;
                        
                        case 4: //div
                            break;
                       
                        default : cout << "wrong choice. enter or exit";
                            cin >> 
                    }   
                break;
            
            case 2: cout << "Trignometric or Inverse - " <<;
                    cin >> choice1;
                    switch(choice1)
                    {
                        case 1: cout << "1) Sine" << endl;
                                cout << "2) Cosine" << endl;
                                cout << "3) Tangent" << endl;
                                cout << "4) Cotangetnt" << endl;
                                cout << "5) Secant" << endl;
                                cout << "6) Cosecant" << endl;
                                cout << "Enter choice - " << endl;
                                cin >> choice1;
                            break;
                        
                        case 2: cout << "inverse of - " << endl;
                                cout << "1) Sine" << endl;
                                cout << "2) Cosine" << endl;
                                cout << "3) Tangent" << endl;
                                cout << "4) Cotangetnt" << endl;
                                cout << "5) Secant" << endl;
                                cout << "6) Cosecant" << endl;
                                cout << "Enter choice - " << endl;
                                cin >> choice1;
                            break;
                        
                    }
                break;
            
            case 3: cout << "Logarothmic calculations";
                    cout << "1) Log addition" << endl;
                    cout << "2) Log subtraction" << endl;
                    cout << "3) Log division" << endl;
                    cout << "4) logarithm with power" << endl;
                    cout << "5) Log woith base" << endl;
                    cout << "Enter choice - " ;
                    cin >> choice1;
                    switch(choice1)
                    {
                        case 1: //add
                            break;
                        
                        default: cout << "wrong choice" << endl;
                    }   
                break;
            
            default: cout << "wrong choice" << endl; 
        }
    return 0;
}
