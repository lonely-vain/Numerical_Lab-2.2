#include<bits/stdc++.h>
#include<conio.h>
using namespace std;


#define e 0.0001

double f(double x)
{
     return cos(x) - x * exp(x);

}

void Bisection(double x0, double x1)
{
    double x2;
    int temp = 1;

    if(f(x0) * f(x1) > 0)
    {
      cout << "Incorrect initial guesses.";
    }
    do{

         x2 = (x0+x1)/2;
         if(f(x0)*f(x2)<0)
         {
             x1 = x2;
         }
         else
         {
             x0 = x2;
         }

   cout << " Number Of Iteration :" << temp  << endl;

   cout << " Root :: " << x2 << endl;

   cout << " x0 :: " << x0 << endl;
   cout << " x1 :: " << x1 << endl;
   cout << " f(x0) :: " << f(x0) << endl;
   cout << " f(x1) :: " << f(x1) << endl;
   cout << " f(root) :: " << f(x2) <<endl << endl << endl;
   temp++;


    }while(fabs(f(x2))> e );



}


int main()
{

   double x0 = 0;
   double x1 = 1;

   Bisection(x0,x1);

   getch();
}

