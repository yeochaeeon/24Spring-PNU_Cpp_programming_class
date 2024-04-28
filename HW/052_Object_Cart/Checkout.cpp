//
// Created by codjs on 2024-04-18.
//
#include "Cart.cpp"

int Checkout::calculateTotalPrice(std::vector<Item>::const_iterator begin,
                                  std::vector<Item>::const_iterator end) const {
    int total = 0;
    if(discountCode == NO_DISCOUNT) {
        std::for_each(begin,end,
                      [&total](auto i){total = total + i.getPrice();});

    }
    else if (discountCode == DISCOUNT_20) {
        std::for_each(begin,end,
                      [&total](auto i ){total = total + i.getPrice();});
        total = total * 0.8;
    }
    else if (discountCode == DISCOUNT_50){
        std::for_each(begin,end,
                      [&total](auto i ){total = total + i.getPrice();});
        total = total * 0.5;
    }
    return total;


}
void Checkout::setShippingAddress(const std::string& shippingAddress) {
    this->shippingAddress = shippingAddress;
}

void Checkout::setDiscountCode(DiscountCode discountCode) {
    this->discountCode = discountCode;
}