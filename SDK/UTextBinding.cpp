#include "UFunction.hpp"
#include "UPropertyBinding.hpp"
#include "UTextBinding.hpp"
UTextBinding* UTextBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.TextBinding");
    return (UTextBinding*)res;
}
void UTextBinding::GetTextValue() {}
FString UTextBinding::GetStringValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.TextBinding.GetStringValue"));
    struct Params_GetStringValue {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetStringValue params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
