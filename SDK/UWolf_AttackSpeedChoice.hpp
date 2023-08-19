#pragma once
#include <cstdint>
#include "UNPC_MobilitySpeedChoice.hpp"
#pragma pack(push, 1)
class UWolf_AttackSpeedChoice : public UNPC_MobilitySpeedChoice {
public:
    float CloseSpeed; // 0x28
    float SplitDistance; // 0x2c
    float FarSpeed; // 0x30
    float RetreatDistance; // 0x34
    float RetreatSpeed; // 0x38
    float RetreatTime; // 0x3c
    float ChangeTime; // 0x40
    char pad_44[0x4];
    static UWolf_AttackSpeedChoice* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
