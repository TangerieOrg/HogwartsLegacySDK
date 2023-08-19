#include "UFunction.hpp"
#include "UGameLogicPropositional.hpp"
#include "UGameLogicPropositional_String.hpp"
UGameLogicPropositional_String* UGameLogicPropositional_String::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicPropositional_String");
    return (UGameLogicPropositional_String*)res;
}
void UGameLogicPropositional_String::_MemberValueChanged(FString NewResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicPropositional_String._MemberValueChanged"));
    struct Params__MemberValueChanged {
        FString NewResult; // 0x0
    }; // Size: 0x10
    Params__MemberValueChanged params{};
    params.NewResult = (FString)NewResult;
    ProcessEvent(func, &params);
}
