#include "ETutorialPosition.hpp"
#include "UFunction.hpp"
#include "UHint.hpp"
#include "UObject.hpp"
UHint* UHint::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Hint");
    return (UHint*)res;
}
void UHint::GameLogicExpressionChanged(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Hint.GameLogicExpressionChanged"));
    struct Params_GameLogicExpressionChanged {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_GameLogicExpressionChanged params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void UHint::Blueprint_QueueForDisplay(float InInitialWaitTime, float InOnScreenTime, float InOffScreenTime, ETutorialPosition InHintPosition) {}
