#include <iostream>
#include "PersiStack.h"

int main() {
    PersiStack<int> pst;

    pst.Push(0, 2);
    pst.Push(1, 4);

    pst.Print(2);

    pst.Push(2, 8);
    pst.Push(3, 16);

    pst.Print(4);

    pst.Push(3, 64);
    pst.Push(5, 512);

    pst.Print(6);

    pst.Pop(3);

    pst.Print(7);

    pst.Push(7, 6);

    pst.Print(8);

}