#include<iostream>
#include<string>
#include<trigo>
#include<smath>

using namespace std;

int main()
{
    string ch;
    int choice, choice1, a, b, x;
    float angle;
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
                    cout < <"5) Factorial" << endl;
                    cout << "6) Percent" << endl;
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
                       
                        case 5: cout << "enter the number - ";
                                cin >> a;
                                x = fact(a);
                                cout << x << endl;
                                cout << "want to continue -" << endl;
                                cin >> ch;
                            break;
                            
                        default : cout << "wrong choice. enter or exit";
                                  cin >> ch;
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
                                switch(chioce1)
                                {
                                    case 1: cout << "enter angle";
                                            cin >> angle;
                                            x = sin(angle);
                                            cout << x << endl;
                                            cout << "do you want to continue - " ;
                                            cin >> ch;
                                        break;
                                        
                                    case 2: cout << "enter angle";
                                            cin >> angle;
                                            x = cos(angle);
                                            cout << x << endl;
                                            cout << "do you want to continue - " ;
                                            cin >> ch;
                                        break;
                                        
                                    case 3: cout << "enter angle";
                                            cin >> angle;
                                            x = tan(angle);
                                            cout << x << endl;
                                            cout << "do you want to continue - " ;
                                            cin >> ch;
                                        break;
                                        
                                    case 4: cout << "enter angle";
                                            cin >> angle;
                                            x = cot(angle);
                                            cout << x << endl;
                                            cout << "do you want to continue - " ;
                                            cin >> ch;
                                        break;
                                        
                                    case 5: cout << "enter angle";
                                            cin >> angle;
                                            x = sec(angle);
                                            cout << x << endl;
                                            cout << "do you want to continue - " ;
                                            cin >> ch;
                                        break;
                                        
                                    case 6: cout << "enter angle";
                                            cin >> angle;
                                            x = cosec(angle);
                                            cout << x << endl;
                                            cout << "do you want to continue - " ;
                                            cin >> ch;
                                        break;
                                        
                                    default: cout << "soryy not possible " << endl;
                                }
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
                                switch(choice1)
                                {
                                    case 1: cout << "enter value  - " ;
                                            cin >> value;
                                            x = i_sin(value);
                                            cout << x << endl;
                                            cout << "do you want to continue - ";
                                            cin >> ch;
                                        break;
                                    
                                    case 2: cout << "enter value  - " ;
                                            cin >> value;
                                            x = i_cos(value);
                                            cout << x << endl;
                                            cout << "do you want to continue - ";
                                            cin >> ch;
                                        break;
                                        
                                    case 3: cout << "enter value  - " ;
                                            cin >> value;
                                            x = i_tan(value);
                                            cout << x << endl;
                                            cout << "do you want to continue - ";
                                            cin >> ch;
                                        break;
                                          
                                    case 4: cout << "enter value  - " ;
                                            cin >> value;
                                            x = i_cot(value);
                                            cout << x << endl;
                                            cout << "do you want to continue - ";
                                            cin >> ch;
                                        break;
                                        
                                    case 5: cout << "enter value  - " ;
                                            cin >> value;
                                            x = i_sec(value);
                                            cout << x << endl;
                                            cout << "do you want to continue - ";
                                            cin >> ch;
                                        break;
                                        
                                    case 1: cout << "enter value  - " ;
                                            cin >> value;
                                            x = i_cosec(value);
                                            cout << x << endl;
                                            cout << "do you want to continue - ";
                                            cin >> ch;
                                        break;
                                        
                                    default: cout << "sorry not possible" << endl;
                                }
                            break;
                        
                    }
                break;
            
            case 3: cout << "Logarothmic calculations";
                    cout << "1) Log addition" << endl;
                    cout << "2) Log subtraction" << endl;
                    cout << "3) log multiplication" << endl;
                    cout << "4) Log division" << endl;
                    cout << "5) logarithm with power" << endl;
                    cout << "6) Log woith base" << endl;
                    cout << "Enter choice - " ;
                    cin >> choice1;
                    switch(choice1)
                    {
                        case 1: //log add
                            break;
                            
                        case 2: // log sub
                            break;
                            
                        case 3: //log multiply
                            break;
                        
                        case 4: //log div
                            break;
                            
                        case 5: cout << "1) addition" << endl;
                                cout << "2) subtraction" << endl;
                                cout << "3) multiplication" << endl;
                                cout << "4) divide" << endl;
                                cout << "Enter choice " ;
                                cin >> choice1;
                                switch(choice1)
                                {
                                    case 1: //add
                                        break;
                                        
                                    case 2: //sub
                                        break;
                                        
                                    case 3: // multiply
                                        break;
                                        
                                    case 4: //div
                                        break;
                                        
                                    default: cout << "sorry not possible " << endl;
                                }
                            break;
                            
                        default: cout << "wrong choice" << endl;
                    }   
                break;
            
            default: cout << "wrong choice" << endl; 
        }
    }while(strcmp(ch, )==0);    
    return 0;
}
