#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_CastCompanionProtego.hpp"
URPGTriggerEffect_CastCompanionProtego* URPGTriggerEffect_CastCompanionProtego::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_CastCompanionProtego");
    return (URPGTriggerEffect_CastCompanionProtego*)res;
}
