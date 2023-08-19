#pragma once
#include <cstdint>
#include "EDrawPolygonDrawMode.hpp"
#include "EDrawPolygonOutputMode.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UDrawPolygonToolStandardProperties : public UInteractiveToolPropertySet {
public:
    EDrawPolygonDrawMode PolygonType; // 0x60
    EDrawPolygonOutputMode OutputMode; // 0x61
    char pad_62[0x2];
    float FeatureSizeRatio; // 0x64
    float ExtrudeHeight; // 0x68
    int32_t Steps; // 0x6c
    bool bAllowSelfIntersections; // 0x70
    bool bShowGizmo; // 0x71
    char pad_72[0x6];
    static UDrawPolygonToolStandardProperties* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
