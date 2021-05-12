/**
 * Hello World Example
 * Created With Genesis-Code extension for Visual Studio Code
 * Use "Genesis Code: Compile" command to compile this program.
 **/
#include <genesis.h>
#include "test.h"

int main()
{
    // The KLog is only here so that the compiler will actually include the resources onto the rom.
    // Otherwise, just a very simple generic genesis hello world.
    KLog_U1("A: ", *(u16*)&test0);

    VDP_drawText("Hello Everdrive!!", 10,13);
    while(1)
    {
        
        SYS_doVBlankProcess();
    }
    return (0);
}
