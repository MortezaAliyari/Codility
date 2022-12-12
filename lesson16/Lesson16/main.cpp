#include <iostream>
#include <vector>
using namespace std;
class lesson16{
  public:
    lesson16(){
    cout<<"running lesson16! "<<endl;
    }
    int solution(vector<int> A, vector<int> B){
        int maxc=A.size();
        int counter=1;
        int B0=B[0];
        for (int i=1;i<maxc;i++){

            if (A[i]>B0){
                counter++;
                B0=B[i];
            }

        }
        if (maxc<1)
            return 0;
        else if (counter ==1){
            return 0;

        }
        return counter;

    }



};
int main()
{
    std::cout<<"hello there"<<std::endl;
    vector<int> A={1,3,7,9,9};
    vector<int> B={5,6,8,9,10};
lesson16 a;
cout<<a.solution(A,B)<<endl;

    return 0;
}
