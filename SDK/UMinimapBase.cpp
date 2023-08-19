#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UMapIconInstance.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UMiniMapParameters.hpp"
#include "UMinimapBase.hpp"
#include "UTexture2D.hpp"
#include "UTextureRenderTarget2D.hpp"
#include "UUserWidget.hpp"
FVector2D UMinimapBase::GetMapToTextureRatio() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.GetMapToTextureRatio"));
    struct Params_GetMapToTextureRatio {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMapToTextureRatio params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
UMinimapBase* UMinimapBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MinimapBase");
    return (UMinimapBase*)res;
}
void UMinimapBase::SetPlayerPosition(FVector pPlayerPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.SetPlayerPosition"));
    struct Params_SetPlayerPosition {
        FVector pPlayerPosition; // 0x0
    }; // Size: 0xc
    Params_SetPlayerPosition params{};
    params.pPlayerPosition = (FVector)pPlayerPosition;
    ProcessEvent(func, &params);
}
void UMinimapBase::SetPlayerPositionTextureSpaceEvent(FVector2D pPlayerLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.SetPlayerPositionTextureSpaceEvent"));
    struct Params_SetPlayerPositionTextureSpaceEvent {
        FVector2D pPlayerLocation; // 0x0
    }; // Size: 0x8
    Params_SetPlayerPositionTextureSpaceEvent params{};
    params.pPlayerLocation = (FVector2D)pPlayerLocation;
    ProcessEvent(func, &params);
}
void UMinimapBase::ShowOutline(UMapIconInstance* Icon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.ShowOutline"));
    struct Params_ShowOutline {
        UMapIconInstance* Icon; // 0x0
    }; // Size: 0x8
    Params_ShowOutline params{};
    params.Icon = (UMapIconInstance*)Icon;
    ProcessEvent(func, &params);
}
void UMinimapBase::SetPlayerPositionEvent(FVector pPlayerLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.SetPlayerPositionEvent"));
    struct Params_SetPlayerPositionEvent {
        FVector pPlayerLocation; // 0x0
    }; // Size: 0xc
    Params_SetPlayerPositionEvent params{};
    params.pPlayerLocation = (FVector)pPlayerLocation;
    ProcessEvent(func, &params);
}
void UMinimapBase::ShowMap(bool Visibile) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.ShowMap"));
    struct Params_ShowMap {
        bool Visibile; // 0x0
    }; // Size: 0x1
    Params_ShowMap params{};
    params.Visibile = (bool)Visibile;
    ProcessEvent(func, &params);
}
FVector2D UMinimapBase::GetMapMultiplier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.GetMapMultiplier"));
    struct Params_GetMapMultiplier {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMapMultiplier params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void UMinimapBase::SetSize(float Size) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.SetSize"));
    struct Params_SetSize {
        float Size; // 0x0
    }; // Size: 0x4
    Params_SetSize params{};
    params.Size = (float)Size;
    ProcessEvent(func, &params);
}
bool UMinimapBase::IsPointInBounds(FVector2D Point, FVector2D TL, FVector2D BR) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.IsPointInBounds"));
    struct Params_IsPointInBounds {
        FVector2D Point; // 0x0
        FVector2D TL; // 0x8
        FVector2D BR; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_IsPointInBounds params{};
    params.Point = (FVector2D)Point;
    params.TL = (FVector2D)TL;
    params.BR = (FVector2D)BR;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMinimapBase::SetPathPulseVisibility(float PulseVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.SetPathPulseVisibility"));
    struct Params_SetPathPulseVisibility {
        float PulseVisibility; // 0x0
    }; // Size: 0x4
    Params_SetPathPulseVisibility params{};
    params.PulseVisibility = (float)PulseVisibility;
    ProcessEvent(func, &params);
}
float UMinimapBase::GetMiniMapSize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.GetMiniMapSize"));
    struct Params_GetMiniMapSize {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMiniMapSize params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UMinimapBase::SetPathPulseSpeed(float Speed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.SetPathPulseSpeed"));
    struct Params_SetPathPulseSpeed {
        float Speed; // 0x0
    }; // Size: 0x4
    Params_SetPathPulseSpeed params{};
    params.Speed = (float)Speed;
    ProcessEvent(func, &params);
}
void UMinimapBase::SetOpacity(float Alpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.SetOpacity"));
    struct Params_SetOpacity {
        float Alpha; // 0x0
    }; // Size: 0x4
    Params_SetOpacity params{};
    params.Alpha = (float)Alpha;
    ProcessEvent(func, &params);
}
void UMinimapBase::SetMiniMapSize(float Size, float ZoomTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.SetMiniMapSize"));
    struct Params_SetMiniMapSize {
        float Size; // 0x0
        float ZoomTime; // 0x4
    }; // Size: 0x8
    Params_SetMiniMapSize params{};
    params.Size = (float)Size;
    params.ZoomTime = (float)ZoomTime;
    ProcessEvent(func, &params);
}
void UMinimapBase::SetMaterialTexture(FString TextureParameter, UTexture2D* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.SetMaterialTexture"));
    struct Params_SetMaterialTexture {
        FString TextureParameter; // 0x0
        UTexture2D* Texture; // 0x10
    }; // Size: 0x18
    Params_SetMaterialTexture params{};
    params.TextureParameter = (FString)TextureParameter;
    params.Texture = (UTexture2D*)Texture;
    ProcessEvent(func, &params);
}
float UMinimapBase::GetMiniMapZoomSize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.GetMiniMapZoomSize"));
    struct Params_GetMiniMapZoomSize {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMiniMapZoomSize params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UMinimapBase::SetMapOpacity(float Opacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.SetMapOpacity"));
    struct Params_SetMapOpacity {
        float Opacity; // 0x0
    }; // Size: 0x4
    Params_SetMapOpacity params{};
    params.Opacity = (float)Opacity;
    ProcessEvent(func, &params);
}
void UMinimapBase::FadeInCircleIcon(UMapIconInstance* Icon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.FadeInCircleIcon"));
    struct Params_FadeInCircleIcon {
        UMapIconInstance* Icon; // 0x0
    }; // Size: 0x8
    Params_FadeInCircleIcon params{};
    params.Icon = (UMapIconInstance*)Icon;
    ProcessEvent(func, &params);
}
void UMinimapBase::SetIntrusionColor(FLinearColor Color) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.SetIntrusionColor"));
    struct Params_SetIntrusionColor {
        FLinearColor Color; // 0x0
    }; // Size: 0x10
    Params_SetIntrusionColor params{};
    params.Color = (FLinearColor)Color;
    ProcessEvent(func, &params);
}
void UMinimapBase::SetIconDistanceScale(float IconDistanceScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.SetIconDistanceScale"));
    struct Params_SetIconDistanceScale {
        float IconDistanceScale; // 0x0
    }; // Size: 0x4
    Params_SetIconDistanceScale params{};
    params.IconDistanceScale = (float)IconDistanceScale;
    ProcessEvent(func, &params);
}
void UMinimapBase::CalculateScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.CalculateScale"));
    struct Params_CalculateScale {
    }; // Size: 0x0
    Params_CalculateScale params{};
    ProcessEvent(func, &params);
}
void UMinimapBase::SetColorByName(FString ParameterName, FLinearColor Color) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.SetColorByName"));
    struct Params_SetColorByName {
        FString ParameterName; // 0x0
        FLinearColor Color; // 0x10
    }; // Size: 0x20
    Params_SetColorByName params{};
    params.ParameterName = (FString)ParameterName;
    params.Color = (FLinearColor)Color;
    ProcessEvent(func, &params);
}
void UMinimapBase::PulseCircleIcon(UMapIconInstance* Icon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.PulseCircleIcon"));
    struct Params_PulseCircleIcon {
        UMapIconInstance* Icon; // 0x0
    }; // Size: 0x8
    Params_PulseCircleIcon params{};
    params.Icon = (UMapIconInstance*)Icon;
    ProcessEvent(func, &params);
}
float UMinimapBase::GetMiniMapInitialSize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.GetMiniMapInitialSize"));
    struct Params_GetMiniMapInitialSize {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMiniMapInitialSize params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UMinimapBase::OverrideLevelBounds(FVector2D TopLeft, FVector2D BottomRight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.OverrideLevelBounds"));
    struct Params_OverrideLevelBounds {
        FVector2D TopLeft; // 0x0
        FVector2D BottomRight; // 0x8
    }; // Size: 0x10
    Params_OverrideLevelBounds params{};
    params.TopLeft = (FVector2D)TopLeft;
    params.BottomRight = (FVector2D)BottomRight;
    ProcessEvent(func, &params);
}
FVector2D UMinimapBase::GetWorldToTextureScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.GetWorldToTextureScale"));
    struct Params_GetWorldToTextureScale {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetWorldToTextureScale params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void UMinimapBase::GetVisibleBoundsInPixels(FVector2D& TL, FVector2D& BR) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.GetVisibleBoundsInPixels"));
    struct Params_GetVisibleBoundsInPixels {
        FVector2D TL; // 0x0
        FVector2D BR; // 0x8
    }; // Size: 0x10
    Params_GetVisibleBoundsInPixels params{};
    params.TL = (FVector2D)TL;
    params.BR = (FVector2D)BR;
    ProcessEvent(func, &params);
    TL = params.TL;
    BR = params.BR;
}
void UMinimapBase::GetVisibleBounds(FVector2D& TL, FVector2D& BR) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.GetVisibleBounds"));
    struct Params_GetVisibleBounds {
        FVector2D TL; // 0x0
        FVector2D BR; // 0x8
    }; // Size: 0x10
    Params_GetVisibleBounds params{};
    params.TL = (FVector2D)TL;
    params.BR = (FVector2D)BR;
    ProcessEvent(func, &params);
    BR = params.BR;
    TL = params.TL;
}
FVector2D UMinimapBase::ConvertFromWorldSpaceToTextureSpaceSubSection(FVector WorldPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.ConvertFromWorldSpaceToTextureSpaceSubSection"));
    struct Params_ConvertFromWorldSpaceToTextureSpaceSubSection {
        FVector WorldPosition; // 0x0
        FVector2D ReturnValue; // 0xc
    }; // Size: 0x14
    Params_ConvertFromWorldSpaceToTextureSpaceSubSection params{};
    params.WorldPosition = (FVector)WorldPosition;
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FVector2D UMinimapBase::GetTopLeftPadded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.GetTopLeftPadded"));
    struct Params_GetTopLeftPadded {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTopLeftPadded params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FVector UMinimapBase::GetPlayerLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.GetPlayerLocation"));
    struct Params_GetPlayerLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetPlayerLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector2D UMinimapBase::GetOnScreenTextureArea() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.GetOnScreenTextureArea"));
    struct Params_GetOnScreenTextureArea {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOnScreenTextureArea params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void UMinimapBase::GetBoundsForTextureSpaceSubSection(FVector WorldPosition, FVector2D& TL, FVector2D& BR, float& AvgMultiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.GetBoundsForTextureSpaceSubSection"));
    struct Params_GetBoundsForTextureSpaceSubSection {
        FVector WorldPosition; // 0x0
        FVector2D TL; // 0xc
        FVector2D BR; // 0x14
        float AvgMultiplier; // 0x1c
    }; // Size: 0x20
    Params_GetBoundsForTextureSpaceSubSection params{};
    params.WorldPosition = (FVector)WorldPosition;
    params.TL = (FVector2D)TL;
    params.BR = (FVector2D)BR;
    params.AvgMultiplier = (float)AvgMultiplier;
    ProcessEvent(func, &params);
    TL = params.TL;
    BR = params.BR;
    AvgMultiplier = params.AvgMultiplier;
}
FVector2D UMinimapBase::GetBottomRightPadded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.GetBottomRightPadded"));
    struct Params_GetBottomRightPadded {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBottomRightPadded params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void UMinimapBase::FadeInMissionIcon(UMapIconInstance* Icon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapBase.FadeInMissionIcon"));
    struct Params_FadeInMissionIcon {
        UMapIconInstance* Icon; // 0x0
    }; // Size: 0x8
    Params_FadeInMissionIcon params{};
    params.Icon = (UMapIconInstance*)Icon;
    ProcessEvent(func, &params);
}
