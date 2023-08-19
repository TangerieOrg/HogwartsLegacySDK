#pragma once
#include <cstdint>
#include "ELocalFrameMode.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UPolyEditCommonProperties : public UInteractiveToolPropertySet {
public:
    bool bShowWireframe; // 0x60
    char pad_61[0x3];
    ELocalFrameMode LocalFrameMode; // 0x64
    bool bLockRotation; // 0x68
    bool bSnapToWorldGrid; // 0x69
    char pad_6a[0x6];
    static UPolyEditCommonProperties* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
