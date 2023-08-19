#pragma once
#include <cstdint>
#include "UQualifierTask.hpp"
#pragma pack(push, 1)
class UManageActionEnergyQualifierTask : public UQualifierTask {
public:
    float EnergyBurnTime; // 0x28
    float EnergyResetTime; // 0x2c
    static UManageActionEnergyQualifierTask* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
