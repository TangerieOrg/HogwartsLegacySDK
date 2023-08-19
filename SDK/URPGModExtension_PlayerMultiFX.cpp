#include "FMultiFXPlus.hpp"
#include "FMultiFXPlusHandles.hpp"
#include "UModExtension.hpp"
#include "URPGModExtension_PlayerMultiFX.hpp"
URPGModExtension_PlayerMultiFX* URPGModExtension_PlayerMultiFX::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGModExtension_PlayerMultiFX");
    return (URPGModExtension_PlayerMultiFX*)res;
}
