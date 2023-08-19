#include "ESlateVisibility.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UBorder.hpp"
#include "UFunction.hpp"
#include "UHUDCompassIcon.hpp"
#include "UHorizontalBox.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UTexture2D.hpp"
#include "UUI_BP_CompassIcon_C.hpp"
#include "UVerticalBox.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_CompassIcon_C* UUI_BP_CompassIcon_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/HUDCompass/UI_BP_CompassIcon.UI_BP_CompassIcon_C");
    return (UUI_BP_CompassIcon_C*)res;
}
void UUI_BP_CompassIcon_C::SetIconTexture0(UTexture2D* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/HUDCompass/UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetIconTexture"));
    struct Params_SetIconTexture {
        UTexture2D* Texture; // 0x0
    }; // Size: 0x8
    Params_SetIconTexture params{};
    params.Texture = (UTexture2D*)Texture;
    ProcessEvent(func, &params);
}
void UUI_BP_CompassIcon_C::SetCompassIconColorAndOpacity0(FLinearColor NewColor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/HUDCompass/UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetCompassIconColorAndOpacity"));
    struct Params_SetCompassIconColorAndOpacity {
        FLinearColor NewColor; // 0x0
    }; // Size: 0x10
    Params_SetCompassIconColorAndOpacity params{};
    params.NewColor = (FLinearColor)NewColor;
    ProcessEvent(func, &params);
}
void UUI_BP_CompassIcon_C::SetCompassIconVisibility0(ESlateVisibility NewVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/HUDCompass/UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetCompassIconVisibility"));
    struct Params_SetCompassIconVisibility {
        ESlateVisibility NewVisibility; // 0x0
    }; // Size: 0x1
    Params_SetCompassIconVisibility params{};
    params.NewVisibility = (ESlateVisibility)NewVisibility;
    ProcessEvent(func, &params);
}
void UUI_BP_CompassIcon_C::SetIconTextureByName0(FString IconName, bool ShowPulse) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/HUDCompass/UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetIconTextureByName"));
    struct Params_SetIconTextureByName {
        FString IconName; // 0x0
        bool ShowPulse; // 0x10
    }; // Size: 0x11
    Params_SetIconTextureByName params{};
    params.IconName = (FString)IconName;
    params.ShowPulse = (bool)ShowPulse;
    ProcessEvent(func, &params);
}
void UUI_BP_CompassIcon_C::TrackBorderLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/HUDCompass/UI_BP_CompassIcon.UI_BP_CompassIcon_C.TrackBorderLoaded"));
    struct Params_TrackBorderLoaded {
        UTexture2D* LoadedTexture; // 0x0
        UObject* CallbackParam; // 0x8
    }; // Size: 0x10
    Params_TrackBorderLoaded params{};
    params.LoadedTexture = (UTexture2D*)LoadedTexture;
    params.CallbackParam = (UObject*)CallbackParam;
    ProcessEvent(func, &params);
}
void UUI_BP_CompassIcon_C::TogglePathingBorder0(bool ShowBorder, FString OutlineIconName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/HUDCompass/UI_BP_CompassIcon.UI_BP_CompassIcon_C.TogglePathingBorder"));
    struct Params_TogglePathingBorder {
        bool ShowBorder; // 0x0
        char pad_1[0x7];
        FString OutlineIconName; // 0x8
    }; // Size: 0x18
    Params_TogglePathingBorder params{};
    params.ShowBorder = (bool)ShowBorder;
    params.OutlineIconName = (FString)OutlineIconName;
    ProcessEvent(func, &params);
}
void UUI_BP_CompassIcon_C::SetDistanceValue0(int32_t Distance) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/HUDCompass/UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetDistanceValue"));
    struct Params_SetDistanceValue {
        int32_t Distance; // 0x0
    }; // Size: 0x4
    Params_SetDistanceValue params{};
    params.Distance = (int32_t)Distance;
    ProcessEvent(func, &params);
}
void UUI_BP_CompassIcon_C::SetElevationVisibility0(ESlateVisibility NewVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/HUDCompass/UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetElevationVisibility"));
    struct Params_SetElevationVisibility {
        ESlateVisibility NewVisibility; // 0x0
    }; // Size: 0x1
    Params_SetElevationVisibility params{};
    params.NewVisibility = (ESlateVisibility)NewVisibility;
    ProcessEvent(func, &params);
}
void UUI_BP_CompassIcon_C::SetIconScale0(float Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/HUDCompass/UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetIconScale"));
    struct Params_SetIconScale {
        float Scale; // 0x0
    }; // Size: 0x4
    Params_SetIconScale params{};
    params.Scale = (float)Scale;
    ProcessEvent(func, &params);
}
void UUI_BP_CompassIcon_C::SetIconOpacity0(float Opacity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/HUDCompass/UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetIconOpacity"));
    struct Params_SetIconOpacity {
        float Opacity; // 0x0
    }; // Size: 0x4
    Params_SetIconOpacity params{};
    params.Opacity = (float)Opacity;
    ProcessEvent(func, &params);
}
void UUI_BP_CompassIcon_C::SetElevationDistance0(int32_t Distance) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/HUDCompass/UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetElevationDistance"));
    struct Params_SetElevationDistance {
        int32_t Distance; // 0x0
    }; // Size: 0x4
    Params_SetElevationDistance params{};
    params.Distance = (int32_t)Distance;
    ProcessEvent(func, &params);
}
void UUI_BP_CompassIcon_C::ShowDistance0(bool ShouldShow) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/HUDCompass/UI_BP_CompassIcon.UI_BP_CompassIcon_C.ShowDistance"));
    struct Params_ShowDistance {
        bool ShouldShow; // 0x0
    }; // Size: 0x1
    Params_ShowDistance params{};
    params.ShouldShow = (bool)ShouldShow;
    ProcessEvent(func, &params);
}
void UUI_BP_CompassIcon_C::ShowIndicatorArrow0(bool ShouldShow) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/HUDCompass/UI_BP_CompassIcon.UI_BP_CompassIcon_C.ShowIndicatorArrow"));
    struct Params_ShowIndicatorArrow {
        bool ShouldShow; // 0x0
    }; // Size: 0x1
    Params_ShowIndicatorArrow params{};
    params.ShouldShow = (bool)ShouldShow;
    ProcessEvent(func, &params);
}
void UUI_BP_CompassIcon_C::SetIndicatorArrowRotation0(float DegreeRot) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/HUDCompass/UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetIndicatorArrowRotation"));
    struct Params_SetIndicatorArrowRotation {
        float DegreeRot; // 0x0
    }; // Size: 0x4
    Params_SetIndicatorArrowRotation params{};
    params.DegreeRot = (float)DegreeRot;
    ProcessEvent(func, &params);
}
void UUI_BP_CompassIcon_C::SetIconSize0(FVector2D NewSize) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/HUDCompass/UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetIconSize"));
    struct Params_SetIconSize {
        FVector2D NewSize; // 0x0
    }; // Size: 0x8
    Params_SetIconSize params{};
    params.NewSize = (FVector2D)NewSize;
    ProcessEvent(func, &params);
}
void UUI_BP_CompassIcon_C::SetPulse0(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/HUDCompass/UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetPulse"));
    struct Params_SetPulse {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_SetPulse params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void UUI_BP_CompassIcon_C::SetRotation0(float Angle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/HUDCompass/UI_BP_CompassIcon.UI_BP_CompassIcon_C.SetRotation"));
    struct Params_SetRotation {
        float Angle; // 0x0
    }; // Size: 0x4
    Params_SetRotation params{};
    params.Angle = (float)Angle;
    ProcessEvent(func, &params);
}
void UUI_BP_CompassIcon_C::ToggleLockBadge0(bool ShowLock) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/HUDCompass/UI_BP_CompassIcon.UI_BP_CompassIcon_C.ToggleLockBadge"));
    struct Params_ToggleLockBadge {
        bool ShowLock; // 0x0
    }; // Size: 0x1
    Params_ToggleLockBadge params{};
    params.ShowLock = (bool)ShowLock;
    ProcessEvent(func, &params);
}
void UUI_BP_CompassIcon_C::WidgetAnimationEvt_FadeDistanceText_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/HUDCompass/UI_BP_CompassIcon.UI_BP_CompassIcon_C.WidgetAnimationEvt_FadeDistanceText_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_FadeDistanceText_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_FadeDistanceText_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CompassIcon_C::ExecuteUbergraph_UI_BP_CompassIcon(int32_t EntryPoint, ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable) {}
