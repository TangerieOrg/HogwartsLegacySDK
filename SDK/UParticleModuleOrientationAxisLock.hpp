#pragma once
#include <cstdint>
#include "EParticleAxisLock.hpp"
#include "UParticleModuleOrientationBase.hpp"
#pragma pack(push, 1)
class UParticleModuleOrientationAxisLock : public UParticleModuleOrientationBase {
public:
    EParticleAxisLock LockAxisFlags; // 0x30
    char pad_31[0x7];
    static UParticleModuleOrientationAxisLock* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
