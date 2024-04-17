//
// Created by codjs on 2024-04-18.
//
#include "Cart.h"
#include "algorithm"
void Cart::addItem(const Item& item) {
    items.push_back(item);
}

void Cart::deleteItem(int id) {
    const_iterator last = std::remove_if(items.begin(),items.end(),
                   [id](Item& i){return id == i.getId();});

    items.erase(last,items.end());
}

void Cart::viewItemDetails(int id, std::ostream &out) const {
    const_iterator search = std::find_if(items.begin(),items.end(),
                               [id](Item& i){return i.getId() == id;});
}