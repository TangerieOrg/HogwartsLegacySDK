#include "FGameLogicBlueprintActionDelegateBinding.hpp"
#include "UDynamicBlueprintBinding.hpp"
#include "UGameLogicInt32ResultDelegateBinding.hpp"
UGameLogicInt32ResultDelegateBinding* UGameLogicInt32ResultDelegateBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicInt32ResultDelegateBinding");
    return (UGameLogicInt32ResultDelegateBinding*)res;
}
