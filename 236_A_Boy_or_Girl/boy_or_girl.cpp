#include<iostream>

using namespace std;

void result(string);

bool indices[256];
int cont = 0, s;

int main(){
    string a ="";
    cin>>a;

    result(a);

    for (int i = 0; i < 256; i++)
    {
        if(indices[i])
        {
            cont++;
        }
    }

    if(cont % 2 == 0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
return 0;
}


// gua
void result(string a)
{
    int n = 0;
    for (int i = 0; i < a.size(); i++)
    {
        indices[(int)a[i]] = true;
    }
}
