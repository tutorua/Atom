#ifndef Robot_h
#define Robot_h

#include <iostream>
#include <functional>

struct Robot
{
    struct Search
    {
        virtual void apply(Robot& r) = 0;
        virtual ~Search() = default;
    };

    struct Attack
    {
        virtual void apply(Robot& r) = 0;
        virtual ~Attack() = default;
    };

    struct Defend
    {
        virtual void apply(Robot& r) = 0;
        virtual ~Defend() = default;
    };

    Robot(Search* search, Attack* attack, Defend* defend) :
    m_search(search), m_attack(attack), m_defend(defend) {}
    void search() { m_search->apply(*this); }
    void attack() { m_attack->apply(*this); }
    void defend() { m_defend->apply(*this); }

private:
    Search * m_search;
    Attack * m_attack;
    Defend * m_defend;
};

struct Linear : Robot::Search
{
    void apply(Robot& r) { std::cout << "Linear\n"; }
};

struct Spiral : Robot::Search
{
    void apply(Robot& r) { std::cout << "Spiral\n"; }
};

struct Pinch : Robot::Search
{
    void apply(Robot& r) { std::cout << "Pinch\n"; }
};

struct Punch : Robot::Search
{
    void apply(Robot& r) { std::cout << "Punch\n"; }
};

struct Run : Robot::Search
{
    void apply(Robot& r) { std::cout << "Run\n"; }
};

#endif
