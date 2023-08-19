#pragma once
#include <cstdint>
#include "UDynamicSplineSet.hpp"
class UStaticMesh;
#pragma pack(push, 1)
class UDynamicStaticMeshSplineSet : public UDynamicSplineSet {
public:
    UStaticMesh* ReferenceMesh; // 0x48
    static UDynamicStaticMeshSplineSet* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
