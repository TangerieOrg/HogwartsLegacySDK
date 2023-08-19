#include "UConsole.hpp"
#include "ULocalPlayer.hpp"
#include "UObject.hpp"
#include "UTexture2D.hpp"
UConsole* UConsole::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Console");
    return (UConsole*)res;
}
