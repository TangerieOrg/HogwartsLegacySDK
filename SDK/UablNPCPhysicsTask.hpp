#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablNPCPhysicsTask : public UAblAbilityTask {
public:
    bool bOverrideCapsulePhysicsSettings; // 0x70
    bool bEnableCapsuleGravity; // 0x71
    bool bSimulateCapsulePhysics; // 0x72
    char pad_73[0x5];
    static UablNPCPhysicsTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
