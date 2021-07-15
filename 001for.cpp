#include  <iostream>
#include <unistd.h>

using namespace std;

int main ()
{
     for(int i=0; i<20; i++)
     {
         cout << i+1;
         cout << ") MERHABA BEN, BEN İYİYİM, BEN NASILSIN" << endl;
         sleep(1);
         cout << "TEŞEKKÜR EDERİM" << endl;
         sleep(1);
     }
}
