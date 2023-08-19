#include "UFunction.hpp"
#include "UGameLogicPropositional.hpp"
#include "UGameLogicPropositional_Enum.hpp"
UGameLogicPropositional_Enum* UGameLogicPropositional_Enum::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicPropositional_Enum");
    return (UGameLogicPropositional_Enum*)res;
}
void UGameLogicPropositional_Enum::_MemberValueChanged(uint8_t NewResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicPropositional_Enum._MemberValueChanged"));
    struct Params__MemberValueChanged {
        uint8_t NewResult; // 0x0
    }; // Size: 0x1
    Params__MemberValueChanged params{};
    params.NewResult = (uint8_t)NewResult;
    ProcessEvent(func, &params);
}
