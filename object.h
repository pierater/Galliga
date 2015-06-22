//////////////////////////
// Filename: object.h
// Author: Martin Almaraz
// Date: Sun Jun 21 16:34:18 PDT 2015
//////////////////////////

#ifndef OBJECT_H
#define OBJECT_H

using namespace std;

class object
{
    /*
    private:
        int xCor;
        int yCor;
        int health;
    */
    public:
        int xCor;
        int yCor;
        int health;
        int getX();
        int getY();
        void setX(int x);
        void setY(int y);
        void shiftRight();
        void shiftLeft();
        void shiftUp();
        void shiftDown();
        void decreaseHealth();
        void increaseHealth();
        void setHealth(int health);
        int getHealth();
        friend bool operator==(const object& L, const object& R);
        object();
};

// bool operator==(const object& L, const object& R);

#endif
