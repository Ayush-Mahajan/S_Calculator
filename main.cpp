#inlcude<iostream>

using namespace std;

int main()
{
    int choice, choice1;
    cout << "Scientific calculator" << endl;
    cout << "1) Basic maths calculations" << endl;
    cout << "2) Trignometric/Inverse trignometric calculations" << endl;
    cout << "3) Logarithimic calculation" << endl;
    cout << "4) Exponentional calculation" << endl;
    cout << "5) " << endl;
    cout << "" << endl;
    cout << "What do you want to do - ";
    cin >> choice;
    switch(chioce)
    {
        case 1: cout << "1)Add" << endl;
                cout << "2)Subtract" << endl;
                cout << "3)Multiply" << endl;
                cout << "4)Divide";
                cout << "what do you wantg to do - ";
                cin >> chioce1;
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
    }
    return 0;
}
