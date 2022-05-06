#include<iostream>
#include<cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int InnerProduct(int i, int j);
    double HamiltonianMatrix(double g, double e, int i, int j);

    const int n = 10;
    const double g = 1.0, e = 2.0;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << HamiltonianMatrix(g,e,i,j) << "\t";
        }
        cout << endl;
    }
    return 0;
}
int InnerProduct(int i, int j)
{
    return (i == j) ? 1 : 0;
}
double HamiltonianMatrix(double g, double e, int i, int j)
{
    return g*InnerProduct(i,i)*InnerProduct(i+1,j)+g*InnerProduct(i,i)*InnerProduct(i-1,j)+e*InnerProduct(i,i)*InnerProduct(i,j);
}