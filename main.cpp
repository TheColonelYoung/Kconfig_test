
#include <iostream>

int main(){
    #ifdef CONFIG_TEST
        cout << "test" << endl;
    #endif

    return 0;
}
