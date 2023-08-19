#include "AActor.hpp"
#include "URPGAbilityCustomTargetEventListener.hpp"
#include "URPGAbilityEventListener.hpp"
URPGAbilityCustomTargetEventListener* URPGAbilityCustomTargetEventListener::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityCustomTargetEventListener");
    return (URPGAbilityCustomTargetEventListener*)res;
}
