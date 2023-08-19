#pragma once
#include <cstdint>
#include "EGroupEdgeInsertionMode.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UGroupEdgeInsertionProperties : public UInteractiveToolPropertySet {
public:
    EGroupEdgeInsertionMode InsertionMode; // 0x60
    bool bWireframe; // 0x64
    char pad_65[0x3];
    double VertexTolerance; // 0x68
    static UGroupEdgeInsertionProperties* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
