#include "FGameLogicBlueprintActionDelegateBinding.hpp"
#include "UDynamicBlueprintBinding.hpp"
#include "UGameLogicFloatResultDelegateBinding.hpp"
UGameLogicFloatResultDelegateBinding* UGameLogicFloatResultDelegateBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicFloatResultDelegateBinding");
    return (UGameLogicFloatResultDelegateBinding*)res;
}
