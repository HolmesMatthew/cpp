
#pragma once
#ifndef SALE_H
#define SALE_H

#include <string>
using std::string;

class Sale {
    private:
        double itemCost;
        double taxRate;
    public:
        Sale(double cost, double rate = 0.05){
            itemCost = cost;
            taxRate = rate;
        }

        double getItemCost()const
        {
            return itemCost;
        }
        // double taxRate()const
        // {
        //     return taxRate;
        // }
        double getTax() const{
            return (itemCost*taxRate);
        }
        double getTotal(){
            return (itemCost*getTax());
        }





};

#endif