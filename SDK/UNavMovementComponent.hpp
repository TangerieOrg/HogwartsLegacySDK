#pragma once
#include <cstdint>
#include "FMovementProperties.hpp"
#include "FNavAgentProperties.hpp"
#include "UMovementComponent.hpp"
class UObject;
#pragma pack(push, 1)
class UNavMovementComponent : public UMovementComponent {
public:
    FNavAgentProperties NavAgentProps; // 0x108
    float FixedPathBrakingDistance; // 0x138
    uint8_t bUpdateNavAgentWithOwnersCollision : 1; // 0x13c
    uint8_t bUseAccelerationForPaths : 1; // 0x13c
    uint8_t bUseFixedBrakingDistanceForPaths : 1; // 0x13c
    uint8_t pad_bitfield_13c_3 : 5;
    FMovementProperties MovementState; // 0x13d
    char pad_13e[0x2];
    UObject* PathFollowingComp; // 0x140
    static UNavMovementComponent* StaticClass();
    void StopMovementKeepPathing();
    void StopActiveMovement();
    bool IsSwimming();
    bool IsMovingOnGround();
    bool IsFlying();
    bool IsFalling();
    bool IsCrouching();
}; // Size: 0x148
#pragma pack(pop)
