#ifndef MENU_H
#define MENU_H

#include <windows.h>

class menu
{
    public:

        void menu_adh(int*,int*,int*,int*);
        void methode(int*);
        void select(char*);
        void modifier(int*);

        void getColor(int, int);

        menu();
        virtual ~menu();
    protected:
    private:
};

#endif // MENU_H
