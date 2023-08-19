#include "FBlackboardKeySelector.hpp"
#include "UBTDecorator.hpp"
#include "UBTDecorator_HasActivePassiveAbility.hpp"
#include "UClass.hpp"
UBTDecorator_HasActivePassiveAbility* UBTDecorator_HasActivePassiveAbility::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.BTDecorator_HasActivePassiveAbility");
    return (UBTDecorator_HasActivePassiveAbility*)res;
}
