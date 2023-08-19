#pragma once
#include <cstdint>
#include "UStationStoryProp.hpp"
class UStaticMesh;
#pragma pack(push, 1)
class UStationStoryStaticMeshProp : public UStationStoryProp {
public:
    UStaticMesh* StaticMesh; // 0x38
    static UStationStoryStaticMeshProp* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
