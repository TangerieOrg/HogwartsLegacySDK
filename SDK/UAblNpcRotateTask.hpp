#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblNpcRotateTask : public UAblAbilityTask {
public:
    bool bRotateAroundX; // 0x70
    char pad_71[0x3];
    float MinRotationSpeedX; // 0x74
    float MaxRotationSpeedX; // 0x78
    bool bRotateAroundY; // 0x7c
    char pad_7d[0x3];
    float MinRotationSpeedY; // 0x80
    float MaxRotationSpeedY; // 0x84
    bool bRotateAroundZ; // 0x88
    char pad_89[0x3];
    float MinRotationSpeedZ; // 0x8c
    float MaxRotationSpeedZ; // 0x90
    char pad_94[0x4];
    static UAblNpcRotateTask* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
