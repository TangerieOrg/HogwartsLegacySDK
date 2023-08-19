#pragma once
#include <cstdint>
#include "UNPC_MobilitySpeedChoice.hpp"
#pragma pack(push, 1)
class UGoblin_AttackSpeedChoice : public UNPC_MobilitySpeedChoice {
public:
    float SplitDistance; // 0x28
    float ChangeTime; // 0x2c
    float CloserSpeed; // 0x30
    float FurtherSpeed; // 0x34
    float RetreatDistance; // 0x38
    float RetreatTimeSinceAttack; // 0x3c
    float RetreatSpeed; // 0x40
    char pad_44[0x4];
    static UGoblin_AttackSpeedChoice* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
