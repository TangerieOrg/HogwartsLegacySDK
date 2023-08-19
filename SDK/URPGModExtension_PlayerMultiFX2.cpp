#include "FMultiFX2Handle.hpp"
#include "UModExtension.hpp"
#include "UMultiFX2_Base.hpp"
#include "URPGModExtension_PlayerMultiFX2.hpp"
URPGModExtension_PlayerMultiFX2* URPGModExtension_PlayerMultiFX2::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGModExtension_PlayerMultiFX2");
    return (URPGModExtension_PlayerMultiFX2*)res;
}
