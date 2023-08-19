#include "ECheckBoxState.hpp"
#include "EHorizontalAlignment.hpp"
#include "FAkBoolPropertyToControl.hpp"
#include "FAkWwiseItemToControl.hpp"
#include "FCheckBoxStyle.hpp"
#include "FGuid.hpp"
#include "UAkCheckBox.hpp"
#include "UContentWidget.hpp"
#include "UFunction.hpp"
UAkCheckBox* UAkCheckBox::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkCheckBox");
    return (UAkCheckBox*)res;
}
void UAkCheckBox::SetIsChecked(bool InIsChecked) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkCheckBox.SetIsChecked"));
    struct Params_SetIsChecked {
        bool InIsChecked; // 0x0
    }; // Size: 0x1
    Params_SetIsChecked params{};
    params.InIsChecked = (bool)InIsChecked;
    ProcessEvent(func, &params);
}
ECheckBoxState UAkCheckBox::GetCheckedState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkCheckBox.GetCheckedState"));
    struct Params_GetCheckedState {
        ECheckBoxState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCheckedState params{};
    ProcessEvent(func, &params);
    return (ECheckBoxState)params.ReturnValue;
}
void UAkCheckBox::SetCheckedState(ECheckBoxState InCheckedState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkCheckBox.SetCheckedState"));
    struct Params_SetCheckedState {
        ECheckBoxState InCheckedState; // 0x0
    }; // Size: 0x1
    Params_SetCheckedState params{};
    params.InCheckedState = (ECheckBoxState)InCheckedState;
    ProcessEvent(func, &params);
}
bool UAkCheckBox::IsChecked() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkCheckBox.IsChecked"));
    struct Params_IsChecked {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsChecked params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAkCheckBox::SetAkItemId(FGuid& ItemId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkCheckBox.SetAkItemId"));
    struct Params_SetAkItemId {
        FGuid ItemId; // 0x0
    }; // Size: 0x10
    Params_SetAkItemId params{};
    params.ItemId = (FGuid)ItemId;
    ProcessEvent(func, &params);
    ItemId = params.ItemId;
}
void UAkCheckBox::SetAkBoolProperty(FString ItemProperty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkCheckBox.SetAkBoolProperty"));
    struct Params_SetAkBoolProperty {
        FString ItemProperty; // 0x0
    }; // Size: 0x10
    Params_SetAkBoolProperty params{};
    params.ItemProperty = (FString)ItemProperty;
    ProcessEvent(func, &params);
}
bool UAkCheckBox::IsPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkCheckBox.IsPressed"));
    struct Params_IsPressed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPressed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UAkCheckBox::GetAkProperty() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkCheckBox.GetAkProperty"));
    struct Params_GetAkProperty {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAkProperty params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FGuid UAkCheckBox::GetAkItemId() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkCheckBox.GetAkItemId"));
    struct Params_GetAkItemId {
        FGuid ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAkItemId params{};
    ProcessEvent(func, &params);
    return (FGuid)params.ReturnValue;
}
