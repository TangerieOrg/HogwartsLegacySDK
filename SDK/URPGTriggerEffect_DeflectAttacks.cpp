#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_DeflectAttacks.hpp"
URPGTriggerEffect_DeflectAttacks* URPGTriggerEffect_DeflectAttacks::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_DeflectAttacks");
    return (URPGTriggerEffect_DeflectAttacks*)res;
}
