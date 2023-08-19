#pragma once
#include <cstdint>
#include "ECollisionGeometryMode.hpp"
#include "ECollisionGeometryType.hpp"
#include "EProjectedHullAxis.hpp"
#include "ESetCollisionGeometryInputMode.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class USetCollisionGeometryToolProperties : public UInteractiveToolPropertySet {
public:
    ECollisionGeometryType GeometryType; // 0x60
    ESetCollisionGeometryInputMode InputMode; // 0x64
    bool bUseWorldSpace; // 0x68
    bool bRemoveContained; // 0x69
    bool bEnableMaxCount; // 0x6a
    char pad_6b[0x1];
    int32_t MaxCount; // 0x6c
    float MinThickness; // 0x70
    bool bDetectBoxes; // 0x74
    bool bDetectSpheres; // 0x75
    bool bDetectCapsules; // 0x76
    bool bSimplifyHulls; // 0x77
    int32_t HullTargetFaceCount; // 0x78
    bool bSimplifyPolygons; // 0x7c
    char pad_7d[0x3];
    float HullTolerance; // 0x80
    EProjectedHullAxis SweepAxis; // 0x84
    bool bAppendToExisting; // 0x88
    char pad_89[0x3];
    ECollisionGeometryMode SetCollisionType; // 0x8c
    static USetCollisionGeometryToolProperties* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
