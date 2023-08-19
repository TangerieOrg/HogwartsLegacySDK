#pragma once
#include <cstdint>
#include "ESmoothMeshToolSmoothType.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class USmoothMeshToolProperties : public UInteractiveToolPropertySet {
public:
    ESmoothMeshToolSmoothType SmoothingType; // 0x60
    char pad_61[0x7];
    static USmoothMeshToolProperties* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
