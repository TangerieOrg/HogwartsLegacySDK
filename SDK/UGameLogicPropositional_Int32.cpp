#include "UFunction.hpp"
#include "UGameLogicPropositional.hpp"
#include "UGameLogicPropositional_Int32.hpp"
UGameLogicPropositional_Int32* UGameLogicPropositional_Int32::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicPropositional_Int32");
    return (UGameLogicPropositional_Int32*)res;
}
void UGameLogicPropositional_Int32::_MemberValueChanged(int32_t NewResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicPropositional_Int32._MemberValueChanged"));
    struct Params__MemberValueChanged {
        int32_t NewResult; // 0x0
    }; // Size: 0x4
    Params__MemberValueChanged params{};
    params.NewResult = (int32_t)NewResult;
    ProcessEvent(func, &params);
}
