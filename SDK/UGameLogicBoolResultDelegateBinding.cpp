#include "FGameLogicBlueprintActionDelegateBinding.hpp"
#include "UDynamicBlueprintBinding.hpp"
#include "UGameLogicBoolResultDelegateBinding.hpp"
UGameLogicBoolResultDelegateBinding* UGameLogicBoolResultDelegateBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicBoolResultDelegateBinding");
    return (UGameLogicBoolResultDelegateBinding*)res;
}
