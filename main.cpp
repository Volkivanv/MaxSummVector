#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int>vec = {-1,2,4,-5,5,7,34,-2,5,-5};
    int maxSum = vec[0];
    int jm = 0;
    int im = 0;
    for(int i = 0; i < vec.size(); i++){
        int sum = 0;
        for(int j = i; j < vec.size(); j++){
            sum +=vec[j];
            if(maxSum < sum) {
                maxSum = sum;
                im = i;
                jm = j;
            }
        }
    }

    cout << "Max sum between " << im << " and " << jm << " and equal " << maxSum << endl;
    return 0;
}
