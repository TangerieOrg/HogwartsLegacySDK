#pragma once
#include <cstdint>
#include "FWorldFXOctreeCreationSettings.hpp"
#include "FWorldFXOctreeUnculledFX.hpp"
class UWorldFXOctree;
#pragma pack(push, 1)
struct FWorldFXOctreeStack {
    TArray<UWorldFXOctree*> OctreeStack; // 0x0
    FWorldFXOctreeCreationSettings CreationSettings; // 0x10
    FWorldFXOctreeUnculledFX UnculledFX; // 0x18
}; // Size: 0x70
#pragma pack(pop)
