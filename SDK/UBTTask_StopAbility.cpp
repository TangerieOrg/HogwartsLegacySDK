#include "EAblAbilityTaskResult.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_StopAbility.hpp"
#include "UClass.hpp"
UBTTask_StopAbility* UBTTask_StopAbility::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.BTTask_StopAbility");
    return (UBTTask_StopAbility*)res;
}
