#pragma once
#include <cstdint>
#include "ETargetOrientation.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
class ATargetPoint;
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#pragma pack(push, 1)
class UMoveToPointPuzzleComponent : public UActorComponent {
public:
    TArray<ATargetPoint*> TargetPointArray; // 0xc8
    TArray<ATargetPoint*> FinalPointArray; // 0xd8
    TArray<ATargetPoint*> BlockerArray; // 0xe8
    TArray<AActor*> DynamicBlockerArray; // 0xf8
    float TargetThreshold; // 0x108
    float Friction; // 0x10c
    float BounceFriction; // 0x110
    float CollisionSpeedAdjustment; // 0x114
    ETargetOrientation TargetOrientation; // 0x118
    bool bMustMatchFinalOrientation; // 0x119
    char pad_11a[0x2];
    uint32_t FinalOrientation; // 0x11c
    char pad_120[0x88];
    static UMoveToPointPuzzleComponent* StaticClass();
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& OverlapInfo);
    bool Move(FVector Direction, float Speed);
}; // Size: 0x1a8
#pragma pack(pop)
