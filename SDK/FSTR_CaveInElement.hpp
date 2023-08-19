#pragma once
#include <cstdint>
#include "FSTR_CaveInParticleElement.hpp"
#include "FSTR_CaveIn_AnimMeshElement.hpp"
#pragma pack(push, 1)
struct FSTR_CaveInElement {
    float ElementDelay_8_BE940E8A4278C1AA5D72E0AD3D5A372B; // 0x0
    char pad_4[0x4];
    TArray<FSTR_CaveInParticleElement> ParticleSystem_45_872F1E0F49BD5CFBAC823490131A3B8B; // 0x8
    TArray<FSTR_CaveIn_AnimMeshElement> MeshElements_43_E679323F4160437797890C801A352B84; // 0x18
}; // Size: 0x28
#pragma pack(pop)
