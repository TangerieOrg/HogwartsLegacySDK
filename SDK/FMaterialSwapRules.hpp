#pragma once
#include <cstdint>
#include "FMaterialSwapActorRules.hpp"
#include "FMaterialSwapDependentRules.hpp"
#include "FMaterialSwapMeshRules.hpp"
#pragma pack(push, 1)
struct FMaterialSwapRules {
    FMaterialSwapMeshRules MeshRules; // 0x0
    FMaterialSwapActorRules ActorRules; // 0x48
    FMaterialSwapDependentRules DependentRules; // 0x88
    bool bFailOnNoMatches; // 0xd8
    char pad_d9[0x7];
}; // Size: 0xe0
#pragma pack(pop)
