/*
	activate root for jupyter:: source ~/anaconda3/bin/activate root
	dummy output:: lspci -nnk | grep -A2 Audio
				   echo "options snd-hda-intel model=generic" | sudo tee -a /etc/modprobe.d/alsa-base.conf


	SIEVE OF ERATOSTHENES

	int P[1000001];
    void prime(){
        int i,j;
        for(i=1;i<1000001;i++)
            P[i]=1;
        P[1]=0;
        for(i=2;i<=1000;i++){
            if(P[i]==1){
                for(j=2;j*i<=1000001;j++)
                    P[j*i]=0;
            }
        }
    }

    Binary Search 

int bisearch(int arr[], int l, int r, int x)
{
    if(r>=l)
    {
        int mid = l + (r-l)/2;
        if(arr[mid]==x) {return mid;}
        else if (arr[mid]<x) {return Bsearch(arr,mid+1,r,x);}
        else {return Bsearch(arr,l,mid-1,x);}
    }
    return -1;
}

*/

    #include <bits/stdc++.h>
	#include "llist.h"
    using namespace std;

    #define all(a)       a.begin(), a.end()
    #define fi           first
    #define se           second
    #define pb           push_back
    #define INF          1000000000
    #define ll           long long
    #define vi           vector<int>
    #define vlli         vector<long long int>  
    #define pii          pair<int,int>
    #define FOR(a,b,c)   for(int a=b;a<c;a++)
    #define REP(i,n)     FOR(i,0,n)

    int main()
    {
    	cout << "How many numbers: ";
    	int n,x; cin >> n;
    	LinkedList object;
    	REP(i,n){
    		cout << "Insert number: ";
    		cin >> x;
    		object.Insert(x);
    		cout << "The list is now: ";
    		object.Print();
    	}
    }
