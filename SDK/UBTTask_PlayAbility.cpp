#include "UBTTask_PlayAbility.hpp"
#include "UBTTask_PlayAbilityBase.hpp"
#include "UClass.hpp"
UBTTask_PlayAbility* UBTTask_PlayAbility::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.BTTask_PlayAbility");
    return (UBTTask_PlayAbility*)res;
}
