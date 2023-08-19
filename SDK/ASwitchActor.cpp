#include "AActor.hpp"
#include "ASwitchActor.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
void ASwitchActor::SelectOption(int32_t OptionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.SwitchActor.SelectOption"));
    struct Params_SelectOption {
        int32_t OptionIndex; // 0x0
    }; // Size: 0x4
    Params_SelectOption params{};
    params.OptionIndex = (int32_t)OptionIndex;
    ProcessEvent(func, &params);
}
ASwitchActor* ASwitchActor::StaticClass() {
    static auto res = find_uobject("Class /Script/VariantManagerContent.SwitchActor");
    return (ASwitchActor*)res;
}
int32_t ASwitchActor::GetSelectedOption() {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.SwitchActor.GetSelectedOption"));
    struct Params_GetSelectedOption {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSelectedOption params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
TArray<AActor*> ASwitchActor::GetOptions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.SwitchActor.GetOptions"));
    struct Params_GetOptions {
        TArray<AActor*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetOptions params{};
    ProcessEvent(func, &params);
    return (TArray<AActor*>)params.ReturnValue;
}
