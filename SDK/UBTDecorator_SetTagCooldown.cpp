#include "FGameplayTag.hpp"
#include "UBTDecorator.hpp"
#include "UBTDecorator_SetTagCooldown.hpp"
UBTDecorator_SetTagCooldown* UBTDecorator_SetTagCooldown::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTDecorator_SetTagCooldown");
    return (UBTDecorator_SetTagCooldown*)res;
}
