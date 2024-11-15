#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s, ss;
        cin >> s >> ss;
        
        if(s[(s.size() - 1)] == 'M' || ss[(ss.size() - 1)] == 'M')
        {
            if(ss[(ss.size() - 1)] == 'L')
            {
                cout << "<" << endl;
            }
            else if(ss[(ss.size() - 1)] == 'S')
            {
                cout << ">" << endl;
            }
            else if(s[(s.size() - 1)] == 'L')
            {
                cout << ">" << endl;
            }
            else if(s[(s.size() - 1)] == 'S')
            {
                cout << "<" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
        else
        {
            if(s[(s.size() - 1)] == 'L')
            {
                if(ss[(ss.size() - 1)] == 'L')
                {
                    if(s.size() == ss.size())
                    {
                        cout << "=" << endl;
                    }
                    else if(s.size() < ss.size())
                    {
                        cout << "<" << endl;
                    }
                    else
                    {
                        cout << ">" << endl;
                    }
                }
                else if(ss[(ss.size() - 1)] == 'S')
                {
                    cout << ">" << endl;
                }
            }
            else if(s[(s.size() - 1)] == 'S')
            {
                if(ss[(ss.size() - 1)] == 'S')
                {
                    if(s.size() == ss.size())
                    {
                        cout << "=" << endl;
                    }
                    else if(s.size() > ss.size())
                    {
                        cout << "<" << endl;
                    }
                    else
                    {
                        cout << ">" << endl;
                    }
                }
                else if(ss[(ss.size() - 1)] == 'L')
                {
                    cout << "<" << endl;
                }
            }
        }
    }
}
