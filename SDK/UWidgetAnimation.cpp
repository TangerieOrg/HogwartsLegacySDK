#include "FWidgetAnimationBinding.hpp"
#include "UFunction.hpp"
#include "UMovieScene.hpp"
#include "UMovieSceneSequence.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
UWidgetAnimation* UWidgetAnimation::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.WidgetAnimation");
    return (UWidgetAnimation*)res;
}
float UWidgetAnimation::GetStartTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetAnimation.GetStartTime"));
    struct Params_GetStartTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetStartTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UWidgetAnimation::UnbindFromAnimationFinished(UUserWidget* Widget) {}
void UWidgetAnimation::UnbindFromAnimationStarted(UUserWidget* Widget) {}
void UWidgetAnimation::UnbindAllFromAnimationStarted(UUserWidget* Widget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetAnimation.UnbindAllFromAnimationStarted"));
    struct Params_UnbindAllFromAnimationStarted {
        UUserWidget* Widget; // 0x0
    }; // Size: 0x8
    Params_UnbindAllFromAnimationStarted params{};
    params.Widget = (UUserWidget*)Widget;
    ProcessEvent(func, &params);
}
void UWidgetAnimation::BindToAnimationFinished(UUserWidget* Widget) {}
void UWidgetAnimation::UnbindAllFromAnimationFinished(UUserWidget* Widget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetAnimation.UnbindAllFromAnimationFinished"));
    struct Params_UnbindAllFromAnimationFinished {
        UUserWidget* Widget; // 0x0
    }; // Size: 0x8
    Params_UnbindAllFromAnimationFinished params{};
    params.Widget = (UUserWidget*)Widget;
    ProcessEvent(func, &params);
}
float UWidgetAnimation::GetEndTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetAnimation.GetEndTime"));
    struct Params_GetEndTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetEndTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UWidgetAnimation::BindToAnimationStarted(UUserWidget* Widget) {}
