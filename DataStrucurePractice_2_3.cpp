#include <iostream>
#include <vector>
using namespace std;

int prefixAverages1(vector<int>, int);
int prefixAverages2(vector<int>, int);

int main(void){

    int n, tmp;
    vector<int> v;

    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }

    prefixAverages1(v, n);
    prefixAverages2(v, n);

    return 0;
}

int prefixAverages1(vector<int> v, int n){
    int prefix=0;
    double avg=0;
    for (int i = 0; i<n; i++){
        prefix+=v[i];
        avg = (double)prefix / (i+1);
        cout << (int)(avg+0.5) << " ";

    }
}

int prefixAverages2(vector<int> v, int n){
    for (int i = 0; i < n; i++)
    {
        double avg=0;
        int prefix = 0;
        for (int j = 0; j < i + 1; j++)
            {
                prefix += v[j];
            }
        avg = (double)prefix / (i+1);
        cout << (int)(avg+0.5) << " ";
    }
}
