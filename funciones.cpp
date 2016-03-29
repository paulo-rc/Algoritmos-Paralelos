#include <iostream>
#include <ctime>

using namespace std;

#define MAX 10000

double A[MAX][MAX], x[MAX], y[MAX];


void fun1()
{
    for(int i=0; i<MAX; i++)
    {
        for(int j=0; j<MAX; j++)
        {
            y[i] += A[i][j]*x[j];
        }
    }
}

void fun2()
{
    for(int j=0; j<MAX; j++)
    {
        for(int i=0; i<MAX; i++)
        {
            y[i] += A[i][j]*x[j];
        }
    }
}

int main()
{
    int start_s=clock();
	fun2();
    int stop_s=clock();
    cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;

}
