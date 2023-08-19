#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FActorToHardSwap {
    char pad_0[0x8];
    TArray<void*> Meshes; // 0x8
    int32_t ProcessMesh; // 0x18
    int32_t SwapMesh; // 0x1c
    int32_t MaterialsSwapped; // 0x20
    uint8_t bMeshesInitialized : 1; // 0x24
    uint8_t bHaveBroadcastSwapped : 1; // 0x24
    uint8_t bChildrenAreReady : 1; // 0x24
    uint8_t pad_bitfield_24_3 : 5;
    char pad_25[0x3];
}; // Size: 0x28
#pragma pack(pop)
