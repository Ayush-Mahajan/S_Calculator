int ch;
float degree, radian, gradian;
float bin, ter, quat, oct, dec;
        
void DG() //Degree <-> Gradians
{
    cout << "1) Degree" << endl;
    cout << "2) Gradian" << endl;
    cout << "enter choice" << endl;
    cin >> ch;
    switch(ch)
    {
        case 1: cout << "Enter degree - " ;
                cin >> degree;
                gradian = 1.11111 * degree;
                cout << gradian;
            break;
            
        case 2: cout << "Enter gradian -" ;
                cin >> gradian;
                degree = 0.9 * gradian;
                cout << degree;
            break;
                
        default: cout << "not possible" << endl;
    }
}
        
void RG() //Radians <-> Gradians
{        
    cout << "1) Radian" << endl;
    cout << "2) Gradian" << endl;
    cout << "enter choice" << endl;
    cin >> ch;
    switch(ch)
    {
        case 1: cout << "Enter radian -" ;
                cin >> radian;
                gradian = 63.662 * radian;
                cout << gradian;
            break;
            
        case 2: cout << "Enter gradian -" ;
                cin >> gradian;
                radian = 0.015708 * gradian;
            break;
            
        default: cout << "not possible" << endl;
    
}

class AstUnit
{
    
}


void BD() // Binary <-> Decimal
{
          
    cout << "1) Binary" << endl;
    cout << "2) Deciaml" << endl;
    cout << "enter choice" << endl;
    cin >> ch;
    switch(ch)
    {
        case 1: cout << "Enter Binary number - ";
                cin >> bin;
                cout << dec;
            break;
            
        case 2: cout << "Enter Decimal number - ";
                cin >> dec;
                cout << bin;
            break;
            
        default: cout << "not possible" << endl; 
}
    
void BT() // Binary <-> Ternary
{        
    cout << "1) Binary" << endl;
    cout << "2) ternary" << endl;
    cout << "enter choice" << endl;
    cin >> ch;
    switch(ch)
    {
        case 1: cout << "Enter Binary number - ";
                cin >> bin;
                cout << ter; 
            break;
            
        case 2: cout << "Enter ternary number - ";
                cin >> ter;
                cout << bin;
            break;
            
        default: cout << "not possible" << endl; 
    }
}
        
void BQ() // Binary <-> Quaternary
{
    cout << "1) Binary" << endl;
    cout << "2) Quaternary" << endl;
    cout << "enter choice" << endl;
    cin >> ch;
    switch(ch)
    {
        case 1: cout << "Enter Binary number - ";
                cin >> bin;
                cout << quat
            break;
         
        case 2: cout << "Enter Quaternary number - ";
                cin >> quat;
                cout << bin;
            break;
            
        default: cout << "not possible" << endl;
    }
}
        
void BO() // Binary <-> Octal
{
    cout << "1) Binary" << endl;
    cout << "2) Octal" << endl;
    cout << "enter choice" << endl;
    cin >> ch;
    switch(ch)
    {
        case 1: cout << "Enter Binary number - ";
                cin >> bin;
                cout << oct;
            break;
            
        case 2: cout << "Enter Octal number - ";
                cin >> oct;
                cout << bin;
            break;
            
        default: cout << "not possible" << endl;
    }
}
        
void BH() // Binary <-> Hexadecimal
{
    cout << "1) Binary" << endl;
    cout << "2) hexadecima;" << endl;
    cout << "enter choice" << endl;
    cin >> ch;
    switch(ch)
    {
        case 1: cout << "Enter Binary number - ";
                cin >> bin;
                cout << hex;
            break;
            
        case 2: cout << "Enter Hexadeciaml number - ";
                cin >> hex;
                cout << bin;
            break;
            
        default: cout << "not possible" << endl;
    }     
}
        
void TQ() // Ternary <-> Quaternary
{
    cout << "1) Ternary" << endl;
    cout << "2) Quaternary" << endl;
    cout << "enter choice" << endl;
    cin >> ch;
    switch(ch)
    {
        case 1: cout << "Enter ternary number - ";
                cin >> ter;
                cout << quat;
            break;
            
        case 2: cout << "Enter Quaternary number - ";
                cin >> quat;
                cout << ter;
            break;
            
        default: cout << "not possible" << endl;
    }
}
        
void TO() // Ternary <-> Octal
{

    cout << "1) Ternary" << endl;
    cout << "2) Octal" << endl;
    cout << "enter choice" << endl;
    cin >> ch;
    switch(ch)
    {
        case 1: cout << "Enter ternary number - ";
                cin >> ter;
                cout << oct;
            break;
            
        case 2: cout << "Enter Octal number - ";
                cin >> oct;
                cout << ter;
            break;
            
        default: cout << "not possible" << endl;
    }   
}
        
void TH() // Ternary <-> Hexadecimal
{

    cout << "1) Ternary" << endl;
    cout << "2) Hexadecimal" << endl;
    cout << "enter choice" << endl;
    cin >> ch;
    switch(ch)
    {
        case 1: cout << "Enter ternary number - ";
                cin >> ter;
                cout << hex;
            break;
            
        case 2: cout << "Enter Hexadecimal number - ";
                cin >> hex;
                cout << ter;
            break;
            
        default: cout << "not possible" << endl;
    }        
}
       
void QO() // Quaternary <-> Octal
{

    cout << "1) Quaternary" << endl;
    cout << "2) Octal" << endl;
    cout << "enter choice" << endl;
    cin >> ch;
    switch(ch)
    {
        case 1: cout << "Enter Quaternary number - ";
                cin >> quat;
                cout << oct;
            break;
            
        case 2: cout << "Enter Octal number - ";
                cin >> oct;
                cout << quat;
            break;
            
        default: cout << "not possible" << endl;
    }        
}
       
void QH() // Quaternay <-> Hexadecimal
{
    cout << "1) Quaternary" << endl;
    cout << "2) Hexadecimal" << endl;
    cout << "enter choice" << endl;
    cin >> ch;
    switch(ch)
    {
        case 1: cout << "Enter Quaternary number - ";
                cin >> quat;
                cout << hex;
            break;
            
        case 2: cout << "Enter Hexadecimal number - ";
                cin >> oct;
                cout << hex;
            break;
            
        default: cout << "not possible" << endl;
    }                
}
        
void OH() // Octal <-> Hexadecimal
{
    cout << "1) Octal" << endl;
    cout << "2) Hexaecimal" << endl;
    cout << "enter choice" << endl;
    cin >> ch;
    switch(ch)
    {
        case 1: cout << "Enter Octal number - ";
                cin >> oct;
                cout << hex;
            break;
            
        case 2: cout << "Enter Hexadecimal number - ";
                cin >> hex;
                cout << oct;
            break;
            
        default: cout << "not possible" << endl;
    }                
}
    
void DT()
{
    cout << "1) Decimal" << endl;
    cout << "2) Ternary" << endl;
    cout << "enter choice" << endl;
    cin >> ch;
    switch(ch)
    {
        case 1: cout << "Enter Deciaml number - ";
                cin >> dec;
                cout << ter;
            break;
            
        case 2: cout << "Enter Ternary number - ";
                cin >> ter;
                cout << dec;
            break;
            
        default: cout << "not possible" << endl;
    }
}
    
void DQ()
{
    cout << "1) Decimal" << endl;
    cout << "2) Quaternary" << endl;
    cout << "enter choice" << endl;
    cin >> ch;
    switch(ch)
    {
        case 1: cout << "Enter Deciaml number - ";
                cin >> dec;
                cout << quat;
            break;
            
        case 2: cout << "Enter Quaternary number - ";
                cin >> quat;
                cout << dec;
            break;
            
        default: cout << "not possible" << endl;
    }            
}
    
void DO()
{
    cout << "1) Decimal" << endl;
    cout << "2) Ternary" << endl;
    cout << "enter choice" << endl;
    cin >> ch;
    switch(ch)
    {
        case 1: cout << "Enter Deciaml number - ";
                cin >> dec;
                cout << ter;
            break;
            
        case 2: cout << "Enter Ternary number - ";
                cin >> ter;
                cout << hex;
            break;
            
        default: cout << "not possible" << endl;
    }            
}
    
void DH()
{
    cout << "1) Decimal" << endl;
    cout << "2) Ternary" << endl;
    cout << "enter choice" << endl;
    cin >> ch;
    switch(ch)
    {
        case 1: cout << "Enter Deciaml number - ";
                cin >> dec;
                cout << ter;
            break;
            
        case 2: cout << "Enter Ternary number - ";
                cin >> ter;
                cout << hex;
            break;
            
        default: cout << "not possible" << endl;
    }            
}


class energy
{

}

class force
{

}

class frequency
{

}

class heat
{

}

class length
{

}

class pressure
{

}

class power
{

}

class speed
{

}

class time
{

}

class volume
{

}

class weight
{

}

void DR() // Degree <-> Radian
{
    cout << "1) Degree" << endl;
    cout << "2) Radian" << endl;
    cout << "enter choice" << endl;
    cin >> ch;
    switch(ch)
    {
        case 1: cout << "Enter degrees - ";
                cin >> degree;
                radians = 0.0174533* degree;
                cout << radians;
            break;
                    
         case 2: cout << "Enter radians - ";
                 cin >> radians;
                 degree = 57.2958 * radians;
                 cout << degree;
            break;
                         
         default: cout << "wrong option" << endl; 
    }
}
