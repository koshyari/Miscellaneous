    #include <bits/stdc++.h>
    using namespace std;

    typedef long long      ll;
    typedef vector<int>    vi;
    typedef pair<int, int> ii;
    #define INF 1000000000
    #define pb push_back

    int naive(string s, string p)
    {
        int ls=s.length(),ps=p.length();
        int i=0,j=0,count=0,temp=0;
        while(i<ls)
        {
            if(p[j]==s[i] && j!=ps-1) {j++;i++;}
            else if(p[j]==s[i] && j==ps-1) {count++;j=0;temp+=ps;i=temp-1;}
            else {++temp; j=0; i=temp;}
        }
        return count;
    }

    int main()
    {
        string s,p;
        cout << "Enter string s: ";
        cin >> s;
        cout << "Enter pattern p: ";
        cin >> p;

        cout << "Pattern p was found in string s " << naive(s,p) << " times" << endl;
        return 0;
    }


