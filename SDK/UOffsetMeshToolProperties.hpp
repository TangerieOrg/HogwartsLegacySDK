#pragma once
#include <cstdint>
#include "EOffsetMeshToolOffsetType.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UOffsetMeshToolProperties : public UInteractiveToolPropertySet {
public:
    EOffsetMeshToolOffsetType OffsetType; // 0x60
    char pad_61[0x3];
    float Distance; // 0x64
    bool bCreateShell; // 0x68
    char pad_69[0x7];
    static UOffsetMeshToolProperties* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
