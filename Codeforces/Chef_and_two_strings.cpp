#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        int l = s1.size();
        int ques=0, diff = 0;
        for(int i=0; i<l; i++)
        {
            if(s1[i] == '?' || s2[i] == '?')
            {
                ques++;
            }
            else if(s1[i] != s2[i])
            {
                diff++;
            }
        }
        cout << diff << " " << ques + diff << endl;
    }
    return 0;
}
