#include "UFunction.hpp"
#include "UGameLogicExpression.hpp"
#include "UGameLogicSentence.hpp"
UGameLogicExpression* UGameLogicExpression::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicExpression");
    return (UGameLogicExpression*)res;
}
void UGameLogicExpression::_MemberValueChanged(bool NewResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicExpression._MemberValueChanged"));
    struct Params__MemberValueChanged {
        bool NewResult; // 0x0
    }; // Size: 0x1
    Params__MemberValueChanged params{};
    params.NewResult = (bool)NewResult;
    ProcessEvent(func, &params);
}
