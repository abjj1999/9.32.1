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
    void setName(string);
    void setPrice(int);
    void setQuantity(int);
    int getPrice();
    int getQuantity();
    string getName();
    
};
#endif