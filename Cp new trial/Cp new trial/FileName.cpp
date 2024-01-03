#include<iostream>
using namespace std;


struct Players {
    string PlayerName;
    int Health;
    string Classification;
    int Experience;

    Players()
    {
        Health = 100;
        Experience = 0;
    }
    Players(string name, int health, string classification, int exp)
    {
        PlayerName = name;
        Health = health;
        Classification = classification;
        Experience = exp;
    }

    void Input()
    {
        int select;

        cout << "\n\nSelect a Name: ";
        cin >> PlayerName;
        cout << "Health : 100 :\n";
        Health = 100;

        cout << "Which Sort of player You Want to choose :\n" << "1. (Warrior)\n" << "2. (Mage)\n" << "3. (Rogue)   :";
        cin >> select;
        if (select == 1) {
            Classification = "Warrior";
        }
        else if (select == 2) {
            Classification = "Mage";
        }
        else if (select == 3) {
            Classification = "Rogue";
        }
        
    }

    void ShowInformation()
    {
        cout << "Name: " << PlayerName << endl;
        cout << "Health: " << Health << endl;
        cout << "Classification: " << Classification << endl;
        cout << "Experience: " << Experience << endl;
        cout << "\n\n";
    }
};
void Scraby_Caves(Players& p);     // Passed The Prototypes 
void Jackrow_Island(Players& p);
void Coastal_Lake(Players& p);
void Rocky_Land(Players& p);
void Scraby_CavesMedium(Players& p);
void Jackrow_IslandMedium(Players& p);
void  Coastal_LakesMedium(Players& p);
void  Rocky_LandMedium(Players& p);
void Scraby_CavesHard(Players& p);
void Jackrow_IslandHard(Players& p);
void  Coastal_LakesHard(Players& p);
void  Rocky_LandHard(Players& p);

