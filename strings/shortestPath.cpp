#include<iostream>
using namespace std;

int main()
{
    char path[100];
    cin.getline(path, 100);

    int x=0, y=0;

    for(int i=0; path[i] != '\0'; i++)
    {
        switch(path[i]){
            case 'N': y++;
                      break;
            case 'S': y--;
                      break;
            case 'W': x--;
                      break;
            case 'E': x++;
                      break;        
        }
    }

    if(x>0 && y>0)
    {
        while (x!=0)     
        {
            cout << 'E';
            x--;
        }
        while (y!=0)
        {
            cout << 'N';
            y--;
        }
    }
    else if(x>0 && y<0)
    {
        while (x!=0)     
        {
            cout << 'E';
            x--;
        }
        while (y!=0)
        {
            cout << 'S';
            y++;
        }
    }
    else if(x<0 && y>0)
    {
        while (x!=0)     
        {
            cout << 'W';
            x++;
        }
        while (y!=0)
        {
            cout << 'N';
            y--;
        }
    }
    else if(x<0 && y<0)
    {
        while (x!=0)     
        {
            cout << 'W';
            x++;
        }
        while (y!=0)
        {
            cout << 'S';
            y++;
        }
    }
}