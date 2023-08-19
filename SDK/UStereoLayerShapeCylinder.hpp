#pragma once
#include <cstdint>
#include "UStereoLayerShape.hpp"
#pragma pack(push, 1)
class UStereoLayerShapeCylinder : public UStereoLayerShape {
public:
    float Radius; // 0x28
    float OverlayArc; // 0x2c
    int32_t Height; // 0x30
    char pad_34[0x4];
    static UStereoLayerShapeCylinder* StaticClass();
    void SetRadius(float InRadius);
    void SetOverlayArc(float InOverlayArc);
    void SetHeight(int32_t InHeight);
}; // Size: 0x38
#pragma pack(pop)