void Game(Players& p) {
    int select, level;

    cout << "\t\t\tCharacter details \t\t\n";
    p.Input();
    p.ShowInformation();

    cout << "  Select The Difficulty Level :\n\n" << " 1. Easy\n" << " 2. Normal\n" << " 3. Difficult :";
    cin >> level;
    cout << "\n  * NOTE : YOU CANT DIRRECTLY PLAY THE OTHER MAPS UNTIL YOU INCREASE YOUR EXPERIENCE POINTS FOR WHICH YOU HAVE TO PLAY A SINGLE MAP ONE BY ONE.....\n\n";

    
        if (level == 1) {
            while (true) {
                cout << "\n\n\t Select The Map You Wanna Play :\t\n" << endl;
                cout << "    1. Scraby Caves \t 2. Jackrow Island \t 3.Coastal lake \t 4. Rocky land \t 5. Return to Menu \n";
                cin >> select;
                if (select == 1) {

                    cout << "Entered Scraby Caves!\n";
                    cout << "\tYou're journey begins in the Scraby Caves,\n";
                   cout<<" where you will faces the challenge of a colossal Giant Crab.Aric's bravery, Elara's magical prowess, and Kael's cunning combine to defeat the creature,\n"<<" unlocking the first piece of Elemental Harmony.";
                    Scraby_Caves(p);

                }
                else if (select == 2 && p.Experience > 0) {
                   
                    cout << "Entered Jackrow Island!\n";
                    cout << "\tJackrow Island proves to be a test of wits. Confronting the hypnotic Predator Anaconda," << " the trio strategizes to outsmart the serpent.Elara's magic, Kael's stealth, and Aric's might secure the third piece of Elemental Harmony.";
                    Jackrow_Island(p);

                }
               

                else if (select == 3 && p.Experience >= 600) {
                    cout << "Entered Coastal Lakes!\n";
                    cout << "\tNext, at the Coastal Lakes, a Wild Lizard tests their unity. With coordinated efforts, they overcome the creature, gaining a deeper understanding of their strengths as a team.";
                    Coastal_Lake(p);
                }
                 
                else  if (select == 4 && p.Experience >= 1000) {
                    cout << "Entered Rocky Land!c\n";
                    cout << "\tThe final battleground is the Rocky Lands, guarded by the formidable Mysterious Dinosaur." << "The heroes confront their greatest challenge yet.United and resilient, they defeat the creature, unlocking the last piece of Elemental Harmony.";
                    Rocky_Land(p);
                    break;
                }
                else  if (select == 5) {
                    break;
                }
                else {
                    if (select == 2) {
                        cout << "\t*You lost at Jackrow Island Due to which You're Experience Points Are low.Again Returning to Scraby Caves.\n";
                        Scraby_Caves(p);
                    }
                    else if (select == 3) {
                        cout << "\t*You lost at Coastal Lakes Due to which You're Experience Points Are low.Again Returning to Jackrow Island.\n";
                        Jackrow_Island(p);
                    }
                    else if (select == 4) {
                        cout << "\t*You lost at Rocky Land Due to which You're Experience Points Are low.Again Returning to Coastal Lakes.\n";
                        Coastal_Lake(p);
                    }
                    else {
                        cout << "Invalid choice. Returning to Scraby Caves.\n";
                        Scraby_Caves(p);
                    }
                }

            }
        }
        else if (level == 2) {
            while (true) {
                cout << "\n\n\t Select The Map You Wanna Play :\t\n" << endl;
                cout << "    1. Scraby Caves \t 2. Jackrow Island \t 3.Coastal lake \t 4. Rocky land \t 5. Return to Menu \n";
                cin >> select;
                if (select == 1) {

                    cout << "Entered Scraby Caves!\n";
                    cout << "\tYou're journey begins in the Scraby Caves,\n";
                    cout << " where you will faces the challenge of a colossal Giant Crab.Aric's bravery, Elara's magical prowess, and Kael's cunning combine to defeat the creature,\n" << " unlocking the first piece of Elemental Harmony.";
                    Scraby_Caves(p);
                    Scraby_CavesMedium(p);

                }
                else if (select == 2 && p.Experience > 0) {

                    cout << "Entered Jackrow Island!\n";
                    cout << "\tJackrow Island proves to be a test of wits. Confronting the hypnotic Predator Anaconda," << " the trio strategizes to outsmart the serpent.Elara's magic, Kael's stealth, and Aric's might secure the third piece of Elemental Harmony.";
                    Jackrow_IslandMedium(p);

                }

                else if (select == 3 && p.Experience >= 600) {
                    cout << "Entered Coastal Lakes!\n";
                    cout << "\tNext, at the Coastal Lakes, a Wild Lizard tests their unity.With coordinated efforts, they overcome the creature, gaining a deeper understanding of their strengths as a team.";
                   Coastal_LakesMedium(p);

                }
                else if (select == 4 && p.Experience >= 1000) {
                    cout << "Entered Rocky Land!c\n";
                    cout << "\tThe final battleground is the Rocky Lands, guarded by the formidable Mysterious Dinosaur." << "The heroes confront their greatest challenge yet.United and resilient, they defeat the creature, unlocking the last piece of Elemental Harmony.";
                    Rocky_LandMedium(p);
                    break;
                }
                else if (select == 5) {
                    break;
                }
                else {
                    if (select == 2) {
                        cout << "\t*You lost at Jackrow Island Due to which You're Experience Points Are low.Again Returning to Scraby Caves.\n";
                        Scraby_CavesMedium(p);
                    }
                    else if (select == 3) {
                        cout << "\t*You lost at Coastal Lakes Due to which You're Experience Points Are low.Again Returning to Jackrow Island.\n";
                        Jackrow_IslandMedium(p);
                    }
                    else if (select == 4) {
                        cout << "\t*You lost at Rocky Land Due to which You're Experience Points Are low.Again Returning to Coastal Lakes.\n";
                        Coastal_LakesMedium(p);
                    }
                    else {
                        cout << "Invalid choice. Returning to Scraby Caves.\n";
                        Scraby_CavesMedium(p);
                    }
                }

            }
        }
        else if (level == 3) {
            while (true) {
                cout << "\n\n\t Select The Map You Wanna Play :\t\n" << endl;
                cout << "    1. Scraby Caves \t 2. Jackrow Island \t 3.Coastal lake \t 4. Rocky land \t 5. Return to Menu \n";
                cin >> select;
                if (select == 1) {

                    cout << "Entered Scraby Caves!\n";
                    cout << "\tYou're journey begins in the Scraby Caves,\n";
                    cout << " where you will faces the challenge of a colossal Giant Crab.Aric's bravery, Elara's magical prowess, and Kael's cunning combine to defeat the creature,\n" << " unlocking the first piece of Elemental Harmony.";
                    Scraby_CavesHard(p);

                }
                else if (select == 2 && p.Experience > 0) {

                    cout << "Entered Jackrow Island!\n";
                    cout << "\tJackrow Island proves to be a test of wits. Confronting the hypnotic Predator Anaconda,"<<" the trio strategizes to outsmart the serpent.Elara's magic, Kael's stealth, and Aric's might secure the third piece of Elemental Harmony.";
                    Jackrow_IslandHard(p);

                }

                else if (select == 3 && p.Experience >= 600) {
                    cout << "Entered Coastal Lakes!\n";
                    cout << "\tNext, at the Coastal Lakes, a Wild Lizard tests their unity.With coordinated efforts, they overcome the creature, gaining a deeper understanding of their strengths as a team.";
                    Coastal_LakesHard(p);

                }
                else if (select == 4 && p.Experience >= 1000) {
                    cout << "Entered Rocky Land!c\n";
                    cout << "\tThe final battleground is the Rocky Lands, guarded by the formidable Mysterious Dinosaur." << "The heroes confront their greatest challenge yet.United and resilient, they defeat the creature, unlocking the last piece of Elemental Harmony.";
                    Rocky_LandHard(p);
                    break;
                }
                else if (select == 5) {
                    break;
                }
                else {
                    if (select == 2) {
                        cout << "\t*You lost at Jackrow Island Due to which You're Experience Points Are low.Again Returning to Scraby Caves.\n";
                        Scraby_CavesHard(p);
                    }
                    else if (select == 3) {
                        cout << "\t*You lost at Coastal Lakes Due to which You're Experience Points Are low.Again Returning to Jackrow Island.\n";
                        Jackrow_IslandHard(p);
                    }
                    else if (select == 4) {
                        cout << "\t*You lost at Rocky Land Due to which You're Experience Points Are low.Again Returning to Coastal Lakes.\n";
                        Coastal_LakesHard(p);
                    }
                    else {
                        cout << "Invalid choice. Returning to Scraby Caves.\n";
                        Scraby_CavesHard(p);
                    }
                }

            }
        }
   
}
    
