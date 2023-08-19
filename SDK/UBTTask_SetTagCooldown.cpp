#include "FGameplayTag.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_SetTagCooldown.hpp"
UBTTask_SetTagCooldown* UBTTask_SetTagCooldown::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTTask_SetTagCooldown");
    return (UBTTask_SetTagCooldown*)res;
}
