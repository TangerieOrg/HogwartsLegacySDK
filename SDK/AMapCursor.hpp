#pragma once
#include <cstdint>
#include "ADecalActor.hpp"
#include "ECursorControlTypes\Type.hpp"
#include "FVector.hpp"
#include "FVector4.hpp"
class UTexture2D;
class UMaterialInstanceDynamic;
class UMapBase;
class UMapSubSystem;
class UUIManager;
class UMaterial;
class UMapScreenBase;
class AActor;
class APlayerController;
class UMapOverland;
class UMapHogsmeade;
class UMapHogwarts;
class UMapMovementComponent;
class USceneComponent;
class ULocalPlayer;
class UWorld;
#pragma pack(push, 1)
class AMapCursor : public ADecalActor {
public:
    float CursorSpeedMultiplier; // 0x250
    float CursorSpeedMultiplierDungeon; // 0x254
    float CursorSpeedMultiplierZoomFactor; // 0x258
    float CursorSpeedMultiplierZoomFactorDungeon; // 0x25c
    bool ShouldSnapCursor; // 0x260
    char pad_261[0x3];
    float MaxFadeFromCursor; // 0x264
    float FadeDistanceFromCursorToStartFade; // 0x268
    float MaxFadeDistance; // 0x26c
    float FadeMultiplier; // 0x270
    bool DisableMouseInput; // 0x274
    char pad_275[0x3];
    float MouseSlop; // 0x278
    float SnapToIconLerpFactor; // 0x27c
    float SnapToIconLerpFactorHogwarts; // 0x280
    float VerticalHorinzontalCollideAdjust; // 0x284
    float MouseEdgeMovementSpeed; // 0x288
    float ShowMouseCursorTop; // 0x28c
    float VerticalEdgeBoundTop; // 0x290
    float VerticalEdgeBoundBottom; // 0x294
    float HorizontalEdgeBound; // 0x298
    float CursorMoveOnScroll; // 0x29c
    float ToggleInputLerpFactor; // 0x2a0
    char pad_2a4[0x4];
    UMaterialInstanceDynamic* MaterialInstance; // 0x2a8
    UMaterial* CursorMaterial; // 0x2b0
    char pad_2b8[0xe8];
    UTexture2D* CursorTexture; // 0x3a0
    UMapScreenBase* MapScreen; // 0x3a8
    UUIManager* UIManager; // 0x3b0
    UMapSubSystem* MapSubSystem; // 0x3b8
    APlayerController* PlayerController; // 0x3c0
    UMapBase* MapBase; // 0x3c8
    UMapOverland* OverlandMap; // 0x3d0
    UMapHogsmeade* HogsmeadeMap; // 0x3d8
    UMapHogwarts* HogwartsMap; // 0x3e0
    UMapMovementComponent* MapMoveComponent; // 0x3e8
    ULocalPlayer* LocalPlayer; // 0x3f0
    UWorld* TraceWorld; // 0x3f8
    char pad_400[0x150];
    AActor* HitActor; // 0x550
    AActor* LastHitActor; // 0x558
    USceneComponent* StaticHitComponent; // 0x560
    USceneComponent* LastStaticHitComponent; // 0x568
    char pad_570[0x10];
    static AMapCursor* StaticClass();
    void ToggleShowScreenPosition();
    void ToggleShowMouseLocation();
    void ToggleShowCursorLocation();
    void ToggleShowCollisionActor();
    void SetToMouse();
    void SetToGamePad(bool doLerp, FVector lerpLocation);
    void SetScreenBounds(FVector4 BoundsArray);
    void SetRightMouseButtonClicked(bool Clicked);
    void SetCursorControl(ECursorControlTypes::Type& ControlType);
    void SetCursorBounds(FVector4 BoundsArray);
    void MouseSnapToPlayer();
    FVector4 GetScreenBounds();
    bool GetMouseActive();
    bool GetLerpingToNewLocation();
    bool GetGamePadActive();
    FVector GetCursorTranslation();
    FVector4 GetCursorBounds();
    void GamepadSnapToPlayer();
}; // Size: 0x580
#pragma pack(pop)
