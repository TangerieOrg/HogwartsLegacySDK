#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UPrimitiveComponent.hpp"
#pragma pack(push, 1)
class UGizmoBaseComponent : public UPrimitiveComponent {
public:
    FLinearColor Color; // 0x480
    float HoverSizeMultiplier; // 0x490
    float PixelHitDistanceThreshold; // 0x494
    char pad_498[0x8];
    static UGizmoBaseComponent* StaticClass();
    void UpdateWorldLocalState(bool bWorldIn);
    void UpdateHoverState(bool bHoveringIn);
}; // Size: 0x4a0
#pragma pack(pop)
