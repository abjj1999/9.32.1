#include <iostream>
using namespace std;

#include "ItemToPurchase.h"




void ItemToPurchase::SetName(string name){
  itemName = name;
}

void ItemToPurchase::SetPrice(int p){
  itemPrice = p;
}

void ItemToPurchase::SetQuantity(int q){
  itemQuantity = q;
}

int ItemToPurchase::GetPrice(){
  return itemPrice;
}
int ItemToPurchase::GetQuantity(){
  return itemQuantity;
}

string ItemToPurchase::GetName(){
  return this->itemName;
}