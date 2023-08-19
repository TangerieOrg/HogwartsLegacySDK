#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EMaterialPermuterLoadingBundleAndSwapType.hpp"
#include "FLinearColor.hpp"
#include "FPortraitPaintingComponentState.hpp"
#include "FPortraitPaintingEntities.hpp"
#include "FVector.hpp"
class UScheduledEntity;
class UStaticMeshComponent;
class UMaterialInstanceDynamic;
class USceneComponent;
class UBillboardComponent;
class UMaterialPermuterLoadingBundleAndSwap;
class UCameraComponent;
class UTexture;
#pragma pack(push, 1)
class APortraitPaintingActor : public AActor {
public:
    char pad_248[0x8];
    FString EntityName; // 0x250
    FString SecondaryEntityName; // 0x260
    float PortraitActorRange; // 0x270
    FVector CalloutOffset; // 0x274
    float CameraFarPlane; // 0x280
    FPortraitPaintingComponentState ComponentState; // 0x284
    FName EntityCustomMeshStates; // 0x28c
    EMaterialPermuterLoadingBundleAndSwapType MainPortraitSwapType; // 0x294
    char pad_295[0x3];
    UStaticMeshComponent* PaintingPlane; // 0x298
    UStaticMeshComponent* Frame; // 0x2a0
    USceneComponent* CustomLighting; // 0x2a8
    UBillboardComponent* Light0; // 0x2b0
    UBillboardComponent* Light1; // 0x2b8
    UBillboardComponent* Light2; // 0x2c0
    UCameraComponent* Camera; // 0x2c8
    FName BeaconableObjectID; // 0x2d0
    UTexture* BackgroundTexture; // 0x2d8
    UTexture* FrameMaskTexture; // 0x2e0
    UTexture* CanvasNormalTexture; // 0x2e8
    UTexture* CanvasRoughnessTexture; // 0x2f0
    float NormalIntensity; // 0x2f8
    float TextureTiling; // 0x2fc
    float FlattenPercent; // 0x300
    float RotationOffsetInDegrees; // 0x304
    float SkinNormalSoftness; // 0x308
    float SkinSpecularScale; // 0x30c
    float SkinScatterScale; // 0x310
    FLinearColor SkinSubsurfaceColor; // 0x314
    float BottomFadeHeight; // 0x324
    float BottomFadeStrength; // 0x328
    FLinearColor LightingPointColor_0; // 0x32c
    float LightingPointIntensity_0; // 0x33c
    FLinearColor LightingPointColor_1; // 0x340
    float LightingPointIntensity_1; // 0x350
    FLinearColor LightingPointColor_2; // 0x354
    float LightingPointIntensity_2; // 0x364
    UMaterialPermuterLoadingBundleAndSwap* MainSwap; // 0x368
    bool bReadyForEntities; // 0x370
    char pad_371[0x7];
    FPortraitPaintingEntities Entities; // 0x378
    UMaterialInstanceDynamic* PaintingMaterial; // 0x388
    char pad_390[0x8];
    static APortraitPaintingActor* StaticClass();
    void SetPaintingFrameMask(UTexture* PaintingFrameMask);
    void SetPaintingBackground(UTexture* PaintingBackground);
    void OnFleshLoaded(AActor* Actor, UScheduledEntity* ScheduledEntity);
    void OnCharacterLoadComplete(AActor* Actor);
}; // Size: 0x398
#pragma pack(pop)
