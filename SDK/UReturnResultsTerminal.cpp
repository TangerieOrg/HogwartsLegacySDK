#include "UFieldNodeBase.hpp"
#include "UFunction.hpp"
#include "UReturnResultsTerminal.hpp"
UReturnResultsTerminal* UReturnResultsTerminal::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.ReturnResultsTerminal");
    return (UReturnResultsTerminal*)res;
}
UReturnResultsTerminal* UReturnResultsTerminal::SetReturnResultsTerminal() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal"));
    struct Params_SetReturnResultsTerminal {
        UReturnResultsTerminal* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_SetReturnResultsTerminal params{};
    ProcessEvent(func, &params);
    return (UReturnResultsTerminal*)params.ReturnValue;
}
