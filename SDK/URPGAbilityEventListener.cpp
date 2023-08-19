#include "AActor.hpp"
#include "FGuid.hpp"
#include "UGameplayModComponent.hpp"
#include "UGameplayPropertyMod.hpp"
#include "URPGAbilityComponent.hpp"
#include "URPGAbilityEventListener.hpp"
#include "URPGAbilityEventListener_Base.hpp"
#include "URPGTriggerEffect_Base.hpp"
URPGAbilityEventListener* URPGAbilityEventListener::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityEventListener");
    return (URPGAbilityEventListener*)res;
}
