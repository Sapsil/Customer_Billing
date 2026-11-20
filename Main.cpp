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
    cout<<item<<", "<<cal<<" cal, $"<<price<<endl;
  }
};

int main() {
  // appetizers
  menu bloom("Bloomin' Onion", 1920, 10.99);
  menu cheese("Cheese Fries", 2860, 13.79);
  menu spin_dip("3 Cheese Spinach Dip", 680, 7.99);
  menu mozzie("Fried Mozzarella Sticks", 920, 9.99);
  // entrees
  menu sirloin("8oz Sirloin", 400, 20.79);
  menu filet("8oz Filet", 570, 34.29);
  menu strip("New York Strip", 880, 26.49);
  menu ribeye("Rockhampton Ribeye", 1030, 29.99);
  menu alice("Alice Springs Chicken", 910, 21.79);
  menu tenders("Chicken Tenders", 1000, 18.99);
  menu salmon("Perfectly Grilled Salmon", 600, 26.99);
  // sides
  menu cup_pot("Potato Soup", 250, 4.99);
  menu fo_crock("French Onion Soup", 410, 7.99);
  menu chili("Tasmanian Chili", 200, 4.99);
  menu salad("Side Salad", 0, 4.99);
  menu premium_sal("Premium Side Salad", 0, 5.99);
  // more sides
  menu fries("Side Fries", 500, 3.99);
  menu pot("Loaded Baked Potato", 440, 3.99);
  menu swt_pot("Loaded Sweet Potato", 410, 3.99);
  menu stk_mac("Steakhouse Mac N Cheese", 870, 5.99);
  // desserts
  menu thunder("Chocolate Thunder from Down Under", 800, 11.29);
  menu lg_cake("New York-Style Cheesecake", 940, 9.99);
  menu carrot("Triple-Layer Carrot Cake", 1100, 9.99);
  menu skillet_cookie("Chocolate Chip Cookie Skillet", 820, 9.99);
  // drinks... idk calorie count varies so I put zero
  menu fountain("Fountain Drink", 0, 3.99);
  menu flav_lemotea("Flavored Lemonade or Tea", 0, 4.99);
  menu gallong("Gallon of Tea or Lemonade", 0, 7.99);

  return 0;

}
