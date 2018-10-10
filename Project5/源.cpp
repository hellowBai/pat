#include<stdio.h>
#include<iostream>
#include<string.h>
#include<list>
#include<vector>


using namespace std;

void output(vector<char> a){
	
	vector<char>::iterator b;
	for (b=a.begin();b!=a.end();b++)
	{
			printf("%c", *b);
	}
	

}

int one(vector<char> a) {
	

	int b=0;
	int len =a.size();
	for (int i = 0; i < len; i++)
	{
		b += ((int)a[i] - 70 + 15)*((int)pow(16, len-i-1));
	}
	printf("%d", b);
	return b;
	
}

void two(vector<char> *b) {
	b->push_back('w');
}

void three(int *b) {
	*b = 101;
}

int main() {
	vector<char> a;
	
	int i;
	for (i = 0; i < 8; i++)
	{
		char b;
		b=getchar();
		if (b == '\n') {
			break;
		}
		else
		{
			a.push_back(b);
		}
	}
	
	vector<char> *f;
	f = &a;
	two(f);
	output(a);

	int m = 0;
	three(&m);
	cout << m;
	system("pause");
	return 0;
}