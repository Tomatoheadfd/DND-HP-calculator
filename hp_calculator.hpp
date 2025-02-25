#ifndef HP_CALCULATOR_H
#define HP_CALCULATOR_H

#include <iostream>
#include <vector>
#include <random>

using namespace std;

class Health_Finder {
private:
    int max_hp;
    int hit_dice_total;
    int constitution_modifier;
    int character_level;

public:
    Health_Finder(int hit_dice_total, int constitution_modifier, int character_level);
    
    void hp_calc();
    void hp_calc_rep();
};

class User_Interface {
private:
    int hit_dice_total;
    int constitution_modifier;
    int character_level;
    string reptile;

public:
    User_Interface();
    void data_request();
};

class Health_Die_List {
private:
random_device rd;  // Seed source
mt19937 gen; // Mersenne Twister PRNG
uniform_int_distribution<int> d6; // Range [1,6]
uniform_int_distribution<int> d8;
uniform_int_distribution<int> d10;
uniform_int_distribution<int> d12;
public:
Health_Die_List();
void print_hitdie();
void role_die();
};

#endif
