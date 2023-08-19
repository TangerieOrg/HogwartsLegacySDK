#pragma once
#include <cstdint>
#include "FRigidBodyContactInfo.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FCollisionImpactData {
    TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
    FVector TotalNormalImpulse; // 0x10
    FVector TotalFrictionImpulse; // 0x1c
    bool bIsVelocityDeltaUnderThreshold; // 0x28
    char pad_29[0x7];
}; // Size: 0x30
#pragma pack(pop)
