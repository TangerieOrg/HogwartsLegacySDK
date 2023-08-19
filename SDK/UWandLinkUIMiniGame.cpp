#include "UObject.hpp"
#include "UWandLinkUIMiniGame.hpp"
UWandLinkUIMiniGame* UWandLinkUIMiniGame::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WandLinkUIMiniGame");
    return (UWandLinkUIMiniGame*)res;
}
