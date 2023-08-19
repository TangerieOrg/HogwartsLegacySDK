#pragma once
#include <cstdint>
#include "ESpawnAreaEnum.hpp"
#include "UParticleModuleLocationStaticMesh.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UIncendioParticleModule : public UParticleModuleLocationStaticMesh {
public:
    ESpawnAreaEnum SpawnArea; // 0x68
    char pad_69[0x7];
    UCurveFloat* FalloffCurve; // 0x70
    static UIncendioParticleModule* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
