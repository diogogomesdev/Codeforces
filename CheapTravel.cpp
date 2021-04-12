#include <iostream>
 
using namespace std;
 
int main(){
    int n, m;
    float a, b;
    cin >> n >> m >> a >> b;
 
    float ride_cost_b = b/m;
 
    if(a < ride_cost_b){
        cout << (int)(n*a) << endl;
    }
    else if(n<m){
        if((n*a) < b) cout << (int)(n*a) << endl;
        else cout << (int)b << endl;
    }
    else{
        int btickets = n/m;
        int rest = n%m;
        if((rest*a) < b){
            cout << (int)(btickets*b + rest*a) << endl;
        }
        else{
            cout << (int)(btickets*b + b) << endl;
        }
    }
 
    return 0;
}
