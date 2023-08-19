#include "FBitfield256.hpp"
#include "UFunction.hpp"
#include "UGameLogicPropositional.hpp"
#include "UGameLogicPropositional_Bitfield.hpp"
UGameLogicPropositional_Bitfield* UGameLogicPropositional_Bitfield::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicPropositional_Bitfield");
    return (UGameLogicPropositional_Bitfield*)res;
}
void UGameLogicPropositional_Bitfield::_MemberValueChanged(FBitfield256 NewResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicPropositional_Bitfield._MemberValueChanged"));
    struct Params__MemberValueChanged {
        FBitfield256 NewResult; // 0x0
    }; // Size: 0x20
    Params__MemberValueChanged params{};
    params.NewResult = (FBitfield256)NewResult;
    ProcessEvent(func, &params);
}
