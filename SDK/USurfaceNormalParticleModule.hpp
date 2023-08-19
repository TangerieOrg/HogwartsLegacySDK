#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UParticleModuleLocationStaticMesh.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class USurfaceNormalParticleModule : public UParticleModuleLocationStaticMesh {
public:
    FVector LimitToDirection; // 0x68
    char pad_74[0x4];
    UCurveFloat* FalloffCurve; // 0x78
    static USurfaceNormalParticleModule* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
