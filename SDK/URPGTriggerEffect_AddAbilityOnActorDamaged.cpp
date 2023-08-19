#include "URPGTriggerEffect_ActorDamaged.hpp"
#include "URPGTriggerEffect_AddAbilityOnActorDamaged.hpp"
URPGTriggerEffect_AddAbilityOnActorDamaged* URPGTriggerEffect_AddAbilityOnActorDamaged::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_AddAbilityOnActorDamaged");
    return (URPGTriggerEffect_AddAbilityOnActorDamaged*)res;
}
