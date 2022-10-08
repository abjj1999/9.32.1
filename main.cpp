#include <iostream>
using namespace std;
#include "ItemToPurchase.h"
int main() {
  // std::cout << "Hello World!\n";

  ItemToPurchase item1;
  ItemToPurchase item2;
  string name;
  int price;
  int q;
  cout << "Item 1"<<endl;
  
  cout << "Enter the item name:"<<endl;
  getline(cin, name);
  item1.SetName(name);

  cout <<"Enter the item price:"<< endl;
  cin >> price;
  item1.SetPrice(price);

  cout << "Enter the item quantity:" <<endl;
  cin >> q;
  item1.SetQuantity(q);

  // cout << "item1"<<endl;
  // cout << item1.getName() <<endl;
  // cout << item1.getPrice() <<endl;
  // cout << item1.getQuantity() <<endl;
  cin.ignore();
  cout<<endl << "Item 2"<<endl;
  
  cout << "Enter the item name:"<<endl;
  getline(cin, name);
  item2.SetName(name);

  cout <<"Enter the item price:"<< endl;
  cin >> price;
  item2.SetPrice(price);

  cout << "Enter the item quantity:" <<endl;
  cin >> q;
  item2.SetQuantity(q);
  
  // cout << "item2"<<endl;
  // cout << item2.getName() <<endl;
  // cout << item2.getPrice() <<endl;
  // cout << item2.getQuantity() <<endl;

  cout<<endl << "TOTAL COST"<<endl;
  cout << item1.GetName() << " "<< item1.GetQuantity() << " @ $"<< item1.GetPrice() << " = $" << item1.GetPrice() * item1.GetQuantity() << endl;


  
  cout << item2.GetName() << " "<< item2.GetQuantity() << " @ $"<< item2.GetPrice() << " = $" << item2.GetPrice() * item2.GetQuantity() << endl;



  cout<<endl << "Total: $" << (item1.GetPrice() * item1.GetQuantity()) + (item2.GetPrice() * item2.GetQuantity() ) << endl;

}