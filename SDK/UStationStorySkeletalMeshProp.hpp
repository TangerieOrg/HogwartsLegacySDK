#pragma once
#include <cstdint>
#include "UStationStoryProp.hpp"
class USkeletalMesh;
#pragma pack(push, 1)
class UStationStorySkeletalMeshProp : public UStationStoryProp {
public:
    USkeletalMesh* SkeletalMesh; // 0x38
    static UStationStorySkeletalMeshProp* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
