# Codility
Codility Lessons with above 90% score
//Morteza Aliyari-> C++ -> Qt5
//Codility website-> lesson8-1->score 91%
**************************************************************************************************************
An array A consisting of N integers is given. The dominator of array A is the value that occurs in more than half of the elements of A.

For example, consider array A such that

 A[0] = 3    A[1] = 4    A[2] =  3
 A[3] = 2    A[4] = 3    A[5] = -1
 A[6] = 3    A[7] = 3
The dominator of A is 3 because it occurs in 5 out of 8 elements of A (namely in those with indices 0, 2, 4, 6 and 7) and 5 is more than a half of 8.

Write a function

int solution(vector<int> &A);

that, given an array A consisting of N integers, returns index of any element of array A in which the dominator of A occurs. The function should return −1 if array A does not have a dominator.

For example, given array A such that

 A[0] = 3    A[1] = 4    A[2] =  3
 A[3] = 2    A[4] = 3    A[5] = -1
 A[6] = 3    A[7] = 3
the function may return 0, 2, 4, 6 or 7, as explained above.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [0..100,000];
each element of array A is an integer within the range [−2,147,483,648..2,147,483,647].
Copyright 2009–2021 by Codility Limited. All Rights Reserved. Unauthorized copying, publication or disclosure prohibited.
***************************************************************************
********************
//Solution:
********************
***************************************************************************
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include <bits/stdc++.h> // Include most of standard libraries 
using namespace std;

int  solution(vector<int> &A){
unordered_set<int> s;
vector<int>::iterator it;
vector<int> dom,c;
int indx,ind=0,j=0;
//loop size is half of input vector size.
// The loop counter should be equal or greater than half of input vector size.
for(int i=0;i<=ceil(A.size()/2);i++){
    if(s.find(A[i])==s.end()){
        if( count(A.begin(),A.end(),A[i])>ceil(A.size()/2)){
        it=find(A.begin(),A.end(),A[i]);
        indx=it-A.begin();
        dom.insert(dom.begin()+j,A[i]);
        c.insert(c.begin()+j,count(A.begin(),A.end(),A[i]));
        j++;
        break;// It shows there is a one dominator number in input vector
       }
    }
}

if(!dom.empty()){
    return indx;
}
else
    return -1;
}

int main()
{
    vector <int> A={1,1,0,0,0,0};
   cout<<solution(A)<<endl;
   return 0;
}
