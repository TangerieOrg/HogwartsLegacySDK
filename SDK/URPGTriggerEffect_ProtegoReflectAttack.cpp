#include "AActor.hpp"
#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_ProtegoReflectAttack.hpp"
URPGTriggerEffect_ProtegoReflectAttack* URPGTriggerEffect_ProtegoReflectAttack::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_ProtegoReflectAttack");
    return (URPGTriggerEffect_ProtegoReflectAttack*)res;
}
