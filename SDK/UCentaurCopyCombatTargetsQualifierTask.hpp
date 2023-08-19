#pragma once
#include <cstdint>
#include "UQualifierTask.hpp"
#pragma pack(push, 1)
class UCentaurCopyCombatTargetsQualifierTask : public UQualifierTask {
public:
    float WeightThreshold; // 0x28
    char pad_2c[0x4];
    static UCentaurCopyCombatTargetsQualifierTask* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
