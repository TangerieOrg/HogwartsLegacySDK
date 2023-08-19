#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FHerbStaticMeshMapStruct : public FTableRowBase {
    char pad_8[0x28];
}; // Size: 0x30
#pragma pack(pop)
