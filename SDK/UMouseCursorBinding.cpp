#include "EMouseCursor\Type.hpp"
#include "UFunction.hpp"
#include "UMouseCursorBinding.hpp"
#include "UPropertyBinding.hpp"
UMouseCursorBinding* UMouseCursorBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.MouseCursorBinding");
    return (UMouseCursorBinding*)res;
}
EMouseCursor::Type UMouseCursorBinding::GetValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.MouseCursorBinding.GetValue"));
    struct Params_GetValue {
        EMouseCursor::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetValue params{};
    ProcessEvent(func, &params);
    return (EMouseCursor::Type)params.ReturnValue;
}
