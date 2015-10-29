/*--------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------*/
//  Source file originally created by PegWindowBuilder
//  
//  
//  Class Name: PEGSubMenu
//  
//  Notes:
/*--------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------*/

#include "peg.hpp"
#include "submenu1.hpp"


/*--------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------*/
//  Constructor
//  Create top level object and add all children
/*--------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------*/
PEGSubMenu::PEGSubMenu(SIGNED iLeft, SIGNED iTop) : 
    PegWindow()
{

    mReal.Set(iLeft, iTop, iLeft + 399, iTop + 499);
    InitClient();

    /* WB End Construction */
}


/*--------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------*/
SIGNED PEGSubMenu::Message(const PegMessage &Mesg)
{
    switch (Mesg.wType)
    {
    default:
        return PegWindow::Message(Mesg);
    }
    return 0;
}

