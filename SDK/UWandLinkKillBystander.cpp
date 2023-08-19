#include "UObject.hpp"
#include "UWandLinkKillBystander.hpp"
UWandLinkKillBystander* UWandLinkKillBystander::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WandLinkKillBystander");
    return (UWandLinkKillBystander*)res;
}
