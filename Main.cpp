#include <iostream>
using namespace std;
class menu {
    string item;
    int cal;
    float price;
public:

    menu(string i, int c, float p) {
        item=i;
        cal=c;
        price=p;
    }
    void display() {
    cout<<" "<<item<<" "<<cal<<" "<<price<<endl;
    }
};
int main() {
    menu soup1("Potato Soup", 280, 6.50);
    soup1.display();


    return 0;

}
