#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FDbTextureRow : public FTableRowBase {
    FName DisplayName; // 0x8
    FName ParamName; // 0x10
    FString MeshName; // 0x18
    char pad_28[0x28];
}; // Size: 0x50
#pragma pack(pop)
