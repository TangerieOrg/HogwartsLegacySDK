#pragma once
#include <cstdint>
#include "USpawn_BySkeletalMesh.hpp"
class UObjectArchitectAsset;
#pragma pack(push, 1)
class USpawn_BySkeletalMesh_WithCreatureAudio : public USpawn_BySkeletalMesh {
public:
    UObjectArchitectAsset* CreatureAudioAsset; // 0x68
    static USpawn_BySkeletalMesh_WithCreatureAudio* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
