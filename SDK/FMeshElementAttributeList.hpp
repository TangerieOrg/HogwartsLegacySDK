#pragma once
#include <cstdint>
#include "FMeshElementAttributeData.hpp"
#pragma pack(push, 1)
struct FMeshElementAttributeList {
    TArray<FMeshElementAttributeData> Attributes; // 0x0
}; // Size: 0x10
#pragma pack(pop)
