#include "ETickMode.hpp"
#include "EWidgetBlendMode.hpp"
#include "EWidgetGeometryMode.hpp"
#include "EWidgetSpace.hpp"
#include "EWidgetTimingPolicy.hpp"
#include "EWindowVisibility.hpp"
#include "FIntPoint.hpp"
#include "FLinearColor.hpp"
#include "FVector2D.hpp"
#include "UBodySetup.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "ULocalPlayer.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UMeshComponent.hpp"
#include "UTextureRenderTarget2D.hpp"
#include "UUserWidget.hpp"
#include "UWidgetComponent.hpp"
void UWidgetComponent::SetWidgetSpace(EWidgetSpace NewSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.SetWidgetSpace"));
    struct Params_SetWidgetSpace {
        EWidgetSpace NewSpace; // 0x0
    }; // Size: 0x1
    Params_SetWidgetSpace params{};
    params.NewSpace = (EWidgetSpace)NewSpace;
    ProcessEvent(func, &params);
}
void UWidgetComponent::SetWindowFocusable(bool bInWindowFocusable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.SetWindowFocusable"));
    struct Params_SetWindowFocusable {
        bool bInWindowFocusable; // 0x0
    }; // Size: 0x1
    Params_SetWindowFocusable params{};
    params.bInWindowFocusable = (bool)bInWindowFocusable;
    ProcessEvent(func, &params);
}
void UWidgetComponent::SetDrawAtDesiredSize(bool bInDrawAtDesiredSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.SetDrawAtDesiredSize"));
    struct Params_SetDrawAtDesiredSize {
        bool bInDrawAtDesiredSize; // 0x0
    }; // Size: 0x1
    Params_SetDrawAtDesiredSize params{};
    params.bInDrawAtDesiredSize = (bool)bInDrawAtDesiredSize;
    ProcessEvent(func, &params);
}
UWidgetComponent* UWidgetComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.WidgetComponent");
    return (UWidgetComponent*)res;
}
EWidgetSpace UWidgetComponent::GetWidgetSpace() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.GetWidgetSpace"));
    struct Params_GetWidgetSpace {
        EWidgetSpace ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetWidgetSpace params{};
    ProcessEvent(func, &params);
    return (EWidgetSpace)params.ReturnValue;
}
void UWidgetComponent::SetWindowVisibility(EWindowVisibility InVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.SetWindowVisibility"));
    struct Params_SetWindowVisibility {
        EWindowVisibility InVisibility; // 0x0
    }; // Size: 0x1
    Params_SetWindowVisibility params{};
    params.InVisibility = (EWindowVisibility)InVisibility;
    ProcessEvent(func, &params);
}
void UWidgetComponent::SetWidget(UUserWidget* Widget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.SetWidget"));
    struct Params_SetWidget {
        UUserWidget* Widget; // 0x0
    }; // Size: 0x8
    Params_SetWidget params{};
    params.Widget = (UUserWidget*)Widget;
    ProcessEvent(func, &params);
}
void UWidgetComponent::SetTwoSided(bool bWantTwoSided) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.SetTwoSided"));
    struct Params_SetTwoSided {
        bool bWantTwoSided; // 0x0
    }; // Size: 0x1
    Params_SetTwoSided params{};
    params.bWantTwoSided = (bool)bWantTwoSided;
    ProcessEvent(func, &params);
}
void UWidgetComponent::SetTickWhenOffscreen(bool bWantTickWhenOffscreen) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.SetTickWhenOffscreen"));
    struct Params_SetTickWhenOffscreen {
        bool bWantTickWhenOffscreen; // 0x0
    }; // Size: 0x1
    Params_SetTickWhenOffscreen params{};
    params.bWantTickWhenOffscreen = (bool)bWantTickWhenOffscreen;
    ProcessEvent(func, &params);
}
void UWidgetComponent::SetDrawSize(FVector2D Size) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.SetDrawSize"));
    struct Params_SetDrawSize {
        FVector2D Size; // 0x0
    }; // Size: 0x8
    Params_SetDrawSize params{};
    params.Size = (FVector2D)Size;
    ProcessEvent(func, &params);
}
void UWidgetComponent::SetTintColorAndOpacity(FLinearColor NewTintColorAndOpacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.SetTintColorAndOpacity"));
    struct Params_SetTintColorAndOpacity {
        FLinearColor NewTintColorAndOpacity; // 0x0
    }; // Size: 0x10
    Params_SetTintColorAndOpacity params{};
    params.NewTintColorAndOpacity = (FLinearColor)NewTintColorAndOpacity;
    ProcessEvent(func, &params);
}
bool UWidgetComponent::GetTwoSided() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.GetTwoSided"));
    struct Params_GetTwoSided {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTwoSided params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UWidgetComponent::SetTickMode(ETickMode InTickMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.SetTickMode"));
    struct Params_SetTickMode {
        ETickMode InTickMode; // 0x0
    }; // Size: 0x1
    Params_SetTickMode params{};
    params.InTickMode = (ETickMode)InTickMode;
    ProcessEvent(func, &params);
}
void UWidgetComponent::SetRedrawTime(float InRedrawTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.SetRedrawTime"));
    struct Params_SetRedrawTime {
        float InRedrawTime; // 0x0
    }; // Size: 0x4
    Params_SetRedrawTime params{};
    params.InRedrawTime = (float)InRedrawTime;
    ProcessEvent(func, &params);
}
UTextureRenderTarget2D* UWidgetComponent::GetRenderTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.GetRenderTarget"));
    struct Params_GetRenderTarget {
        UTextureRenderTarget2D* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetRenderTarget params{};
    ProcessEvent(func, &params);
    return (UTextureRenderTarget2D*)params.ReturnValue;
}
void UWidgetComponent::SetPivot(FVector2D& InPivot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.SetPivot"));
    struct Params_SetPivot {
        FVector2D InPivot; // 0x0
    }; // Size: 0x8
    Params_SetPivot params{};
    params.InPivot = (FVector2D)InPivot;
    ProcessEvent(func, &params);
    InPivot = params.InPivot;
}
ULocalPlayer* UWidgetComponent::GetOwnerPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.GetOwnerPlayer"));
    struct Params_GetOwnerPlayer {
        ULocalPlayer* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOwnerPlayer params{};
    ProcessEvent(func, &params);
    return (ULocalPlayer*)params.ReturnValue;
}
void UWidgetComponent::SetOwnerPlayer(ULocalPlayer* LocalPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.SetOwnerPlayer"));
    struct Params_SetOwnerPlayer {
        ULocalPlayer* LocalPlayer; // 0x0
    }; // Size: 0x8
    Params_SetOwnerPlayer params{};
    params.LocalPlayer = (ULocalPlayer*)LocalPlayer;
    ProcessEvent(func, &params);
}
void UWidgetComponent::SetManuallyRedraw(bool bUseManualRedraw) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.SetManuallyRedraw"));
    struct Params_SetManuallyRedraw {
        bool bUseManualRedraw; // 0x0
    }; // Size: 0x1
    Params_SetManuallyRedraw params{};
    params.bUseManualRedraw = (bool)bUseManualRedraw;
    ProcessEvent(func, &params);
}
FVector2D UWidgetComponent::GetPivot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.GetPivot"));
    struct Params_GetPivot {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPivot params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void UWidgetComponent::SetGeometryMode(EWidgetGeometryMode InGeometryMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.SetGeometryMode"));
    struct Params_SetGeometryMode {
        EWidgetGeometryMode InGeometryMode; // 0x0
    }; // Size: 0x1
    Params_SetGeometryMode params{};
    params.InGeometryMode = (EWidgetGeometryMode)InGeometryMode;
    ProcessEvent(func, &params);
}
void UWidgetComponent::SetCylinderArcAngle(float InCylinderArcAngle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.SetCylinderArcAngle"));
    struct Params_SetCylinderArcAngle {
        float InCylinderArcAngle; // 0x0
    }; // Size: 0x4
    Params_SetCylinderArcAngle params{};
    params.InCylinderArcAngle = (float)InCylinderArcAngle;
    ProcessEvent(func, &params);
}
void UWidgetComponent::SetBackgroundColor(FLinearColor NewBackgroundColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.SetBackgroundColor"));
    struct Params_SetBackgroundColor {
        FLinearColor NewBackgroundColor; // 0x0
    }; // Size: 0x10
    Params_SetBackgroundColor params{};
    params.NewBackgroundColor = (FLinearColor)NewBackgroundColor;
    ProcessEvent(func, &params);
}
void UWidgetComponent::RequestRenderUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.RequestRenderUpdate"));
    struct Params_RequestRenderUpdate {
    }; // Size: 0x0
    Params_RequestRenderUpdate params{};
    ProcessEvent(func, &params);
}
void UWidgetComponent::RequestRedraw() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.RequestRedraw"));
    struct Params_RequestRedraw {
    }; // Size: 0x0
    Params_RequestRedraw params{};
    ProcessEvent(func, &params);
}
float UWidgetComponent::GetCylinderArcAngle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.GetCylinderArcAngle"));
    struct Params_GetCylinderArcAngle {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCylinderArcAngle params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UWidgetComponent::IsWidgetVisible() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.IsWidgetVisible"));
    struct Params_IsWidgetVisible {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsWidgetVisible params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
EWindowVisibility UWidgetComponent::GetWindowVisiblility() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.GetWindowVisiblility"));
    struct Params_GetWindowVisiblility {
        EWindowVisibility ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetWindowVisiblility params{};
    ProcessEvent(func, &params);
    return (EWindowVisibility)params.ReturnValue;
}
bool UWidgetComponent::GetWindowFocusable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.GetWindowFocusable"));
    struct Params_GetWindowFocusable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetWindowFocusable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector2D UWidgetComponent::GetDrawSize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.GetDrawSize"));
    struct Params_GetDrawSize {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDrawSize params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
UUserWidget* UWidgetComponent::GetWidget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.GetWidget"));
    struct Params_GetWidget {
        UUserWidget* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetWidget params{};
    ProcessEvent(func, &params);
    return (UUserWidget*)params.ReturnValue;
}
UMaterialInstanceDynamic* UWidgetComponent::GetMaterialInstance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.GetMaterialInstance"));
    struct Params_GetMaterialInstance {
        UMaterialInstanceDynamic* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMaterialInstance params{};
    ProcessEvent(func, &params);
    return (UMaterialInstanceDynamic*)params.ReturnValue;
}
UUserWidget* UWidgetComponent::GetUserWidgetObject() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.GetUserWidgetObject"));
    struct Params_GetUserWidgetObject {
        UUserWidget* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetUserWidgetObject params{};
    ProcessEvent(func, &params);
    return (UUserWidget*)params.ReturnValue;
}
bool UWidgetComponent::GetTickWhenOffscreen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.GetTickWhenOffscreen"));
    struct Params_GetTickWhenOffscreen {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTickWhenOffscreen params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UWidgetComponent::GetRedrawTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.GetRedrawTime"));
    struct Params_GetRedrawTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRedrawTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UWidgetComponent::GetManuallyRedraw() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.GetManuallyRedraw"));
    struct Params_GetManuallyRedraw {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetManuallyRedraw params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
EWidgetGeometryMode UWidgetComponent::GetGeometryMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.GetGeometryMode"));
    struct Params_GetGeometryMode {
        EWidgetGeometryMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetGeometryMode params{};
    ProcessEvent(func, &params);
    return (EWidgetGeometryMode)params.ReturnValue;
}
bool UWidgetComponent::GetDrawAtDesiredSize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.GetDrawAtDesiredSize"));
    struct Params_GetDrawAtDesiredSize {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDrawAtDesiredSize params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector2D UWidgetComponent::GetCurrentDrawSize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetComponent.GetCurrentDrawSize"));
    struct Params_GetCurrentDrawSize {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCurrentDrawSize params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
