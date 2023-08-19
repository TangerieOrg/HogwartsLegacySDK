#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UPathFollowingComponent.hpp"
#pragma pack(push, 1)
class UCrowdFollowingComponent : public UPathFollowingComponent {
public:
    char pad_268[0x18];
    FVector CrowdAgentMoveDirection; // 0x280
    char pad_28c[0x24];
    static UCrowdFollowingComponent* StaticClass();
    void SuspendCrowdSteering(bool bSuspend);
}; // Size: 0x2b0
#pragma pack(pop)
