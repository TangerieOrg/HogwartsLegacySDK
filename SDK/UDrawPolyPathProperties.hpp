#pragma once
#include <cstdint>
#include "EDrawPolyPathHeightMode.hpp"
#include "EDrawPolyPathOutputMode.hpp"
#include "EDrawPolyPathWidthMode.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UDrawPolyPathProperties : public UInteractiveToolPropertySet {
public:
    EDrawPolyPathOutputMode OutputType; // 0x60
    EDrawPolyPathWidthMode WidthMode; // 0x64
    float Width; // 0x68
    EDrawPolyPathHeightMode HeightMode; // 0x6c
    float Height; // 0x70
    float RampStartRatio; // 0x74
    bool bSnapToWorldGrid; // 0x78
    char pad_79[0x7];
    static UDrawPolyPathProperties* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
