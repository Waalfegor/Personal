#ifndef _CL_H
#define _CL_H
class cl2;
class cl1 {
private:
	int A;
public:
	cl1(int a);
	friend int max(cl1& ob1, cl2& ob2);
};
class cl2 {
private:
	int b, c;
public:
	void input(int b, int c);
	friend int max(cl1& ob1, cl2& ob2);
};
#endif