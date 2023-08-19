#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UEditMeshPolygonsToolActionPropertySet : public UInteractiveToolPropertySet {
public:
    char pad_60[0x8];
    static UEditMeshPolygonsToolActionPropertySet* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
