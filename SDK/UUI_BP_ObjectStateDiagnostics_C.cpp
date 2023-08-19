#include "ECheckBoxState.hpp"
#include "UCheckBox.hpp"
#include "UFunction.hpp"
#include "UObjectStateInfo.hpp"
#include "UProgressBar.hpp"
#include "UUI_BP_ObjectStateDiagnostics_C.hpp"
#include "UUserWidget.hpp"
ECheckBoxState UUI_BP_ObjectStateDiagnostics_C::GetFrozenCheckedState(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsFrozen_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_ObjectStateDiagnostics.UI_BP_ObjectStateDiagnostics_C.GetFrozenCheckedState"));
    struct Params_GetFrozenCheckedState {
        ECheckBoxState ReturnValue; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x1
        bool CallFunc_IsFrozen_ReturnValue; // 0x2
    }; // Size: 0x3
    Params_GetFrozenCheckedState params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsFrozen_ReturnValue = (bool)CallFunc_IsFrozen_ReturnValue;
    ProcessEvent(func, &params);
    return (ECheckBoxState)params.ReturnValue;
}
UUI_BP_ObjectStateDiagnostics_C* UUI_BP_ObjectStateDiagnostics_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/UI_BP_ObjectStateDiagnostics.UI_BP_ObjectStateDiagnostics_C");
    return (UUI_BP_ObjectStateDiagnostics_C*)res;
}
ECheckBoxState UUI_BP_ObjectStateDiagnostics_C::GetOnFireCheckedState(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsOnFire_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_ObjectStateDiagnostics.UI_BP_ObjectStateDiagnostics_C.GetOnFireCheckedState"));
    struct Params_GetOnFireCheckedState {
        ECheckBoxState ReturnValue; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x1
        bool CallFunc_IsOnFire_ReturnValue; // 0x2
    }; // Size: 0x3
    Params_GetOnFireCheckedState params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsOnFire_ReturnValue = (bool)CallFunc_IsOnFire_ReturnValue;
    ProcessEvent(func, &params);
    return (ECheckBoxState)params.ReturnValue;
}
float UUI_BP_ObjectStateDiagnostics_C::GetCharredPercent(bool CallFunc_IsValid_ReturnValue, float CallFunc_GetPercentCharred_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_ObjectStateDiagnostics.UI_BP_ObjectStateDiagnostics_C.GetCharredPercent"));
    struct Params_GetCharredPercent {
        float ReturnValue; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x4
        char pad_5[0x3];
        float CallFunc_GetPercentCharred_ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetCharredPercent params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetPercentCharred_ReturnValue = (float)CallFunc_GetPercentCharred_ReturnValue;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UUI_BP_ObjectStateDiagnostics_C::GetWetnessPercent(bool CallFunc_IsValid_ReturnValue, float CallFunc_GetWetness_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_ObjectStateDiagnostics.UI_BP_ObjectStateDiagnostics_C.GetWetnessPercent"));
    struct Params_GetWetnessPercent {
        float ReturnValue; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x4
        char pad_5[0x3];
        float CallFunc_GetWetness_ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetWetnessPercent params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetWetness_ReturnValue = (float)CallFunc_GetWetness_ReturnValue;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UUI_BP_ObjectStateDiagnostics_C::GetHealthPercent(bool CallFunc_IsValid_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetHealth_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_ObjectStateDiagnostics.UI_BP_ObjectStateDiagnostics_C.GetHealthPercent"));
    struct Params_GetHealthPercent {
        float ReturnValue; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x4
        char pad_5[0x3];
        float CallFunc_GetMaxHealth_ReturnValue; // 0x8
        float CallFunc_GetHealth_ReturnValue; // 0xc
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetHealthPercent params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetMaxHealth_ReturnValue = (float)CallFunc_GetMaxHealth_ReturnValue;
    params.CallFunc_GetHealth_ReturnValue = (float)CallFunc_GetHealth_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
