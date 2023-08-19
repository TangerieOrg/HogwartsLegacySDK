#include "ESlateVisibility.hpp"
#include "FLinearColor.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UHUDCompassIcon.hpp"
#include "UTexture2D.hpp"
#include "UUserWidget.hpp"
UHUDCompassIcon* UHUDCompassIcon::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.HUDCompassIcon");
    return (UHUDCompassIcon*)res;
}
void UHUDCompassIcon::ShowDistance(bool ShouldShow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HUDCompassIcon.ShowDistance"));
    struct Params_ShowDistance {
        bool ShouldShow; // 0x0
    }; // Size: 0x1
    Params_ShowDistance params{};
    params.ShouldShow = (bool)ShouldShow;
    ProcessEvent(func, &params);
}
void UHUDCompassIcon::TogglePathingBorder(bool ShowBorder, FString OutlineIconName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HUDCompassIcon.TogglePathingBorder"));
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
void UHUDCompassIcon::ShowIndicatorArrow(bool ShouldShow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HUDCompassIcon.ShowIndicatorArrow"));
    struct Params_ShowIndicatorArrow {
        bool ShouldShow; // 0x0
    }; // Size: 0x1
    Params_ShowIndicatorArrow params{};
    params.ShouldShow = (bool)ShouldShow;
    ProcessEvent(func, &params);
}
void UHUDCompassIcon::ToggleLockBadge(bool ShowLock) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HUDCompassIcon.ToggleLockBadge"));
    struct Params_ToggleLockBadge {
        bool ShowLock; // 0x0
    }; // Size: 0x1
    Params_ToggleLockBadge params{};
    params.ShowLock = (bool)ShowLock;
    ProcessEvent(func, &params);
}
void UHUDCompassIcon::SetRotation(float Angle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HUDCompassIcon.SetRotation"));
    struct Params_SetRotation {
        float Angle; // 0x0
    }; // Size: 0x4
    Params_SetRotation params{};
    params.Angle = (float)Angle;
    ProcessEvent(func, &params);
}
void UHUDCompassIcon::SetIndicatorArrowRotation(float DegreeRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HUDCompassIcon.SetIndicatorArrowRotation"));
    struct Params_SetIndicatorArrowRotation {
        float DegreeRot; // 0x0
    }; // Size: 0x4
    Params_SetIndicatorArrowRotation params{};
    params.DegreeRot = (float)DegreeRot;
    ProcessEvent(func, &params);
}
void UHUDCompassIcon::SetElevationDistance(int32_t Distance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HUDCompassIcon.SetElevationDistance"));
    struct Params_SetElevationDistance {
        int32_t Distance; // 0x0
    }; // Size: 0x4
    Params_SetElevationDistance params{};
    params.Distance = (int32_t)Distance;
    ProcessEvent(func, &params);
}
void UHUDCompassIcon::SetPulse(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HUDCompassIcon.SetPulse"));
    struct Params_SetPulse {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_SetPulse params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void UHUDCompassIcon::SetIconTextureByName(FString IconName, bool ShowPulse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HUDCompassIcon.SetIconTextureByName"));
    struct Params_SetIconTextureByName {
        FString IconName; // 0x0
        bool ShowPulse; // 0x10
    }; // Size: 0x11
    Params_SetIconTextureByName params{};
    params.IconName = (FString)IconName;
    params.ShowPulse = (bool)ShowPulse;
    ProcessEvent(func, &params);
}
void UHUDCompassIcon::SetIconTexture(UTexture2D* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HUDCompassIcon.SetIconTexture"));
    struct Params_SetIconTexture {
        UTexture2D* Texture; // 0x0
    }; // Size: 0x8
    Params_SetIconTexture params{};
    params.Texture = (UTexture2D*)Texture;
    ProcessEvent(func, &params);
}
void UHUDCompassIcon::SetIconSize(FVector2D NewSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HUDCompassIcon.SetIconSize"));
    struct Params_SetIconSize {
        FVector2D NewSize; // 0x0
    }; // Size: 0x8
    Params_SetIconSize params{};
    params.NewSize = (FVector2D)NewSize;
    ProcessEvent(func, &params);
}
void UHUDCompassIcon::SetIconScale(float Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HUDCompassIcon.SetIconScale"));
    struct Params_SetIconScale {
        float Scale; // 0x0
    }; // Size: 0x4
    Params_SetIconScale params{};
    params.Scale = (float)Scale;
    ProcessEvent(func, &params);
}
void UHUDCompassIcon::SetIconOpacity(float Opacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HUDCompassIcon.SetIconOpacity"));
    struct Params_SetIconOpacity {
        float Opacity; // 0x0
    }; // Size: 0x4
    Params_SetIconOpacity params{};
    params.Opacity = (float)Opacity;
    ProcessEvent(func, &params);
}
void UHUDCompassIcon::SetElevationVisibility(ESlateVisibility NewVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HUDCompassIcon.SetElevationVisibility"));
    struct Params_SetElevationVisibility {
        ESlateVisibility NewVisibility; // 0x0
    }; // Size: 0x1
    Params_SetElevationVisibility params{};
    params.NewVisibility = (ESlateVisibility)NewVisibility;
    ProcessEvent(func, &params);
}
void UHUDCompassIcon::SetDistanceValue(int32_t Distance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HUDCompassIcon.SetDistanceValue"));
    struct Params_SetDistanceValue {
        int32_t Distance; // 0x0
    }; // Size: 0x4
    Params_SetDistanceValue params{};
    params.Distance = (int32_t)Distance;
    ProcessEvent(func, &params);
}
void UHUDCompassIcon::SetCompassIconVisibility(ESlateVisibility NewVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HUDCompassIcon.SetCompassIconVisibility"));
    struct Params_SetCompassIconVisibility {
        ESlateVisibility NewVisibility; // 0x0
    }; // Size: 0x1
    Params_SetCompassIconVisibility params{};
    params.NewVisibility = (ESlateVisibility)NewVisibility;
    ProcessEvent(func, &params);
}
void UHUDCompassIcon::SetCompassIconColorAndOpacity(FLinearColor NewColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HUDCompassIcon.SetCompassIconColorAndOpacity"));
    struct Params_SetCompassIconColorAndOpacity {
        FLinearColor NewColor; // 0x0
    }; // Size: 0x10
    Params_SetCompassIconColorAndOpacity params{};
    params.NewColor = (FLinearColor)NewColor;
    ProcessEvent(func, &params);
}
