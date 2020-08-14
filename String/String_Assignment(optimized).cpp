#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;
char s[200];

void Strlength()
{   int length=0;
    for(int i=0; s[i]!='\0'; i++) length++;
    printf("Length of the given String is %d\n", length);
}

void PatMatching()
{

    printf("                  Patter Matching\n");
    printf("--------------------------------------------------------\n");
    printf("Your string is: %s\n",s);
    printf("Enter the pattern you want to match in the given string- ");
    cin >> ws;
    char pat[200];
    gets(pat);

    int sLen=0, patLen=0;
    for(int i=0; s[i]!='\0'; i++) sLen++;
    for(int i=0; pat[i]!='\0'; i++) patLen++;

    int f=0, ans=0; vector<int> pos;
    for(int i=0; i<sLen-patLen+1; i++)
    {
        int cnt=0;
        for(int j=0; j<patLen; j++)
        {
            if(s[i+j]==pat[j]) cnt++;
        }
        if(cnt==patLen)
        {
            f=1;
            pos.push_back(i+1);
            ans++;
        }
    }

    if(f){
        cout<<"The pattern matches "<< ans <<" times"<<endl;
        cout<<"Pattern matches at position(s) ";
        for(int i: pos) cout<<i<<" "; }
    else cout<<"        No Matches"<<endl;
}

char* AscBubSort()
{
    int n=0;
    for(int i=0; s[i]!='\0'; i++) n++;

    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-i-1; j++)
            if (s[j] > s[j+1])
                swap(s[j], s[j+1]);
    return s;
}

char* DesBubSort()
{
    int n=0;
    for(int i=0; s[i]!='\0'; i++) n++;

    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-i-1; j++)
            if (s[j] < s[j+1])
                swap(s[j], s[j+1]);
    return s;
}

int BinarySearch()
{
    int length=0;
    for(int i=0; s[i]!='\0'; i++) length++;

    printf("             Binary Search\n");
    printf("---------------------------------------\n");
    char* sortedS=AscBubSort();
    printf("Sorted list: %s\n", sortedS);
    printf("Enter the character you want to search- ");
    cin >> ws;
    char key; scanf("%c",&key);

    int left=0, right= length-1;

    while(left<=right){
        int mid= left+(right-left)/2;
        if(sortedS[mid]== key) return mid;
        if(sortedS[mid]<key) left= mid+1;
        else right= mid-1;}

    return -1;
}

int main()
{
    printf("Enter a string-\n");
    gets(s);
    while(true)
    {
        int n;
        printf("\n\nEnter the no. of operation you want to run:\n1. String Length\n2. Pattern Matching\n3. Bubble Sort\n4. Binary Search\n\n");
        scanf("%d", &n);

        if(n==1) Strlength();
        else if(n==2) PatMatching();
        else if(n==3)
        {
            printf("           Bubble Sort\n----------------------------------\n");
            printf("Ascending Sort : %s\n", AscBubSort());
            printf("Descending Sort: %s\n", DesBubSort());
        }
        else if(n==4)
        {   int ans=BinarySearch();
            (ans == -1) ? printf("Element is not present in the string")
            : printf("Element is present at index %d", ans);
        }
        else printf("invalid input");

        int n2;
        printf("\n\nWant to continue?\n1. Continue\n2. Exit\n\n");
        scanf("%d", &n2);
        if(n2==2) break;
        else   continue;
    }
    return 0;
}