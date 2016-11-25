#include<iostream>
#include<string>
#include"trigo.h"
#include"smath.h"
#include"conversions.h"

using namespace std;

int main()
{
    string ch;
    int choice, choice1, choice2, a, b, x;
    float angle;
    do{
        cout << "Scientific calculator" << endl;
        cout << "1) Basic maths calculations" << endl;
        cout << "2) Trignometric/Inverse trignometric calculations" << endl;
        cout << "3) Logarithimic calculation" << endl;
        cout << "4) Exponentional calculation" << endl;
        cout << "5) Conversions" << endl;
        cout << "6) Calculation of imaginary numbers" << endl;
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
                        case 1: add();
                            break;
                        
                        case 2: sub();
                            break;
                    
                        case 3: mul()
                            break;
                        
                        case 4: div();
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
                                cin >> choice2;
                                switch(chioce2)
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
                                cin >> choice2;
                                switch(choice2)
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
                                cin >> choice2;
                                switch(choice2)
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
                
            case 4: cout << "Enter number and its power " << endl;
                    cin >> a >> b;
                break;
                
            case 5: cout << "Conversions of Unit" << endl;
                    cout << "1) Angle" << endl;
                    cout << "2) Astromical units" << endl;
                    cout << "3) Computer units" << endl;
                    cout << "4) Enegry" << endl;
                    cout << "5) Force" << endl;
                    cout << "6) Frequency" << endl;
                    cout << "7) Heat" << endl;
                    cout << "8) Length" << endl;
                    cout << "9) Pressure" << endl;
                    cout << "10) Power" << endl;
                    cout << "11) Speed" << endl;
                    cout << "12) Time" << endl;
                    cout << "13) Volume" << endl;
                    cout << "14) Weight " << endl;
                    cout << "Enter choice - " ;
                    cin >> choice1;
                    switch(choice1)
                    {
                        case 1: cout << "1)Degree <-> Radians" << endl;
                                cout << "2)Degree <-> Gradians" << endl;
                                cout << "3)Radians <-> Gradians" << endl;
                                cout << "Enter chioce - ";
                                cin >> choice2;
                                switch(choice2)
                                {
                                    case 1: DR();
                                        break;
                                    
                                    case 2: DG();
                                        break;
                                        
                                    case 3: RG();
                                        break;
                                       
                                    default : cout << "not a right option" << endl;
                                }
                            break;
                            
                        case 2: // AstUnit
                            break;
                            
                        case 3: cout << "1) Binary <-> Decimal" << endl;
                                cout << "2) Binary <-> Ternary" << endl;
                                cout << "3) Binary <-> Quaternary" << endl;
                                cout << "4) Binary <-> Octal" << endl;
                                cout << "5) Binary <-> Hexadecimal" << endl;
                                cout << "6) Ternary <-> Quaternary" << endl;
                                cout << "7) Ternary <-> Octal" << endl;    
                                cout << "8) Ternary <-> Hexadeciaml" << endl;
                                cout << "9) Quaternary <-> Octal" << endl;
                                cout << "10) Quaternay <-> Hexadecimal" << endl;
                                cout << "11) Octal <-> Hexadecimal" << endl;
                                cout << "12) Decimal <-> Ternay" << endl;
                                cout << "13) Dicemal <-> Quaternary" << endl;
                                cout << "14) Deciaml <-> Octal" << endl;
                                cout << "15) Deciaml <-> Hexaeciaml" << endl
                                cout << "Enter choice - " << endl;
                                cin >> choice2;
                                switch(chioce2)
                                {
                                    case 1: BD();
                                        break;
                                        
                                    case 2: DT();
                                        break;
                                        
                                    case 3: BQ();
                                        break;
                                        
                                    case 4: BO();
                                        break;
                                        
                                    case 5: BH();
                                        break;
                                        
                                    case 6: TQ();
                                        break;
                                        
                                    case 7: TO();
                                         break;
                                        
                                    case 8: TH();
                                        break;
                                        
                                    case 9: QO();
                                        break;
                                        
                                    case 10: QH();
                                        break;
                                        
                                    case 11: OH();
                                        break;
                                        
                                    case 12: DT();
                                        break;
                                        
                                    case 13: DQ();
                                        break;
                                        
                                    case 14: DO();
                                        break;
                                        
                                    case 15: DH();
                                        break;
                                      
                                    default: cout << " Wrong Choice " << endl;
                    }
            
            default: cout << "wrong choice" << endl; 
        }
    }while(strcmp(ch, )==0);    
    return 0;
}
