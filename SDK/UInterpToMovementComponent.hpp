#pragma once
#include <cstdint>
#include "EInterpToBehaviourType.hpp"
#include "ETeleportType.hpp"
#include "FInterpControlPoint.hpp"
#include "FVector.hpp"
#include "UMovementComponent.hpp"
struct FHitResult;
#pragma pack(push, 1)
class UInterpToMovementComponent : public UMovementComponent {
public:
    float Duration; // 0x108
    uint8_t bPauseOnImpact : 1; // 0x10c
    uint8_t pad_bitfield_10c_1 : 7;
    char pad_10d[0x3];
    bool bSweep; // 0x110
    ETeleportType TeleportType; // 0x111
    EInterpToBehaviourType BehaviourType; // 0x112
    bool bCheckIfStillInWorld; // 0x113
    uint8_t bForceSubStepping : 1; // 0x114
    uint8_t pad_bitfield_114_1 : 7;
    char pad_115[0x53];
    float MaxSimulationTimeStep; // 0x168
    int32_t MaxSimulationIterations; // 0x16c
    TArray<FInterpControlPoint> ControlPoints; // 0x170
    char pad_180[0x28];
    static UInterpToMovementComponent* StaticClass();
    void StopSimulating(FHitResult& HitResult);
    void RestartMovement(float InitialDirection);
    void ResetControlPoints();
    void OnInterpToWaitEndDelegate__DelegateSignature(FHitResult& ImpactResult, float Time);
    void OnInterpToWaitBeginDelegate__DelegateSignature(FHitResult& ImpactResult, float Time);
    void OnInterpToStopDelegate__DelegateSignature(FHitResult& ImpactResult, float Time);
    void OnInterpToReverseDelegate__DelegateSignature(FHitResult& ImpactResult, float Time);
    void OnInterpToResetDelegate__DelegateSignature(FHitResult& ImpactResult, float Time);
    void FinaliseControlPoints();
    void AddControlPointPosition(FVector Pos, bool bPositionIsRelative);
}; // Size: 0x1a8
#pragma pack(pop)
