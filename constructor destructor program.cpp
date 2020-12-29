#include <iostream>

using namespace std;

class proof
{
   int bigger,smaller,choice,cont;
   public:
       proof()
       {
          bigger=0;
          smaller=0;
          choice=0;
          cont=0;
       }
       void arith()
       {
           while(1)
           {
           cout<<"\n There are following Operands available.";
           cout<<"\n 1.Multiplication(*)";
           cout<<"\n 2.Division(/)";
           cout<<"\n 3.Subtraction(-)";
           cout<<"\n 4.Addition(+)";
           cout<<"\n 5.Modulus(%)";
           cout<<"\n Enter your Choice : ";
           cin>>choice;
           if(choice==1 || choice==2 ||choice==3|| choice==4 || choice==5)
           {
               cout<<"\n Enter bigger no. : ";
               cin>>bigger;
               cout<<"\n Enter smaller no. : ";
               cin>>smaller;
           }
           switch(choice)
           {
              case 1: cout<<"\n Multiplication of "<<bigger<<" and "<<smaller<<" is "<<(bigger*smaller);
                      break;
              case 2: cout<<"\n Division of "<<bigger<<" and "<<smaller<<" is "<<(bigger/smaller);
                      break;
              case 3: cout<<"\n Subtraction of "<<bigger<<" and "<<smaller<<" is "<<(bigger-smaller);
                      break;
              case 4: cout<<"\n Addition of "<<bigger<<" and "<<smaller<<" is "<<(bigger+smaller);
                      break;
              case 5: cout<<"\n Modulus of "<<bigger<<" and "<<smaller<<" is "<<(bigger%smaller);
                      break;
              default:cout<<"\n Invalid Response.";
                      break;
           }
           cout<<"\n Do you want to continue(Type '1' for yes and '2' for no ) : ";
           cin>>cont;
           if(cont==1)
           {
               continue;
               system("cls");
           }
           else if(cont==2)
           {
               break;
           }
           else
           {
               cout<<"\n Invalid Response. The process is starting again.";
           }
           }

       }
        ~proof()
        {
            cout<<"\n Destructor Called.";
        }
};
int main()
{
    proof prov;
    prov.arith();
    return 0;
}
