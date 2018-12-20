#include "Satck.h"

stack::stack(){
    cp=1;
    sz=0;
    arr =new int[cp];

}
void stack::duplicate(){
cp*=2;
    int* tmp = new int[cp];
    for(int i = 0 ; i < sz ; ++i)
        tmp[i] = arr[i];
    delete [] arr;
    arr = tmp;


}
void stack::push(int v){
    if(sz==cp){duplicate();}
    arr[sz]=v;
    sz++;
}
void stack::pop(){
    sz--;
}

int stack::top(){
    if(arr[sz-1]==0)
    return arr[sz-2];
    else
        return arr[sz-1];
}

bool stack::empty(){
    return sz==0;
}
int stack::size(){
return sz;
}
int& stack :: operator[](const int& idx){
    return arr[idx];
}
