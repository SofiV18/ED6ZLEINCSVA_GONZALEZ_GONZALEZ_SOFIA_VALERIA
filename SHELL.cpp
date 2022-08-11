#include <iostream>

using namespace std;


void print(int[], int n);
void shell(int[], int n);

int main()
{
    int total;
    cout<<"Introduce el total de elementos: " <<endl;
    cin>>total;
    int num[total];
    for(int i = 0; i<total; i++)
    {
        cout<<"Introduce el elemento [ "<<(i + 1)<<" ] :" << endl;
        cin >> num[i];
    }
    shell(num, total);
}

void shell(int s[], int n)
{
    int ints, i, aux;
    bool band;
    ints = n;
    while (ints > 1)
    {
        ints = (ints / 2);
        band = true;
        while (band == true)
        {
            band = false;
            i = 0;
            while ((i + ints) <= n)
            {
                if (s[i] > s[i + ints])
                {
                    aux = s[i];
                    s[i] = s[i + ints];
                    s[i + ints] = aux;
                    band = true;
                }
                i++;
                print(s, n);
            }
        }
    }
}

void print(int s[], int n)
{
    cout<<"\n Elementos ordenados: " << endl;

    for (int i = 0; i < n; i++)
        cout << "[ " << s[i] << " ]";
}
