#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UDrawPolygonToolSnapProperties : public UInteractiveToolPropertySet {
public:
    bool bEnableSnapping; // 0x60
    bool bSnapToWorldGrid; // 0x61
    bool bSnapToVertices; // 0x62
    bool bSnapToEdges; // 0x63
    bool bSnapToAngles; // 0x64
    bool bSnapToLengths; // 0x65
    char pad_66[0x2];
    float SegmentLength; // 0x68
    bool bHitSceneObjects; // 0x6c
    char pad_6d[0x3];
    float HitNormalOffset; // 0x70
    char pad_74[0x4];
    static UDrawPolygonToolSnapProperties* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
