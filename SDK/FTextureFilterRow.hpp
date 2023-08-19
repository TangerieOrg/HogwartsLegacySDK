#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FTextureFilterRow {
    FName DisplayName; // 0x0
    FName ParamName; // 0x8
    FString MeshName; // 0x10
}; // Size: 0x20
#pragma pack(pop)
