#pragma once
#include <cstdint>
#include "ETickMode.hpp"
#include "EWidgetBlendMode.hpp"
#include "EWidgetGeometryMode.hpp"
#include "EWidgetSpace.hpp"
#include "EWidgetTimingPolicy.hpp"
#include "EWindowVisibility.hpp"
#include "FIntPoint.hpp"
#include "FLinearColor.hpp"
#include "FVector2D.hpp"
#include "UMeshComponent.hpp"
class UClass;
class ULocalPlayer;
class UBodySetup;
class UMaterialInterface;
class UTextureRenderTarget2D;
class UMaterialInstanceDynamic;
class UUserWidget;
#pragma pack(push, 1)
class UWidgetComponent : public UMeshComponent {
public:
    UClass* WidgetClass; // 0x4b0
    FIntPoint DrawSize; // 0x4b8
    bool bManuallyRedraw; // 0x4c0
    bool bRedrawRequested; // 0x4c1
    char pad_4c2[0x2];
    float RedrawTime; // 0x4c4
    char pad_4c8[0x8];
    FIntPoint CurrentDrawSize; // 0x4d0
    bool bDrawAtDesiredSize; // 0x4d8
    char pad_4d9[0x3];
    FVector2D Pivot; // 0x4dc
    bool bReceiveHardwareInput; // 0x4e4
    bool bWindowFocusable; // 0x4e5
    EWindowVisibility WindowVisibility; // 0x4e6
    bool bApplyGammaCorrection; // 0x4e7
    ULocalPlayer* OwnerPlayer; // 0x4e8
    FLinearColor BackgroundColor; // 0x4f0
    FLinearColor TintColorAndOpacity; // 0x500
    float OpacityFromTexture; // 0x510
    EWidgetBlendMode BlendMode; // 0x514
    bool bIsTwoSided; // 0x515
    bool TickWhenOffscreen; // 0x516
    char pad_517[0x1];
    UBodySetup* BodySetup; // 0x518
    UMaterialInterface* TranslucentMaterial; // 0x520
    UMaterialInterface* TranslucentMaterial_OneSided; // 0x528
    UMaterialInterface* OpaqueMaterial; // 0x530
    UMaterialInterface* OpaqueMaterial_OneSided; // 0x538
    UMaterialInterface* MaskedMaterial; // 0x540
    UMaterialInterface* MaskedMaterial_OneSided; // 0x548
    UTextureRenderTarget2D* RenderTarget; // 0x550
    UMaterialInstanceDynamic* MaterialInstance; // 0x558
    bool bAddedToScreen; // 0x560
    bool bEditTimeUsable; // 0x561
    char pad_562[0x2];
    FName SharedLayerName; // 0x564
    int32_t LayerZOrder; // 0x56c
    EWidgetGeometryMode GeometryMode; // 0x570
    char pad_571[0x3];
    float CylinderArcAngle; // 0x574
    ETickMode TickMode; // 0x578
    char pad_579[0x27];
    UUserWidget* Widget; // 0x5a0
    char pad_5a8[0x28];
    static UWidgetComponent* StaticClass();
    void SetWindowVisibility(EWindowVisibility InVisibility);
    void SetWindowFocusable(bool bInWindowFocusable);
    void SetWidgetSpace(EWidgetSpace NewSpace);
    void SetWidget(UUserWidget* Widget);
    void SetTwoSided(bool bWantTwoSided);
    void SetTintColorAndOpacity(FLinearColor NewTintColorAndOpacity);
    void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);
    void SetTickMode(ETickMode InTickMode);
    void SetRedrawTime(float InRedrawTime);
    void SetPivot(FVector2D& InPivot);
    void SetOwnerPlayer(ULocalPlayer* LocalPlayer);
    void SetManuallyRedraw(bool bUseManualRedraw);
    void SetGeometryMode(EWidgetGeometryMode InGeometryMode);
    void SetDrawSize(FVector2D Size);
    void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);
    void SetCylinderArcAngle(float InCylinderArcAngle);
    void SetBackgroundColor(FLinearColor NewBackgroundColor);
    void RequestRenderUpdate();
    void RequestRedraw();
    bool IsWidgetVisible();
    EWindowVisibility GetWindowVisiblility();
    bool GetWindowFocusable();
    EWidgetSpace GetWidgetSpace();
    UUserWidget* GetWidget();
    UUserWidget* GetUserWidgetObject();
    bool GetTwoSided();
    bool GetTickWhenOffscreen();
    UTextureRenderTarget2D* GetRenderTarget();
    float GetRedrawTime();
    FVector2D GetPivot();
    ULocalPlayer* GetOwnerPlayer();
    UMaterialInstanceDynamic* GetMaterialInstance();
    bool GetManuallyRedraw();
    EWidgetGeometryMode GetGeometryMode();
    FVector2D GetDrawSize();
    bool GetDrawAtDesiredSize();
    float GetCylinderArcAngle();
    FVector2D GetCurrentDrawSize();
}; // Size: 0x5d0
#pragma pack(pop)
