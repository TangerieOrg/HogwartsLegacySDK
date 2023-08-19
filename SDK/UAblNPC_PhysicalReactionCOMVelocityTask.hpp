#pragma once
#include <cstdint>
#include "EAblNpcReactCapsuleImpulseVelocitySource.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblNPC_PhysicalReactionCOMVelocityTask : public UAblAbilityTask {
public:
    EAblNpcReactCapsuleImpulseVelocitySource VelocitySource; // 0x70
    char pad_71[0x3];
    float Magnitude; // 0x74
    float Angle; // 0x78
    char pad_7c[0x4];
    static UAblNPC_PhysicalReactionCOMVelocityTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
