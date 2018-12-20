#include <iostream>
#include "Satck.h"
using namespace std;
int main()
{
   stack v;
  v.push(1);
  v.push(2);
  v.push(3);
  v.push(4);
  v.push(5);

  v.pop();



  cout<<v.size()<<endl;
    cout<<v.top()<<endl;
    return 0;
}
