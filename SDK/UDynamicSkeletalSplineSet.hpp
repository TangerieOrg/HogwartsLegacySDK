#pragma once
#include <cstdint>
#include "UDynamicSplineSet.hpp"
class USkeletalMesh;
#pragma pack(push, 1)
class UDynamicSkeletalSplineSet : public UDynamicSplineSet {
public:
    USkeletalMesh* ReferenceMesh; // 0x48
    static UDynamicSkeletalSplineSet* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
