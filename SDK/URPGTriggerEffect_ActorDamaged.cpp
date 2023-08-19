#include "AActor.hpp"
#include "URPGTriggerEffect_ActorDamaged.hpp"
#include "URPGTriggerEffect_Base.hpp"
URPGTriggerEffect_ActorDamaged* URPGTriggerEffect_ActorDamaged::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_ActorDamaged");
    return (URPGTriggerEffect_ActorDamaged*)res;
}
