#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UObject.hpp"
class UMovementComponent;
#pragma pack(push, 1)
class UAvoidanceManager : public UObject {
public:
    char pad_28[0x8];
    float DefaultTimeToLive; // 0x30
    float LockTimeAfterAvoid; // 0x34
    float LockTimeAfterClean; // 0x38
    float DeltaTimeToPredict; // 0x3c
    float ArtificialRadiusExpansion; // 0x40
    float TestHeightDifference; // 0x44
    float HeightCheckMargin; // 0x48
    char pad_4c[0x94];
    static UAvoidanceManager* StaticClass();
    bool RegisterMovementComponent(UMovementComponent* MovementComp, float AvoidanceWeight);
    int32_t GetObjectCount();
    int32_t GetNewAvoidanceUID();
    FVector GetAvoidanceVelocityForComponent(UMovementComponent* MovementComp);
}; // Size: 0xe0
#pragma pack(pop)
