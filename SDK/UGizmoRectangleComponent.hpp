#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UGizmoBaseComponent.hpp"
#pragma pack(push, 1)
class UGizmoRectangleComponent : public UGizmoBaseComponent {
public:
    FVector DirectionX; // 0x4a0
    FVector DirectionY; // 0x4ac
    float OffsetX; // 0x4b8
    float OffsetY; // 0x4bc
    float LengthX; // 0x4c0
    float LengthY; // 0x4c4
    float Thickness; // 0x4c8
    uint8_t SegmentFlags; // 0x4cc
    char pad_4cd[0x3];
    static UGizmoRectangleComponent* StaticClass();
}; // Size: 0x4d0
#pragma pack(pop)
