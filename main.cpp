#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int>vec = {-2,1,-3,4,-1,2,1,-5,4,5,8,10,-200,100,8};
    int maxSumInterval = vec[0];
    int iMax = 0;
    int iMin = 0;

    int iMinLocal = 0;
    int sumMin = vec[0];

    int sum = 0;
    int sum0 = 0;
    for(int i = 0; i < vec.size(); i++){
       sum += vec[i];
       if(i!=0) sum0+=vec[i-1];


       if(sum0 < sumMin){
           sumMin = sum0;
           iMinLocal = i-1;
       }

       if(sum - sumMin > maxSumInterval){
           maxSumInterval = sum - sumMin;
           iMax = i;
           iMin = (vec.size()>1 ? iMinLocal+1 : iMinLocal);
       }
       //cout << vec[i] << " " << sum <<" " << sumMin <<" " << maxSumInterval << endl;
    }


    cout << "Max sum between " << iMin<< " and " << iMax << " and equal " << maxSumInterval << endl;
    return 0;
}
