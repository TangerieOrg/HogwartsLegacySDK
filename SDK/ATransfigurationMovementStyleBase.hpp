#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FBox.hpp"
#include "FDampedSpringQuat.hpp"
#include "FDampedSpringScalar.hpp"
#include "FDampedSpringVector.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class ATransfigurationPreviewActor;
#pragma pack(push, 1)
class ATransfigurationMovementStyleBase : public AActor {
public:
    ATransfigurationPreviewActor* PreviewActor; // 0x248
    FTransform TargetTransform; // 0x250
    FTransform PreviewTransformOffset; // 0x280
    char pad_2b0[0xe0];
    FVector FootprintExtent; // 0x390
    char pad_39c[0x4];
    TArray<FBox> FootprintRegions; // 0x3a0
    TArray<bool> RegionPlacementBlocked; // 0x3b0
    float LinearInterpolationSpeed; // 0x3c0
    bool bUseSpringDynamics; // 0x3c4
    char pad_3c5[0x3];
    FDampedSpringVector LinearSpring; // 0x3c8
    char pad_3ec[0x4];
    FDampedSpringQuat AngularSpring; // 0x3f0
    FDampedSpringScalar ScaleSpring; // 0x420
    FRuntimeFloatCurve SpringSpeedToTiltAngleCurve; // 0x430
    FRuntimeFloatCurve ObjectBoundsToTiltMultiplierCurve; // 0x4b8
    FRuntimeFloatCurve ObjectBoundsToLinearFrequencyMultiplierCurve; // 0x540
    bool bDisperseNPCs; // 0x5c8
    char pad_5c9[0x17];
    static ATransfigurationMovementStyleBase* StaticClass();
    void UpdateFootprintRegionSizes(FVector& PlacementFootprintSize);
    void StartTransition(float InDuration);
    void ShowDecal(bool bShow);
    void ShowBeamAtLocalLocation(FVector& InLocationLocal);
    void SetWallTransformFromBounds(FVector& LocalExtent, FVector& LocalLocation);
    void SetTransformFromBounds(FVector& LocalExtent, FVector& LocalLocation);
    void SetPlacementRegionTransform();
    void Place();
    void OnPreviewActorDestroyed(AActor* InActor);
    void Lift();
    void ClearLitBeams();
    void CanPlace(bool bCanPlace);
}; // Size: 0x5e0
#pragma pack(pop)
