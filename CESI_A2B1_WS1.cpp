#include <iostream>
#include "Voiture.hpp"
#include "CLCalcul.hpp"
#include "Fraction.hpp"
#include "Character.hpp"
#include "Creature.hpp"
#include "Hero.hpp"



int main()
{
    // exercise 1:
    std::cout << "Exo 1\n";
    {
        Voiture voiture_static;
        voiture_static.demarrer();
        Voiture* pvoiture_dynamic = new Voiture;
        pvoiture_dynamic->demarrer();
        delete pvoiture_dynamic;
    }

    // exercise 2:
    std::cout << "Exo 2\n";
    {
        CLCalcul o1;
        CLCalcul o2(2);
        
        CLCalcul* p1 = new CLCalcul;
        CLCalcul* p2 = new CLCalcul(3);

        o1.carre(); o2.carre();  
        std::cout << o1.getN() << "\n" << o2.getN() << "\n";

        p1->carre(); p2->carre();  
        std::cout << p1->getN() << "\n" << p2->getN() << "\n";

        delete p1;
        delete p2;
    }

    // exercise 3
    std::cout << "Exo 3\n";
    {
        Fraction f1(2, 3);
        Fraction f2(3, 4);

        Fraction res = f1.add(f2);
        res.display();  // 17/12

        res = f1.subtract(f2);
        res.display();  // -1/12

        res = f1.multiply(f2);
        res.display();  // 6/12

        res = f1.divide(f2);
        res.display();  // 8/9

        res = f1.negate();
        res.display();

        res = f1.invert();
        res.display();
    }

    // exercise 4
    {
        Hero* pheros = new Hero(1);
        Creature* pcreature = new Creature(1);

        pheros->attack(pcreature);
        pcreature->display();

        pcreature->attack(pheros);
        pheros->display();

        delete pcreature;
        delete pheros;
    }

}

