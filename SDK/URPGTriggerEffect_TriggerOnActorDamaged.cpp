#include "URPGTriggerEffect_ActorDamaged.hpp"
#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_TriggerOnActorDamaged.hpp"
URPGTriggerEffect_TriggerOnActorDamaged* URPGTriggerEffect_TriggerOnActorDamaged::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_TriggerOnActorDamaged");
    return (URPGTriggerEffect_TriggerOnActorDamaged*)res;
}
