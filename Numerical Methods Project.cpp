#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

using namespace std;

double cf1,cf2, cf3, cf4, cf5, exp_1, exp_2, exp_3, exp_4, exp_5;
int main(void)
{
    mainMenu:
    cout << endl << endl;
    cout << setw(135) << " ____   __   __    __   __       __   _______   _______    __   ________      ___      __     \n";
    cout << setw(135) << "|    \\ |  | |  |  |  | |  \\     /  | |  _____| |   __  \\  |  | |   _____|    / _ \\    |  |    \n";
    cout << setw(135) << "|     \\|  | |  |  |  | |   \\   /   | | |__     |  |__\\  | |  | |  |         / /_\\ \\   |  |    \n";
    cout << setw(135) << "|  |\\     | |  |  |  | |    \\ /    | |  __|    |   _   /  |  | |  |        /  ___  \\  |  |    \n";
    cout << setw(135) << "|  | \\    | |  |__|  | |  |\\   /|  | | |_____  |  | |  \\  |  | |  |_____  /  /   \\  \\ |  |___ \n";
    cout << setw(135) << "|__|  \\___| |________| |__| \\_/ |__| |_______| |__| |___\\ |__| |________|/__/     \\__\\|______|\n";
    cout << endl;

    cout << setw(129) << " __       __   _______  __________  __    __   ________   _______     ________   \n";
    cout << setw(129) << "|  \\     /  | |  _____||___    ___||  |  |  | |  ____  | |  ____ \\   |  ______|  \n";
    cout << setw(129) << "|   \\   /   | | |__        |  |    |  |__|  | | |    | | | |    \\ \\  | |______   \n";
    cout << setw(129) << "|    \\ /    | |  __|       |  |    |   __   | | |    | | | |     | | |______  |  \n";
    cout << setw(129) << "|  |\\   /|  | | |_____     |  |    |  |  |  | | |____| | | |_____| |  ______| |  \n";
    cout << setw(129) << "|__| \\_/ |__| |_______|    |__|    |__|  |__| |________| |_________| |________|  \n";
    
    cout << "\n\n\t\t\t\t\t\tVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV\n";
    cout << "\t\t\t\t\t\tVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV";
    cout << "\n\t\t\t\t\t\t>>>>>>>>>>>                                                   <<<<<<<<<<<<<";
    cout << "\n\t\t\t\t\t\t>>>>>>>>>>>              FINALS PROJECT (NMTL01E)             <<<<<<<<<<<<<";
    cout << "\n\t\t\t\t\t\t>>>>>>>>>>>        DESIGNED BY: CHAVEZ, TUGANO, UKPAKA        <<<<<<<<<<<<<";
    cout << "\n\t\t\t\t\t\t>>>>>>>>>>>                                                   <<<<<<<<<<<<<";
    cout << "\n\t\t\t\t\t\tVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV";
    cout << "\n\t\t\t\t\t\tVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV";
    cout << "\n\t\t\t\t\t\t---------------------------------------------------------------------------\n";
    cout << "\t\t\t\t\t\t---------------------------------------------------------------------------";
    cout<<"\n\n\n";
            
    cout<<setw(101)<< "NUMERICAL METHOD TOPICS MENU \n\n";
    cout<<setw(98)<< "[1] DERIVATIVE CALCULATOR \n";
    cout<<setw(101)<< "[2] GAUSS-ELIMINATION METHOD \n";
    cout<<setw(96)<< "[3] GAUSS-SEIDEL METHOD \n";
            
    int menuOption;
    char option_SQ, yes_or_no;
    cout << endl;
    cout<<" "<<setw(90)<<"ENTER OPTION: ";
    cin>>menuOption;
    system("clear");
        
    switch(menuOption){
        //*************************************************************************************************************************//
        case 1:
            {
                cout << "\n\n\t\t\t\t\t\tVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV\n";
                cout << "\t\t\t\t\t\tVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV";
                cout << "\n\t\t\t\t\t\t>>>>>>>>>>>                                                   <<<<<<<<<<<<<";
                cout << "\n\t\t\t\t\t\t>>>>>>>>>>>               DERIVATIVE CALCULATOR               <<<<<<<<<<<<<";
                cout << "\n\t\t\t\t\t\t>>>>>>>>>>>                                                   <<<<<<<<<<<<<";
                cout << "\n\t\t\t\t\t\tVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV";
                cout << "\n\t\t\t\t\t\tVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV\n";
                cout << endl;
                
                cout << "Input 1st term literal coefficient: ";
                cin >> cf1;
                cout << "Input the 1st term exponent: ";
                cin >> exp_1;
            
                cout << "Input 2nd term literal coefficient: ";
                cin >> cf2;
                cout << "Input the 2nd term exponent: ";
                cin >> exp_2;
            
                cout << "Input 3rd term literal coefficient: ";
                cin >> cf3;
                cout << "Input the 3rd term exponent: ";
                cin >> exp_3;
            
                cout << "Input 4th term literal coefficient: ";
                cin >> cf4;
                cout << "Input the 4th term exponent: ";
                cin >> exp_4;
                
                cout << "Input 5th term literal coefficient: ";
                cin >> cf5;
                cout << "Input the 5th term exponent: ";
                cin >> exp_5;
            
                cout << "\n\n===================================================";
                
                cout << "\nf(x) = " <<
                cf1 << "x^" << exp_1 << "  " <<
                cf2 << "x^" << exp_2 << "  " <<
                cf3 << "x^" << exp_3 << "  " <<
                cf4 << "x^" << exp_4 << "  " <<
                cf4 << "x^" << exp_5;
            
                cout << "\n\nF(x) or d/dx = " <<
                cf1*exp_1 << "x^" << exp_1 - 1 << "  " <<
                cf2*exp_2 << "x^" << exp_2 - 1 << "  " <<
                cf3*exp_3 << "x^" << exp_3 - 1 << "  " <<
                cf4*exp_4 << "x^" << exp_4 - 1 << "  " <<
                cf4*exp_5 << "x^" << exp_5 - 1;
                
                
                cout << "\n===================================================";
                break;
            }
        
        //*************************************************************************************************************************//       
        case 2:
            {
                cout << "\n\n\t\t\t\t\t\tVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV\n";
                cout << "\t\t\t\t\t\tVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV";
                cout << "\n\t\t\t\t\t\t>>>>>>>>>>>                                                   <<<<<<<<<<<<<";
                cout << "\n\t\t\t\t\t\t>>>>>>>>>>>             GAUSS-ELIMINATION METHOD              <<<<<<<<<<<<<";
                cout << "\n\t\t\t\t\t\t>>>>>>>>>>>                                                   <<<<<<<<<<<<<";
                cout << "\n\t\t\t\t\t\tVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV";
                cout << "\n\t\t\t\t\t\tVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV\n";
                cout << endl;
                
                int eqNum, x, y, z;

                cout << "\nHow many equations do you want to solve? : ";
                cin >> eqNum;

                cout << "\nIMPORTANT NOTES FOR THIS SECTION:\n";
                cout << "----> Please use a 'SINGLE' space for every value to be used. \n";
                cout << "----> Press ENTER after each equation.\n";
                cout << "----> Kindly refer to the sample equation format below.\n\n";
    
                cout << "Sample format for the Matrix Equation to be solved (Sample for 3x3 Matrix Only)\n";
                cout << " Elem1  Elem2   Elem3  | Elem4 \n";
                cout << " Elem5  Elem6   Elem7  | Elem8 \n";
                cout << " Elem9  Elem10  Elem11 | Elem12 \n\n";
    
                cout << "Input the elements of Augmented Matrix in a ROW Form: \n";

                float a[eqNum][eqNum+1], c[eqNum];
    
                cout.precision(1);       //for the decimal places
                cout.setf(ios::fixed);
    
                for (x=0; x < eqNum; x++)
                {
                    for (y=0; y<=eqNum; y++)
                    {
                        cin >> a[x][y];
                    }
                }
    
                for (x=0; x<eqNum; x++)
                {
                    for (z=x+1; z<eqNum; z++)
                    {
                        if ((a[x][x]) < a[z][x])
                            for (y=0; y<=eqNum; y++)
                            {
                                double temp = a[x][y];
                                a[x][y] = a[z][y];
                                a[z][y] = temp;
                            }
                    }
                }
    
                for (x=0; x<eqNum-1; x++)
                {
                    for (z=x+1; z<eqNum; z++)
                    {
                        double t = a[z][x] / a[x][x];
                        for (y=0; y<=eqNum; y++)
                        {
                            a[z][y] = a[z][y] - t*a[x][y];
                        }
                    }
                }
    
                cout << "\nThe New/Latest Matrix in the Row-Echelon Form: \n";
                for (x=0; x<eqNum; x++)
                {
                    for (y=0; y<=eqNum; y++)
                    {
                        cout << a[x][y] << setw(12);
                    }
                    cout << "\n";
                }
    
                for (x=eqNum-1; x>=0; x--)
                {
                    c[x] = a[x][eqNum];
                    for (y=x+1; y<eqNum; y++)
                    {
                        if (y != x)
                            c[x] = c[x] - a[x][y]*c[y];
                    }
                    c[x] = c[x] / a[x][x];
                }
    
                cout << "\n\nVariables' Equivalent Values: \n";
    
                cout << "================================================\n";
                cout << " Solution: (x, y, z)  = ";
                for (x=0; x<eqNum; x++)
                {
                    cout << " " << c[x] << "  ";
                }
                cout << "\n================================================\n";
        
                break;
            }
        
        //*************************************************************************************************************************//    
        case 3:
            {
                cout << "\n\n\t\t\t\t\t\tVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV\n";
                cout << "\t\t\t\t\t\tVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV";
                cout << "\n\t\t\t\t\t\t>>>>>>>>>>>                                                   <<<<<<<<<<<<<";
                cout << "\n\t\t\t\t\t\t>>>>>>>>>>>                GAUSS-SEIDEL METHOD                <<<<<<<<<<<<<";
                cout << "\n\t\t\t\t\t\t>>>>>>>>>>>                                                   <<<<<<<<<<<<<";
                cout << "\n\t\t\t\t\t\tVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV";
                cout << "\n\t\t\t\t\t\tVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV\n";
                cout << endl;
                
                float a[3][3], b[3], x[3], y[3];     
                int i = 0, j = 0, m = 0, n = 3;
        
                for (i = 0; i < n; i++) 
                {         
                    for (j = 0; j < n; j++) 
                    {             
                        cout << "Enter the Element for [" << i << "," << j << "]: ";             
                        cin >> a[i][j];         
                    }     
                }          
                
                cout << "\nEnter the Constants to the Right Side of Equation\n";     
                for (i = 0; i < n; i++) 
                {         
                    cout << "Enter values no. ["<<i<<"]: ";         
                    cin >> b[i];     
                }   
        
                cout << "\nEnter the Initial Values of x\n";     
                for (i = 0; i < n; i++) 
                    {         
                        cout << "Enter values no. ["<<i<<"]: ";         
                        cin >> x[i];     
                    } 
        
                cout << "\nEnter the Number of Iterations: ";     
                cin >> m;     
        
                cout << "\n================================================\n";
                while (m > 0)     
                {         
                    for (i = 0; i < n; i++)         
                        {             
                            y[i] = (b[i] / a[i][i]);             
                            for (j = 0; j < n; j++)             
                            {                 
                                if (j == i)                     
                                continue;                 
                                y[i] = y[i] - ((a[i][j] / a[i][i]) * x[j]);                 
                                x[i] = y[i];             
                            
                            }             
                            cout << "x" << i + 1 << " = " << y[i] << "   ";
                        
                        }         
                    
                        cout << "\n";         
                        m--;     
                    
                }   
                cout << "================================================\n\n\n";
        
                break;
            }        
               
            break;
        
        //*************************************************************************************************************************//        
        default:
            cout<<"\n";
            cout<<" "<<setw(81)<<"Invalid Option. Please Enter Options 1-3 Only!";
            goto mainMenu;
            system ("clear");
            break;
        }
        
        //*************************************************************************************************************************//    
        cout << endl << endl;
        while (true) 
        {
            cout <<"\n Press [S] to go to START MENU. ";
            cout <<"\n Press [Q] to QUIT. ";
            cin>>option_SQ;
            
            if (option_SQ == 'S' || option_SQ == 's')
            { 
                system ("clear");
                goto mainMenu;
            }
            else if (option_SQ == 'Q' || option_SQ =='q')
            {
                system ("clear");
                cout<<"\n";
                cout<<" "<<setw(10)<<"Do You Really Want to Quit [Y/N]? : "; 
                cin>>yes_or_no;
                if (yes_or_no == 'Y' || yes_or_no == 'y')
                {
                    cout<<" "<<"\n Hope you've enjoyed the program! Thank you very much for using Numerical Methods Calculator!";
                    return 0;
                }
                else if (yes_or_no == 'N' || yes_or_no == 'n')
                {
                    system ("clear");
                    goto mainMenu;
                }
            }
            
            else
            {
                cout<<"INVALID INPUT! Please choose between [S] or [Q] only.\n";
            }
                
        }
    return 0;
}