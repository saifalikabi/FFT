#include <iostream>
using namespace std;
        // class for creating two float variable  real & imaginary
class complex
{
   public :
      float real, img;
      };
int main()
{
    // declare complex variable
       complex a, b, c, d , e ,f , e1 , f1 , e2 , f2 , e3 , f3 , ef1 , w;
        // w^1 for multiplication
       ef1.real = 0;
       ef1.img = -1;
        // input 4 number x(K)
   cout << "\n x(0) real = ";
   cin >> a.real;
   cout << " x(0) img = ";
   cin >> a.img;

   cout << "\n x(1) real = ";
   cin >> b.real;
   cout << " x(1) img = ";
   cin >> b.img;

   cout << "\n x(2) real = ";
   cin >> c.real;
   cout << " x(2) img = ";
   cin >> c.img;

   cout << "\n x(3) real = ";
   cin >> d.real;
   cout << " x(3) img = ";
   cin >> d.img;
        // FFT calculation
   e.real = a.real + c.real;
   e.img = a.img + c.img;

   f.real = b.real + d.real;
   f.img = b.img + d.img;

   e1.real = a.real - c.real;
   e1.img = a.img - c.img;

   f1.real = b.real - d.real;
   f1.img = b.img - d.img;

      w.real = (f1.real*ef1.real)+((f1.img*ef1.img)*-1);
        w.img = (f1.real*ef1.img)+(f1.img*ef1.real);

   e2.real = e.real + f.real;
   e2.img = e.img + f.img;

   f2.real = e1.real + w.real;
   f2.img = e1.img + w.img;

   e3.real = e.real - f.real;
   e3.img = e.img - f.img;

   f3.real = e1.real - w.real;
   f3.img = e1.img - w.img;
        // output the values
    if ( e2.img >= 0 )
      cout << "\nFFT X(0) = " << e2.real << " + " << e2.img << "j";
   else
      cout << "\nFFT X(0) = " << e2.real << " " << e2.img << "j";

      if ( f2.img >= 0 )
      cout << "\nFFT X(1) = " << f2.real << " + " << f2.img << "j";
   else
      cout << "\nFFT X(1) = " << f2.real << " " << f2.img << "j";

      if ( e3.img >= 0 )
      cout << "\nFFT X(2) = " << e3.real << " + " << e3.img << "j";
   else
      cout << "\nFFT X(2) = " << e3.real << " " << e3.img << "j";

      if ( f3.img >= 0 )
      cout << "\nFFT X(3) = " << f3.real << " + " << f3.img << "j";
   else
      cout << "\nFFT X(3) = " << f3.real << " " << f3.img << "j" << endl;
   return 0;}