void Scraby_Caves(Players &p) {
    int select;
    char attack;
    int Crab_health = 100;
    
     
    cout << "\n\n\tThe Quest begins ........\n\n";
    cout << "The  Giant Crab is here !!!!!!!!!!!\n";
    while (Crab_health >= 0 && p.Health >=0) {
        cout << "\n\n  *. Do You want to attack it?  (y/n)";
        cin >> attack;

        if (attack == 'y') {
            
            Crab_health -= 50;
           
            p.Health -= 15;
          
            cout << "  Giant Crab got a 50 Damage...\n";
            cout << "   Giant Crab's current health is " << Crab_health << endl;
            cout << "  You Got a 15 Damage :" << endl;
           
            cout << "  Your Current Heath is " << p.Health  << endl;

        }
         else if (attack == 'n') {
          cout << "  Giant Crab's current health is " << Crab_health << endl;
            cout << "  You got a damage of 25" << endl;
            p.Health -= 25;
            cout << "  Your Current Heath is " << p.Health << endl;
        }
       
       
    }
    p.Experience += 200;
    cout << "\n**************CONGRATULATIONS!!!!!!!!!!*****************  \n " << "    You're Experience points are increased and Now are : " << p.Experience;
     if (Crab_health <= 0) {
        cout << "\n       You Have Defeated The Giant Crab .   ";
    }
    else if (p.Health <= 0) {
        cout<<"\n         Game Over .... You Lost ...";
    }
}
void Scraby_CavesMedium(Players& p) {
    int select;
    char attack;
    int Crab_health = 100;
    cout << "\n\n\tThe Quest begins ........\n\n";
    cout << "The  Giant Crab is here !!!!!!!!!!!\n";
    while (Crab_health >= 0 && p.Health >= 0) {
        cout << "\n\n  *. Do You want to attack it?  (y/n)";
        cin >> attack;

        if (attack == 'y') {

            Crab_health -= 25;

            p.Health -= 15;

            cout << "  Giant Crab got a 25 Damage...\n";
            cout << "   Giant Crab's current health is " << Crab_health << endl;
            cout << "  You Got a 15 Damage :" << endl;

            cout << "  Your Current Heath is " << p.Health << endl;

        }
        else if (attack == 'n') {
            cout << "  Giant Crab's current health is " << Crab_health << endl;
            cout << "  You got a damage of 25" << endl;
            p.Health -= 25;
            cout << "  Your Current Heath is " << p.Health << endl;
        }


    }
    p.Experience += 200;
    cout << "\n**************CONGRATULATIONS!!!!!!!!!!*****************  \n " << "    You're Experience points are increased and Now are : " << p.Experience;
    if (Crab_health <= 0) {
        cout << "\n       You Have Defeated The Giant Crab .   ";
    }
    else if (p.Health <= 0) {
        cout << "\n         Game Over .... You Lost ...";
    }
}
void Scraby_CavesHard(Players& p) {
    int select;
    char attack;
    int Crab_health = 100;



    cout << "\n\n\tThe Quest begins ........\n\n";
    cout << "The  Giant Crab is here !!!!!!!!!!!\n";
    while (Crab_health >= 0 && p.Health >= 0) {
        cout << "\n\n  *. Do You want to attack it?  (y/n)";
        cin >> attack;

        if (attack == 'y') {

            Crab_health -= 20;

            p.Health -= 15;

            cout << "  Giant Crab got a 20 Damage...\n";
            cout << "   Giant Crab's current health is " << Crab_health << endl;
            cout << "  You Got a 15 Damage :" << endl;

            cout << "  Your Current Heath is " << p.Health << endl;

        }
        else if (attack == 'n') {



            cout << "  Giant Crab's current health is " << Crab_health << endl;
            cout << "  You got a damage of 25" << endl;
            p.Health -= 25;
            cout << "  Your Current Heath is " << p.Health << endl;
        }


    }
    p.Experience += 200;
    cout << "\n**************CONGRATULATIONS!!!!!!!!!!*****************  \n " << "    You're Experience points are increased and Now are : " << p.Experience;
    if (Crab_health <= 0) {
        cout << "\n       You Have Defeated The Giant Crab .   ";
    }
    else if (p.Health <= 0) {
        cout << "\n         Game Over .... You Lost ...";
    }
}
void Jackrow_Island(Players &p) {
    int select;
    char attack;
    int Anaconda_health = 100;
    p.Health=100;
    


    cout << "\n\n\tThe Quest begins ........\n\n";
    cout << "The Predator Anaconda is here !!!!!!!!!!!\n";
    while (Anaconda_health >= 0 && p.Health >= 0) {
        cout << "\n\n  *. Do You want to attack it?  (y/n)";
        cin >> attack;

        if (attack == 'y') {

            Anaconda_health -= 50;

            p.Health -= 15;

            cout << "   Predator Anaconda got a 50 Damage...\n";
            cout << "    Predator Anaconda's current health is " << Anaconda_health << endl;
            cout << "  You Got a 15 Damage :" << endl;

            cout << "  Your Current Heath is " << p.Health << endl;

        }
        else if (attack == 'n') {



            cout << "   Predator Anaconda's current health is " << Anaconda_health << endl;
            cout << "  You got a damage of 25" << endl;
            p.Health -= 25;
            cout << "  Your Current Heath is " << p.Health << endl;
        }


    }
    if (Anaconda_health <= 0 && p.Health > 0) {
        p.Experience += 400;
        cout << "\n**************CONGRATULATIONS!!!!!!!!!!*****************  \n " << "    You're Experience points are increased and Now are : " << p.Experience;
        cout << "\n       You Have Defeated The Predator Anaconda .   ";
    }
    else {
        
        cout << "\n         Game Over .... You Lost ...\n";
        cout << "        You're Experience Points are : " << p.Experience;
    }
   
   
  
}
void Jackrow_IslandMedium(Players& p) {
    int select;
    char attack;
    int Anaconda_health = 100;
    p.Health = 100;



    cout << "\n\n\tThe Quest begins ........\n\n";
    cout << "The Predator Anaconda is here !!!!!!!!!!!\n";
    while (Anaconda_health >= 0 && p.Health >= 0) {
        cout << "\n\n  *. Do You want to attack it?  (y/n)";
        cin >> attack;

        if (attack == 'y') {

            Anaconda_health -= 25;

            p.Health -= 15;

            cout << "   Predator Anaconda got a 25 Damage...\n";
            cout << "    Predator Anaconda's current health is " << Anaconda_health << endl;
            cout << "  You Got a 15 Damage :" << endl;

            cout << "  Your Current Heath is " << p.Health << endl;

        }
        else if (attack == 'n') {



            cout << "   Predator Anaconda's current health is " << Anaconda_health << endl;
            cout << "  You got a damage of 25" << endl;
            p.Health -= 25;
            cout << "  Your Current Heath is " << p.Health << endl;
        }


    }
    if (Anaconda_health <= 0 && p.Health > 0) {
        p.Experience += 400;
        cout << "\n**************CONGRATULATIONS!!!!!!!!!!*****************  \n " << "    You're Experience points are increased and Now are : " << p.Experience;
        cout << "\n       You Have Defeated The Predator Anaconda .   ";
    }
    else {

        cout << "\n         Game Over .... You Lost ...\n";
        cout << "        You're Experience Points are : " << p.Experience;
    }
}
void Jackrow_IslandHard(Players& p) {
    int select;
    char attack;
    int Anaconda_health = 100;
    p.Health = 100;



    cout << "\n\n\tThe Quest begins ........\n\n";
    cout << "The Predator Anaconda is here !!!!!!!!!!!\n";
    while (Anaconda_health >= 0 && p.Health >= 0) {
        cout << "\n\n  *. Do You want to attack it?  (y/n)";
        cin >> attack;

        if (attack == 'y') {

            Anaconda_health -= 20;

            p.Health -= 15;

            cout << "   Predator Anaconda got a 20 Damage...\n";
            cout << "    Predator Anaconda's current health is " << Anaconda_health << endl;
            cout << "  You Got a 15 Damage :" << endl;

            cout << "  Your Current Heath is " << p.Health << endl;

        }
        else if (attack == 'n') {



            cout << "   Predator Anaconda's current health is " << Anaconda_health << endl;
            cout << "  You got a damage of 25" << endl;
            p.Health -= 25;
            cout << "  Your Current Heath is " << p.Health << endl;
        }


    }
    if (Anaconda_health <= 0 && p.Health > 0) {
        p.Experience += 400;
        cout << "\n**************CONGRATULATIONS!!!!!!!!!!*****************  \n " << "    You're Experience points are increased and Now are : " << p.Experience;
        cout << "\n       You Have Defeated The Predator Anaconda .   ";
    }
    else {

        cout << "\n         Game Over .... You Lost ...\n";
        cout << "        You're Experience Points are : " << p.Experience;
    }
}
void Coastal_Lake(Players& p) {
    int select;
    char attack;
    int lizard_health = 100;
    p.Health = 100;



    cout << "\n\n\tThe Quest begins ........\n\n";
    cout << "The Wild Lizard is here !!!!!!!!!!!\n";
    while (lizard_health >= 0 && p.Health >= 0) {
        cout << "\n\n  *. Do You want to attack it?  (y/n)";
        cin >> attack;

        if (attack == 'y') {

            lizard_health -= 50;

            p.Health -= 15;

            cout << "   Wild Lizard got a 50 Damage...\n";
            cout << "    Wild Lizard's current health is " << lizard_health << endl;
            cout << "  You Got a 15 Damage :" << endl;

            cout << "  Your Current Heath is " << p.Health << endl;

        }
        else if (attack == 'n') {



            cout << "   Wild Lizard's current health is " << lizard_health << endl;
            cout << "  You got a damage of 25" << endl;
            p.Health -= 25;
            cout << "  Your Current Heath is " << p.Health << endl;
        }


    }
    if (lizard_health <= 0 && p.Health > 0) {
        p.Experience += 400;
        cout << "\n**************CONGRATULATIONS!!!!!!!!!!*****************  \n " << "    You're Experience points are increased and Now are : " << p.Experience;
        cout << "\n       You Have Defeated The Wild Lizard .   ";
    }
    else {
        
        cout << "\n         Game Over .... You Lost ...\n";
        cout << "        You're Experience Points are : " << p.Experience;
    }

}
void Coastal_LakesMedium(Players& p) {
    int select;
    char attack;
    int lizard_health = 100;
    p.Health = 100;



    cout << "\n\n\tThe Quest begins ........\n\n";
    cout << "The Wild Lizard is here !!!!!!!!!!!\n";
    while (lizard_health >= 0 && p.Health >= 0) {
        cout << "\n\n  *. Do You want to attack it?  (y/n)";
        cin >> attack;

        if (attack == 'y') {

            lizard_health -= 25;

            p.Health -= 15;

            cout << "   Wild Lizard got a 25 Damage...\n";
            cout << "    Wild Lizard's current health is " << lizard_health << endl;
            cout << "  You Got a 15 Damage :" << endl;

            cout << "  Your Current Heath is " << p.Health << endl;

        }
        else if (attack == 'n') {



            cout << "   Wild Lizard's current health is " << lizard_health << endl;
            cout << "  You got a damage of 25" << endl;
            p.Health -= 25;
            cout << "  Your Current Heath is " << p.Health << endl;
        }


    }
    if (lizard_health <= 0 && p.Health > 0) {
        p.Experience += 400;
        cout << "\n**************CONGRATULATIONS!!!!!!!!!!*****************  \n " << "    You're Experience points are increased and Now are : " << p.Experience;
        cout << "\n       You Have Defeated The Wild Lizard .   ";
    }
    else {

        cout << "\n         Game Over .... You Lost ...\n";
        cout << "        You're Experience Points are : " << p.Experience;
    }
}
void  Coastal_LakesHard(Players& p) {
    int select;
    char attack;
    int lizard_health = 100;
    p.Health = 100;



    cout << "\n\n\tThe Quest begins ........\n\n";
    cout << "The Wild Lizard is here !!!!!!!!!!!\n";
    while (lizard_health >= 0 && p.Health >= 0) {
        cout << "\n\n  *. Do You want to attack it?  (y/n)";
        cin >> attack;

        if (attack == 'y') {

            lizard_health -= 20;

            p.Health -= 15;

            cout << "   Wild Lizard got a 20 Damage...\n";
            cout << "    Wild Lizard's current health is " << lizard_health << endl;
            cout << "  You Got a 15 Damage :" << endl;

            cout << "  Your Current Heath is " << p.Health << endl;

        }
        else if (attack == 'n') {



            cout << "   Wild Lizard's current health is " << lizard_health << endl;
            cout << "  You got a damage of 25" << endl;
            p.Health -= 25;
            cout << "  Your Current Heath is " << p.Health << endl;
        }


    }
    if (lizard_health <= 0 && p.Health > 0) {
        p.Experience += 400;
        cout << "\n**************CONGRATULATIONS!!!!!!!!!!*****************  \n " << "    You're Experience points are increased and Now are : " << p.Experience;
        cout << "\n       You Have Defeated The Wild Lizard .   ";
    }
    else {

        cout << "\n         Game Over .... You Lost ...\n";
        cout << "        You're Experience Points are : " << p.Experience;
    }
}
void Rocky_Land(Players& p) {
    int select;
    char attack;
    int Dino_health = 100;
    p.Health = 100;



    cout << "\n\n\tThe Quest begins ........\n\n";
    cout << "The Mysterious Dinosaur is here !!!!!!!!!!!\n";
    while (Dino_health >= 0 && p.Health >= 0) {
        cout << "\n\n  *. Do You want to attack it?  (y/n)";
        cin >> attack;

        if (attack == 'y') {

            Dino_health -= 50;

            p.Health -= 15;

            cout << "   Mysterious Dinosaur got a 50 Damage...\n";
            cout << "    Mysterious Dinosaur's current health is " << Dino_health << endl;
            cout << "  You Got a 15 Damage :" << endl;

            cout << "  Your Current Heath is " << p.Health << endl;

        }
        else if (attack == 'n') {



            cout << "   Mysterious Dinosaur's current health is " << Dino_health << endl;
            cout << "  You got a damage of 25" << endl;
            p.Health -= 25;
            cout << "  Your Current Heath is " << p.Health << endl;
        }


    }
    if (Dino_health <= 0 && p.Health > 0) {
        p.Experience += 400;
        cout << "\n**************CONGRATULATIONS!!!!!!!!!!*****************  \n " << "    You're Experience points are increased and Now are : " << p.Experience;
        cout << "\n       You Have Defeated The Mysterious Dinosaur .   ";
    }
    else {

        cout << "\n         Game Over .... You Lost ...\n";
        cout << "        You're Experience Points are : " << p.Experience;
    }

}
void Rocky_LandMedium(Players& p) {
    int select;
    char attack;
    int Dino_health = 100;
    p.Health = 100;



    cout << "\n\n\tThe Quest begins ........\n\n";
    cout << "The Mysterious Dinosaur is here !!!!!!!!!!!\n";
    while (Dino_health >= 0 && p.Health >= 0) {
        cout << "\n\n  *. Do You want to attack it?  (y/n)";
        cin >> attack;

        if (attack == 'y') {

            Dino_health -= 25;

            p.Health -= 15;

            cout << "   Mysterious Dinosaur got a 25 Damage...\n";
            cout << "    Mysterious Dinosaur's current health is " << Dino_health << endl;
            cout << "  You Got a 15 Damage :" << endl;

            cout << "  Your Current Heath is " << p.Health << endl;

        }
        else if (attack == 'n') {



            cout << "   Mysterious Dinosaur's current health is " << Dino_health << endl;
            cout << "  You got a damage of 25" << endl;
            p.Health -= 25;
            cout << "  Your Current Heath is " << p.Health << endl;
        }


    }
    if (Dino_health <= 0 && p.Health > 0) {
        p.Experience += 400;
        cout << "\n**************CONGRATULATIONS!!!!!!!!!!*****************  \n " << "    You're Experience points are increased and Now are : " << p.Experience;
        cout << "\n       You Have Defeated The Mysterious Dinosaur .   ";
    }
    else {

        cout << "\n         Game Over .... You Lost ...\n";
        cout << "        You're Experience Points are : " << p.Experience;
    }

}
void  Rocky_LandHard(Players& p) {
    int select;
    char attack;
    int Dino_health = 100;
    p.Health = 100;



    cout << "\n\n\tThe Quest begins ........\n\n";
    cout << "The Mysterious Dinosaur is here !!!!!!!!!!!\n";
    while (Dino_health >= 0 && p.Health >= 0) {
        cout << "\n\n  *. Do You want to attack it?  (y/n)";
        cin >> attack;

        if (attack == 'y') {

            Dino_health -= 20;

            p.Health -= 15;

            cout << "   Mysterious Dinosaur got a 20 Damage...\n";
            cout << "    Mysterious Dinosaur's current health is " << Dino_health << endl;
            cout << "  You Got a 15 Damage :" << endl;

            cout << "  Your Current Heath is " << p.Health << endl;

        }
        else if (attack == 'n') {



            cout << "   Mysterious Dinosaur's current health is " << Dino_health << endl;
            cout << "  You got a damage of 25" << endl;
            p.Health -= 25;
            cout << "  Your Current Heath is " << p.Health << endl;
        }


    }
    if (Dino_health <= 0 && p.Health > 0) {
        p.Experience += 400;
        cout << "\n**************CONGRATULATIONS!!!!!!!!!!*****************  \n " << "    You're Experience points are increased and Now are : " << p.Experience;
        cout << "\n       You Have Defeated The Mysterious Dinosaur .   ";
    }
    else {

        cout << "\n         Game Over .... You Lost ...\n";
        cout << "        You're Experience Points are : " << p.Experience;
    }
}

void Inventory(string items[]) {
    cout << "\tInventory Is Displayed Below :\n\n";
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ": " << items[i]<<endl;
    }
}
int main() {
    int choice, select;
    int Player_stats;
    string items[5] = { "Bandages","Shield","Energy Booster","Sword","Fire Bomb" };
     while (true) {
        cout << "\n\n\t\t\t\t\tWelcome to the Echoes of Eldoria: The Elemental Trials\t\t\t\n\n";
        cout << "\t\t\t\tHere's The Menu:\n";
        cout << "1. Show Players Status\n";
        cout << "2. Go To Store\n";
        cout << "3. Start the Quest\n";
        cout << "4. Exit\n";
        
        cout << "Enter your choice: ";
        cin >> choice;

        Players player;

        switch (choice) {
        case 1:
            player.Input();
            player.ShowInformation();
            break;
        case 2:
            Inventory(items);
            break;
        case 3:
            Game(player);
             break;
            

        case 4:
            cout << "Exiting the game. Goodbye!\n";
            return 0;

        default:
            cout << "Invalid choice. Please select a valid option.\n";
            break;
        }
    }

    return 0;
}
