#include "FBlackboardKeySelector.hpp"
#include "UBTDecorator.hpp"
#include "UBTDecorator_IsAbilityOnCooldown.hpp"
#include "UClass.hpp"
UBTDecorator_IsAbilityOnCooldown* UBTDecorator_IsAbilityOnCooldown::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.BTDecorator_IsAbilityOnCooldown");
    return (UBTDecorator_IsAbilityOnCooldown*)res;
}
