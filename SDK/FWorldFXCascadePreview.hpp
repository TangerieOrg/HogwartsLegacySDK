#pragma once
#include <cstdint>
#include "FWorldFXCascadeSystem.hpp"
#include "FWorldFXPreview.hpp"
class UParticleSystemComponent;
#pragma pack(push, 1)
struct FWorldFXCascadePreview : public FWorldFXPreview {
    UParticleSystemComponent* CascadeFXPreview; // 0x8
    FWorldFXCascadeSystem CurrentFX; // 0x10
}; // Size: 0x78
#pragma pack(pop)
