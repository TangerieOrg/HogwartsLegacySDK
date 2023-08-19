#include "EOrientation.hpp"
#include "FAkPropertyToControl.hpp"
#include "FAkWwiseItemToControl.hpp"
#include "FGuid.hpp"
#include "FLinearColor.hpp"
#include "FSliderStyle.hpp"
#include "UAkSlider.hpp"
#include "UFunction.hpp"
#include "UWidget.hpp"
UAkSlider* UAkSlider::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkSlider");
    return (UAkSlider*)res;
}
void UAkSlider::SetValue(float InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkSlider.SetValue"));
    struct Params_SetValue {
        float InValue; // 0x0
    }; // Size: 0x4
    Params_SetValue params{};
    params.InValue = (float)InValue;
    ProcessEvent(func, &params);
}
void UAkSlider::SetIndentHandle(bool InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkSlider.SetIndentHandle"));
    struct Params_SetIndentHandle {
        bool InValue; // 0x0
    }; // Size: 0x1
    Params_SetIndentHandle params{};
    params.InValue = (bool)InValue;
    ProcessEvent(func, &params);
}
void UAkSlider::SetSliderHandleColor(FLinearColor InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkSlider.SetSliderHandleColor"));
    struct Params_SetSliderHandleColor {
        FLinearColor InValue; // 0x0
    }; // Size: 0x10
    Params_SetSliderHandleColor params{};
    params.InValue = (FLinearColor)InValue;
    ProcessEvent(func, &params);
}
void UAkSlider::SetStepSize(float InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkSlider.SetStepSize"));
    struct Params_SetStepSize {
        float InValue; // 0x0
    }; // Size: 0x4
    Params_SetStepSize params{};
    params.InValue = (float)InValue;
    ProcessEvent(func, &params);
}
void UAkSlider::SetSliderBarColor(FLinearColor InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkSlider.SetSliderBarColor"));
    struct Params_SetSliderBarColor {
        FLinearColor InValue; // 0x0
    }; // Size: 0x10
    Params_SetSliderBarColor params{};
    params.InValue = (FLinearColor)InValue;
    ProcessEvent(func, &params);
}
void UAkSlider::SetLocked(bool InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkSlider.SetLocked"));
    struct Params_SetLocked {
        bool InValue; // 0x0
    }; // Size: 0x1
    Params_SetLocked params{};
    params.InValue = (bool)InValue;
    ProcessEvent(func, &params);
}
void UAkSlider::SetAkSliderItemProperty(FString ItemProperty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkSlider.SetAkSliderItemProperty"));
    struct Params_SetAkSliderItemProperty {
        FString ItemProperty; // 0x0
    }; // Size: 0x10
    Params_SetAkSliderItemProperty params{};
    params.ItemProperty = (FString)ItemProperty;
    ProcessEvent(func, &params);
}
void UAkSlider::SetAkSliderItemId(FGuid& ItemId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkSlider.SetAkSliderItemId"));
    struct Params_SetAkSliderItemId {
        FGuid ItemId; // 0x0
    }; // Size: 0x10
    Params_SetAkSliderItemId params{};
    params.ItemId = (FGuid)ItemId;
    ProcessEvent(func, &params);
    ItemId = params.ItemId;
}
float UAkSlider::GetValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkSlider.GetValue"));
    struct Params_GetValue {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetValue params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FString UAkSlider::GetAkSliderItemProperty() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkSlider.GetAkSliderItemProperty"));
    struct Params_GetAkSliderItemProperty {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAkSliderItemProperty params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FGuid UAkSlider::GetAkSliderItemId() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkSlider.GetAkSliderItemId"));
    struct Params_GetAkSliderItemId {
        FGuid ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAkSliderItemId params{};
    ProcessEvent(func, &params);
    return (FGuid)params.ReturnValue;
}
