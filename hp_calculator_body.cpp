#include "hp_calculator.hpp"




// This \/ is the class. Putting *Classname*:: before these functions lets the program know these functions belong to the classes called in the hpp file.
    Health_Finder::Health_Finder (int hit_dice_total, int constitution_modifier, int character_level) 
    : hit_dice_total(hit_dice_total), constitution_modifier(constitution_modifier), character_level(character_level) 
    {
    }


void Health_Finder::hp_calc()
    {
       max_hp = hit_dice_total + (constitution_modifier * character_level);
        
        if (character_level == 1) { cout << "Your starting health pool is " << max_hp << " hp." << endl; } else if (character_level != 1) {cout << "Your health pool grows by " << max_hp << " hp." << endl; }
    }

void Health_Finder::hp_calc_rep()
    {
        max_hp = hit_dice_total + (1 * character_level) + (constitution_modifier * character_level);
        
        if (character_level == 1) { cout << "Your starting health pool is " << max_hp << " hp." << endl; } else if (character_level != 1) {cout << "Your health pool grows by " << max_hp << " hp." << endl; }


    }



    User_Interface::User_Interface(){}

    void User_Interface::data_request()
    {
        
        

        cout << "Please provide your hit dice total (for level 1 take the max value of your class' hit die): ";
        cin >> hit_dice_total;
        cout << "Now please provide your constitution modifier: ";
        cin >> constitution_modifier;
        cout << "Finally, please submit your character's level: ";
        cin >> character_level;
        Health_Finder instance(hit_dice_total, constitution_modifier, character_level);
        cout << "Lamia and Chelonoids have different health scalings. Is your character one of these two races? (yes/no): ";
        cin >> reptile;
        if (reptile == "no" || reptile == "No")
        {
        instance.hp_calc();
        } else if (reptile == "yes" || reptile == "Yes")
        {
        instance.hp_calc_rep();
        }
//___________________________________________________________________

        
    }


    Health_Die_List::Health_Die_List(): gen(rd()), d6(1, 6), d8(1, 8), d10(1, 10), d12(1, 12) {}
    
    void Health_Die_List::print_hitdie()
    {
        cout << "Class -   Hit die" << endl;
        cout << "Sorcerer -  d6" << endl;
        cout << "Wizard -    d6" << endl;
        cout << "Bard -      d8" << endl;
        cout << "Cleric -    d8" << endl;
        cout << "Druid -     d8" << endl;
        cout << "Monk -      d8" << endl;
        cout << "Rogue -     d8" << endl;
        cout << "Warlock -   d8" << endl;
        cout << "Fighter -   d10" << endl;
        cout << "Paladin -   d10" << endl;
        cout << "Ranger -    d10" << endl;
        cout << "Barbarian - d12" << endl;
    }
    void Health_Die_List::role_die()
    {
    int dice;

    
        cout << "Welcome to the hit die roler. Type the number of the corronsponding class and hit die to roll it." << endl;
        cout << "1) Sorcerer - Wizard (d6)" << endl << "2) Bard - Cleric - Druid - Monk - Rogue - Warlock (d8)" << endl << "3) Fighter - Paladin - Ranger (d10)" << endl << "4) Barbarian (d12)" << endl;
        cout << "You class number is: ";
        cin >> dice;
        if (dice == 1) {
        int roll = d6(gen);
        cout << "You rolled a: " << roll << endl;
        } else
        if (dice == 2) {
        int roll = d8(gen);
        cout << "You rolled a: " << roll << endl;
        } else
        if (dice == 3) {
        int roll = d10(gen);
        cout << "You rolled a: " << roll << endl;
        } else
        if (dice == 4) {
        int roll = d12(gen);
        cout << "You rolled a: " << roll << endl;
        }

    // To-do: Implement feature which lets the user plug their dice roll directly into a Health_Finder calculation
        
    }

