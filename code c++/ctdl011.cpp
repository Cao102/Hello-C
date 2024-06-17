#include<bits/stdc++.h>

using namespace std;

signed main(){
    int t;
    cin >> t;//khai báo số lượng test
    while(t--){
        int n;
        cin >> n;
        if(n < 4) cout << -1;

        else{ for(int i = 0; i < (1<<n); i++){ //vòng lặp chạy từ 0 đến 2^n - 1
            string s = bitset<32>(i).to_string();//chuyển số i sang dạng nhị phân
            s = s.substr(32-n);//lấy n kí tự cuối
            size_t first = s.find("01");
            size_t second = s.find("01", first + 2);
            if(first != string :: npos && second != string :: npos && s.find("01", second + 2) == string :: npos)
                cout << s << " ";
        }
        cout << endl;
        }
    }
    return 0;
}