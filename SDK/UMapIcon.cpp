#include "AMapFilterRegion.hpp"
#include "EBeaconType.hpp"
#include "EMapFadeState.hpp"
#include "EMapIconState.hpp"
#include "EMapToolTipTypes.hpp"
#include "FHoverDataEvent.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UBeaconInfo.hpp"
#include "UFunction.hpp"
#include "UMapIcon.hpp"
#include "UMapIconInstance.hpp"
#include "UMapIconWidget.hpp"
#include "UObject.hpp"
#include "UTexture2D.hpp"
FVector UMapIcon::GetBeaconWorldPosition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.GetBeaconWorldPosition"));
    struct Params_GetBeaconWorldPosition {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetBeaconWorldPosition params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UMapIcon::SetStartingScale(float Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.SetStartingScale"));
    struct Params_SetStartingScale {
        float Scale; // 0x0
    }; // Size: 0x4
    Params_SetStartingScale params{};
    params.Scale = (float)Scale;
    ProcessEvent(func, &params);
}
UMapIcon* UMapIcon::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapIcon");
    return (UMapIcon*)res;
}
void UMapIcon::SetTargetColor(FLinearColor pTargetColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.SetTargetColor"));
    struct Params_SetTargetColor {
        FLinearColor pTargetColor; // 0x0
    }; // Size: 0x10
    Params_SetTargetColor params{};
    params.pTargetColor = (FLinearColor)pTargetColor;
    ProcessEvent(func, &params);
}
void UMapIcon::StopAnimationAndChain(EMapIconState NextState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.StopAnimationAndChain"));
    struct Params_StopAnimationAndChain {
        EMapIconState NextState; // 0x0
    }; // Size: 0x1
    Params_StopAnimationAndChain params{};
    params.NextState = (EMapIconState)NextState;
    ProcessEvent(func, &params);
}
void UMapIcon::StopAnimation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.StopAnimation"));
    struct Params_StopAnimation {
    }; // Size: 0x0
    Params_StopAnimation params{};
    ProcessEvent(func, &params);
}
void UMapIcon::SetScale(float ScaleIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.SetScale"));
    struct Params_SetScale {
        float ScaleIn; // 0x0
    }; // Size: 0x4
    Params_SetScale params{};
    params.ScaleIn = (float)ScaleIn;
    ProcessEvent(func, &params);
}
void UMapIcon::SetState(EMapIconState IconState, bool SaveState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.SetState"));
    struct Params_SetState {
        EMapIconState IconState; // 0x0
        bool SaveState; // 0x1
    }; // Size: 0x2
    Params_SetState params{};
    params.IconState = (EMapIconState)IconState;
    params.SaveState = (bool)SaveState;
    ProcessEvent(func, &params);
}
void UMapIcon::SetTargetScale(float Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.SetTargetScale"));
    struct Params_SetTargetScale {
        float Scale; // 0x0
    }; // Size: 0x4
    Params_SetTargetScale params{};
    params.Scale = (float)Scale;
    ProcessEvent(func, &params);
}
void UMapIcon::SetIconVisibility(bool pVisbility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.SetIconVisibility"));
    struct Params_SetIconVisibility {
        bool pVisbility; // 0x0
    }; // Size: 0x1
    Params_SetIconVisibility params{};
    params.pVisbility = (bool)pVisbility;
    ProcessEvent(func, &params);
}
bool UMapIcon::IsStopping() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.IsStopping"));
    struct Params_IsStopping {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsStopping params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapIcon::SetIconPriority(int32_t Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.SetIconPriority"));
    struct Params_SetIconPriority {
        int32_t Priority; // 0x0
    }; // Size: 0x4
    Params_SetIconPriority params{};
    params.Priority = (int32_t)Priority;
    ProcessEvent(func, &params);
}
void UMapIcon::SetIconBadgeVisibility(bool pVisbility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.SetIconBadgeVisibility"));
    struct Params_SetIconBadgeVisibility {
        bool pVisbility; // 0x0
    }; // Size: 0x1
    Params_SetIconBadgeVisibility params{};
    params.pVisbility = (bool)pVisbility;
    ProcessEvent(func, &params);
}
void UMapIcon::SetIconFlags(int32_t flags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.SetIconFlags"));
    struct Params_SetIconFlags {
        int32_t flags; // 0x0
    }; // Size: 0x4
    Params_SetIconFlags params{};
    params.flags = (int32_t)flags;
    ProcessEvent(func, &params);
}
EMapIconState UMapIcon::GetState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.GetState"));
    struct Params_GetState {
        EMapIconState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetState params{};
    ProcessEvent(func, &params);
    return (EMapIconState)params.ReturnValue;
}
void UMapIcon::SetColor(FLinearColor ColorIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.SetColor"));
    struct Params_SetColor {
        FLinearColor ColorIn; // 0x0
    }; // Size: 0x10
    Params_SetColor params{};
    params.ColorIn = (FLinearColor)ColorIn;
    ProcessEvent(func, &params);
}
void UMapIcon::SetBadgeName(FString pBadgeName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.SetBadgeName"));
    struct Params_SetBadgeName {
        FString pBadgeName; // 0x0
    }; // Size: 0x10
    Params_SetBadgeName params{};
    params.pBadgeName = (FString)pBadgeName;
    ProcessEvent(func, &params);
}
bool UMapIcon::IsBadgeStopping() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.IsBadgeStopping"));
    struct Params_IsBadgeStopping {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsBadgeStopping params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UMapIcon::GetTargetScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.GetTargetScale"));
    struct Params_GetTargetScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTargetScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UMapIcon::GetStartingScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.GetStartingScale"));
    struct Params_GetStartingScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetStartingScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UMapIcon::GetIconPriority() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.GetIconPriority"));
    struct Params_GetIconPriority {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetIconPriority params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UMapIcon::GetIconFlags() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.GetIconFlags"));
    struct Params_GetIconFlags {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetIconFlags params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
EMapFadeState UMapIcon::GetFadeState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.GetFadeState"));
    struct Params_GetFadeState {
        EMapFadeState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetFadeState params{};
    ProcessEvent(func, &params);
    return (EMapFadeState)params.ReturnValue;
}
EBeaconType UMapIcon::GetBeaconType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.GetBeaconType"));
    struct Params_GetBeaconType {
        EBeaconType ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetBeaconType params{};
    ProcessEvent(func, &params);
    return (EBeaconType)params.ReturnValue;
}
FString UMapIcon::GetBeaconName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.GetBeaconName"));
    struct Params_GetBeaconName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetBeaconName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UMapIcon::GetBeaconIcon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.GetBeaconIcon"));
    struct Params_GetBeaconIcon {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetBeaconIcon params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UMapIcon::GetBeaconFastTravelLocationID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.GetBeaconFastTravelLocationID"));
    struct Params_GetBeaconFastTravelLocationID {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetBeaconFastTravelLocationID params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UMapIcon::GetBeaconDescShort() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.GetBeaconDescShort"));
    struct Params_GetBeaconDescShort {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetBeaconDescShort params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UMapIcon::ExcludeIconFromStackedFade(bool pExcludeFromStackedFade) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapIcon.ExcludeIconFromStackedFade"));
    struct Params_ExcludeIconFromStackedFade {
        bool pExcludeFromStackedFade; // 0x0
    }; // Size: 0x1
    Params_ExcludeIconFromStackedFade params{};
    params.pExcludeFromStackedFade = (bool)pExcludeFromStackedFade;
    ProcessEvent(func, &params);
}
