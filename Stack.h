#ifndef SATCK_H
#define SATCK_H
using namespace std;
class stack
{
    public:
        stack();
      void push(int v);
	void pop();
	bool empty();
	int size();
	int top();
    int& operator[](const int& idx);

	private:
        int sz,cp;
        void duplicate();
        int* arr;



};

#endif // SATCK_H
