#include "UBTTaskNode.hpp"
#include "UBTTask_PlayAbilityBase.hpp"
UBTTask_PlayAbilityBase* UBTTask_PlayAbilityBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.BTTask_PlayAbilityBase");
    return (UBTTask_PlayAbilityBase*)res;
}
