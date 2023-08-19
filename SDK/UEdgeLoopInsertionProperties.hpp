#pragma once
#include <cstdint>
#include "EEdgeLoopInsertionMode.hpp"
#include "EEdgeLoopPositioningMode.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UEdgeLoopInsertionProperties : public UInteractiveToolPropertySet {
public:
    EEdgeLoopPositioningMode PositionMode; // 0x60
    EEdgeLoopInsertionMode InsertionMode; // 0x64
    int32_t NumLoops; // 0x68
    char pad_6c[0x4];
    double ProportionOffset; // 0x70
    double DistanceOffset; // 0x78
    bool bInteractive; // 0x80
    bool bFlipOffsetDirection; // 0x81
    bool bWireframe; // 0x82
    char pad_83[0x5];
    double VertexTolerance; // 0x88
    static UEdgeLoopInsertionProperties* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
