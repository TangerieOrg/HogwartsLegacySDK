#pragma once
#include <cstdint>
#include "FMercuna3DMovementProperties.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UPawnMovementComponent.hpp"
#pragma pack(push, 1)
class UMercuna3DMovementComponent : public UPawnMovementComponent {
public:
    char pad_150[0x20];
    FMercuna3DMovementProperties MovementProperties; // 0x170
    uint8_t bPositionCorrected : 1; // 0x1ac
    uint8_t pad_bitfield_1ac_1 : 7;
    char pad_1ad[0x3];
    FVector PendingImpulseToApply; // 0x1b0
    FVector Acceleration; // 0x1bc
    FVector AngularVelocity; // 0x1c8
    char pad_1d4[0x1c];
    float MaxSimulationTimeStep; // 0x1f0
    int32_t MaxSimulationIterations; // 0x1f4
    char pad_1f8[0x8];
    static UMercuna3DMovementComponent* StaticClass();
    void SetVelocity(FVector NewVelocity);
    void SetAngularVelocity(FVector NewAngVel);
    FVector GetLocalVelocity();
    FRotator GetLocalRotationRate();
    void AddImpulse(FVector Impulse);
}; // Size: 0x200
#pragma pack(pop)
