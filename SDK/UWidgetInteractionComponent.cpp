#include "ECollisionChannel.hpp"
#include "EWidgetInteractionSource.hpp"
#include "FHitResult.hpp"
#include "FKey.hpp"
#include "FLinearColor.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "UWidget.hpp"
#include "UWidgetComponent.hpp"
#include "UWidgetInteractionComponent.hpp"
void UWidgetInteractionComponent::PressPointerKey(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetInteractionComponent.PressPointerKey"));
    struct Params_PressPointerKey {
        FKey Key; // 0x0
    }; // Size: 0x18
    Params_PressPointerKey params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
}
bool UWidgetInteractionComponent::ReleaseKey(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetInteractionComponent.ReleaseKey"));
    struct Params_ReleaseKey {
        FKey Key; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_ReleaseKey params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UWidgetInteractionComponent* UWidgetInteractionComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.WidgetInteractionComponent");
    return (UWidgetInteractionComponent*)res;
}
void UWidgetInteractionComponent::SetFocus(UWidget* FocusWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetInteractionComponent.SetFocus"));
    struct Params_SetFocus {
        UWidget* FocusWidget; // 0x0
    }; // Size: 0x8
    Params_SetFocus params{};
    params.FocusWidget = (UWidget*)FocusWidget;
    ProcessEvent(func, &params);
}
bool UWidgetInteractionComponent::PressAndReleaseKey(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetInteractionComponent.PressAndReleaseKey"));
    struct Params_PressAndReleaseKey {
        FKey Key; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_PressAndReleaseKey params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UWidgetInteractionComponent::SetCustomHitResult(FHitResult& HitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetInteractionComponent.SetCustomHitResult"));
    struct Params_SetCustomHitResult {
        FHitResult HitResult; // 0x0
    }; // Size: 0x88
    Params_SetCustomHitResult params{};
    params.HitResult = (FHitResult)HitResult;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
}
void UWidgetInteractionComponent::ScrollWheel(float ScrollDelta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetInteractionComponent.ScrollWheel"));
    struct Params_ScrollWheel {
        float ScrollDelta; // 0x0
    }; // Size: 0x4
    Params_ScrollWheel params{};
    params.ScrollDelta = (float)ScrollDelta;
    ProcessEvent(func, &params);
}
bool UWidgetInteractionComponent::SendKeyChar(FString Characters, bool bRepeat) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetInteractionComponent.SendKeyChar"));
    struct Params_SendKeyChar {
        FString Characters; // 0x0
        bool bRepeat; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_SendKeyChar params{};
    params.Characters = (FString)Characters;
    params.bRepeat = (bool)bRepeat;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UWidgetInteractionComponent::ReleasePointerKey(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetInteractionComponent.ReleasePointerKey"));
    struct Params_ReleasePointerKey {
        FKey Key; // 0x0
    }; // Size: 0x18
    Params_ReleasePointerKey params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
}
UWidgetComponent* UWidgetInteractionComponent::GetHoveredWidgetComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetInteractionComponent.GetHoveredWidgetComponent"));
    struct Params_GetHoveredWidgetComponent {
        UWidgetComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetHoveredWidgetComponent params{};
    ProcessEvent(func, &params);
    return (UWidgetComponent*)params.ReturnValue;
}
bool UWidgetInteractionComponent::PressKey(FKey Key, bool bRepeat) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetInteractionComponent.PressKey"));
    struct Params_PressKey {
        FKey Key; // 0x0
        bool bRepeat; // 0x18
        bool ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_PressKey params{};
    params.Key = (FKey)Key;
    params.bRepeat = (bool)bRepeat;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UWidgetInteractionComponent::IsOverInteractableWidget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetInteractionComponent.IsOverInteractableWidget"));
    struct Params_IsOverInteractableWidget {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsOverInteractableWidget params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UWidgetInteractionComponent::IsOverHitTestVisibleWidget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget"));
    struct Params_IsOverHitTestVisibleWidget {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsOverHitTestVisibleWidget params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UWidgetInteractionComponent::IsOverFocusableWidget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetInteractionComponent.IsOverFocusableWidget"));
    struct Params_IsOverFocusableWidget {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsOverFocusableWidget params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FHitResult UWidgetInteractionComponent::GetLastHitResult() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetInteractionComponent.GetLastHitResult"));
    struct Params_GetLastHitResult {
        FHitResult ReturnValue; // 0x0
    }; // Size: 0x88
    Params_GetLastHitResult params{};
    ProcessEvent(func, &params);
    return (FHitResult)params.ReturnValue;
}
FVector2D UWidgetInteractionComponent::Get2DHitLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetInteractionComponent.Get2DHitLocation"));
    struct Params_Get2DHitLocation {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get2DHitLocation params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
