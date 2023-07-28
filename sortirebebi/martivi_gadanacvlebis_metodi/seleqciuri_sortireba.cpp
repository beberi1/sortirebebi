#include <iostream>
#include <vector>

using namespace std;

// Selection Sort is msgavsi

int main() {
    vector<int> gio;
    int cvladi;

    // vwer veqtorshi ricxvebs
    while (cin >> cvladi) {
        gio.push_back(cvladi);
    }


    for (int i = 0; i < gio.size(); i++){
        //aigeba gio[0] sheedareba yvelas tu iqneba masze dabali sxva gadmova mis adgilas
        //mere gio[1]-s aigebs da masze izams igives
        
        if(i == gio.size()){
            break;  //bolo ro ar gaketos
        }
        
        int dawyeba = i;  // amis daxmarebit ukve dalagebuls agar sheamowmebs
        for(int j = 0; j < gio.size(); j++){
            j = dawyeba;
            if(gio[i] >= gio[j]){
                cvladi = gio[i];
                gio[i]= gio[j];
                gio[j] = cvladi;
            }
            dawyeba++;
        }
    }


    //tu gveqneba 5,1,9,3
    // 5 >= 5; 5>=1 -> {1,5,9,3}, 1 >= 9; 1 >=3;
    // 5 >= 5; 5 >=9; 5 >= 3 -> {1,3,9,5};
    // 9 >= 9; 9 >= 5 -> {1,3,5,9};


    cout << endl;

    // vprintav elementebs
    for (int i = 0; i < gio.size(); i++) {
        cout << gio[i] << " ";
    }

    return 0;
}
