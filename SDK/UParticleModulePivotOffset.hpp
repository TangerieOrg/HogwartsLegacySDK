#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UParticleModuleLocationBase.hpp"
#pragma pack(push, 1)
class UParticleModulePivotOffset : public UParticleModuleLocationBase {
public:
    FVector2D PivotOffset; // 0x30
    static UParticleModulePivotOffset* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
