#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAvatarPresetPieceInfo {
    FName MeshName; // 0x0
    bool bMeshSettable; // 0x8
    char pad_9[0x7];
    TArray<FName> Parameters; // 0x10
}; // Size: 0x20
#pragma pack(pop)
