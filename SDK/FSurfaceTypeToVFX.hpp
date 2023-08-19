#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
class UParticleSystem;
#pragma pack(push, 1)
struct FSurfaceTypeToVFX : public FTableRowBase {
    FName SurfaceTypeName; // 0x8
    UParticleSystem* VFX; // 0x10
}; // Size: 0x18
#pragma pack(pop)
