#pragma once
#include <cstdint>
#include "UMovementComponent.hpp"
class UShadowSprintData;
class UParticleSystem;
class UParticleSystemComponent;
#pragma pack(push, 1)
class UShadowSprintMovementComponent : public UMovementComponent {
public:
    int32_t MaxSimulationIterations; // 0x108
    float MaxSimulationTimeStep; // 0x10c
    UShadowSprintData* ShadowSprintData; // 0x110
    UParticleSystem* BroomTrailEmitter; // 0x118
    UParticleSystemComponent* BroomTrailEmitterSystemComponent; // 0x120
    bool bClearAccumulatedForces; // 0x128
    bool bOnGround; // 0x129
    char pad_12a[0x2];
    float CurrentPitch; // 0x12c
    char pad_130[0x1a0];
    static UShadowSprintMovementComponent* StaticClass();
    void SetVerticalImpulse(float Val);
}; // Size: 0x2d0
#pragma pack(pop)
