#pragma once
#include <cstdint>
#include "ADefaultPawn.hpp"
#include "FVector.hpp"
class UCurveVector;
class AActor;
class UClass;
class UCapsuleComponent;
class UUserWidget;
class UPrimitiveComponent;
struct FHitResult;
#pragma pack(push, 1)
class APhoenixHoverDronePawn : public ADefaultPawn {
public:
    float MaxAccelToGravRatio; // 0x2d0
    float DroneTiltInterpSpeed_Accel; // 0x2d4
    float DroneTiltInterpSpeed_Decel; // 0x2d8
    float ZoomRate; // 0x2dc
    float FOVInterpSpeed; // 0x2e0
    float maxFOV; // 0x2e4
    float minFOV; // 0x2e8
    float SpeedAdjustment; // 0x2ec
    float SpeedAdjustRate; // 0x2f0
    float SpeedAdjustMin; // 0x2f4
    float SpeedAdjustMax; // 0x2f8
    float MinIconScale; // 0x2fc
    float MinIconDist; // 0x300
    float MaxIconDist; // 0x304
    bool bAutoFocus; // 0x308
    char pad_309[0x3];
    float AutoFocusInterpSpeed; // 0x30c
    float CameraApertureFStop; // 0x310
    char pad_314[0x4];
    UCurveVector* ScreenFringeFOVCurve; // 0x318
    FVector TouchingActorEntryPosition; // 0x320
    char pad_32c[0x4];
    UClass* m_progressWidgetClass; // 0x330
    UClass* m_followWidgetClass; // 0x338
    UClass* m_filterComponentClass; // 0x340
    UClass* m_MinimapWidgetClass; // 0x348
    char pad_350[0x18];
    UCapsuleComponent* FoliageOverlapComponent; // 0x368
    UCapsuleComponent* ActorOverlapComponent; // 0x370
    char pad_378[0x40];
    UUserWidget* m_pMinimapWidget; // 0x3b8
    UUserWidget* m_pProgressWidget; // 0x3c0
    UUserWidget* m_pFollowWidget; // 0x3c8
    static APhoenixHoverDronePawn* StaticClass();
    bool IsMaintainingConstantAltitude();
    float GetAltitude();
    void AllowIcons(bool InVal);
    void ActorOverlapEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void ActorOverlapBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& OverlapInfo);
}; // Size: 0x3d0
#pragma pack(pop)
