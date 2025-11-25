#include <iostreamhttps://github.com/aduisaiah2709-ship-it/Cpp-first-project.git
#include <cmath>
using namespace std;
int main()
{
    cout<<"\n\t..........................\n";
    cout<<"\t         calculator        \n";
¹1,¹    cout<<"\t.............................\n";
    cout<<"\t1:Addition\t\t"<<"8sin"<<endl;
    cout<<"\t2:Subtraction\t\t"<<"9cos"<<endl;
    cout<<"\t3:Multiplication\t\t"<<"10tan"<<endl;
    cout<<"\t4:Division\t\t"<<"11 inverse of sin"<<endl;
    cout<<"\t5:exponent\t\t"<<"12 inverse of cos"<<endl;
    cout<<"\t6:square\t\t"<<"13 inverse of tan"<<endl;
    cout<<"\t7:log\t\t"<<"14 exist"<<endl;
    
    float x,y;
    float pi=3.14159265;
    int choice;
    do{
        cout<<"\n\t Enter the function you want to perform :";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"\n Enter first number : ";
                cin>>x;
                cout<<"Enter 2nd number : ";
                cin>>y;
                cout << "\n Result = "<< x+y << endl;
                break;
            
            case 2:
                cout<<"\n Enter first number : ";
                cin>>x;
                cout<<"Enter 2nd number ";
                cin>>y;
                cout<<"\n Result = "<<x-y<<endl;
                break;
                
            case 3:
                cout<<"\n Enter first number : ";
                cin>>x;
                cout<<"Enter 2nd number ";
                cin>>y;
                cout<<"\n Result = "<<x*y<<endl;
                break;
                
                
            case 4:
                cout<<"\n Enter first number :";
                cin>>x;
                cout<<"Enter 2nd number ";
                cin>>y;
                cout<<"\n Result = "<<x/y<<endl;
                break;
                 
            case 5:
                cout<<"\n Enter first number :";
                cin>>x;
                cout<<"Enter the exponent ";
                cin>>y;
                cout<<"\n Result = "<<pow(x,y)<<endl;
                break;
                
                    
            case 6:
                cout<<"\n Enter the number :";
                cin>>x;
                cout<<"\n Result = "<<sqrt(x)<<endl;
                break;
                
            case 7:
                cout<<"\n Enter the number :";
                cin>>x;
                cout<<"\n Result = "<<log10(x)<<endl;
                break;
                
            case 8:
                cout << "\n Enter the number :";
                cin >> x;
                cout << "\n Result = "<<sin(x)<<endl;
                break;
            case 9:
                cout << "\n Enter the number :";
                cin >> x;
                cout << "\n Result = "<<cos(x)<<endl;
                break;
                
            case 10:
                cout << "\n Enter the number :";
                cin>>x;
                cout << "\n Result = "<<tan(x)<<endl;
                break;    
                
            case 11:
                cout << "\n Enter the number :";
                cin>>x;
                cout << "\n Result = "<<asin(x)*180.0/pi<<endl;
                break;    
                
            case 12:
                cout << "\n Enter the number :";
                cin>>x;
                cout << "\n Result = "<<acos(x)*180.0/pi<<endl;
                break;    
                
                
            case 13:
                cout << "\n Enter the number :";
                cin >> x;
                cout << "\n Result = "<<atan(x)*180.0/pi<<endl;
                break;    
                
            case 14:
                break;
                default:
                cout << "\nwrong input\t"; 
                break;
        }
        
        
          }while (choice != 14);
     return 0;
}

    




         
    
    
    
   
    
    
