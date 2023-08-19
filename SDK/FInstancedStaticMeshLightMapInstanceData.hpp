#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FInstancedStaticMeshLightMapInstanceData {
    FTransform Transform; // 0x0
    TArray<FGuid> MapBuildDataIds; // 0x30
}; // Size: 0x40
#pragma pack(pop)
