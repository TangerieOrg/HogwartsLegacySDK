#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMapIconWidget.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUserWidget.hpp"
UMapIconWidget* UMapIconWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapIconWidget");
    return (UMapIconWidget*)res;
}
void UMapIconWidget::PlayFanfare_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconWidget.PlayFanfare_Event"));
    struct Params_PlayFanfare_Event {
    }; // Size: 0x0
    Params_PlayFanfare_Event params{};
    ProcessEvent(func, &params);
}
float UMapIconWidget::GetPitchFactor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconWidget.GetPitchFactor"));
    struct Params_GetPitchFactor {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPitchFactor params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UMapIconWidget::GetZoomFactor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconWidget.GetZoomFactor"));
    struct Params_GetZoomFactor {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetZoomFactor params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UMapIconWidget::GetDistanceFromGround() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIconWidget.GetDistanceFromGround"));
    struct Params_GetDistanceFromGround {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDistanceFromGround params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
