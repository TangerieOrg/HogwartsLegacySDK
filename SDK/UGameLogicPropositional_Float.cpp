#include "UFunction.hpp"
#include "UGameLogicPropositional.hpp"
#include "UGameLogicPropositional_Float.hpp"
UGameLogicPropositional_Float* UGameLogicPropositional_Float::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicPropositional_Float");
    return (UGameLogicPropositional_Float*)res;
}
void UGameLogicPropositional_Float::_MemberValueChanged(float NewResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicPropositional_Float._MemberValueChanged"));
    struct Params__MemberValueChanged {
        float NewResult; // 0x0
    }; // Size: 0x4
    Params__MemberValueChanged params{};
    params.NewResult = (float)NewResult;
    ProcessEvent(func, &params);
}
