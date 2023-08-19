#pragma once
#include <cstdint>
#include "FNPC_OptimizationSettings.hpp"
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class UNPC_SystemSettings : public UDeveloperSettings {
public:
    FNPC_OptimizationSettings Settings; // 0x38
    float PlayerRelTargetProximityDist; // 0x60
    float PlayerRelTargetTrackingChangeTime; // 0x64
    float TeleportMoveGlobalTimer; // 0x68
    float TeleportMoveStuckTimer; // 0x6c
    float TooCloseCounterAttackGlobalTimer; // 0x70
    float TooCloseCounterAttackConsiderationTimer; // 0x74
    float CombatQBUpdateBudget; // 0x78
    char pad_7c[0x4];
    static UNPC_SystemSettings* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
