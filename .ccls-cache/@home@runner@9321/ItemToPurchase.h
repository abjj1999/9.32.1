#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

/* Type your code here */
class ItemToPurchase{
  private: 
    string itemName;
    int itemPrice;
    int itemQuantity;
  public:
    ItemToPurchase(){
      itemName = "";
      itemPrice = 0;
      itemQuantity = 0;
    }
    void SetName(string);
    void SetPrice(int);
    void SetQuantity(int);
    int GetPrice();
    int GetQuantity();
    string GetName();
    
};
#endif