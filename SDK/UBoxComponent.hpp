#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UShapeComponent.hpp"
#pragma pack(push, 1)
class UBoxComponent : public UShapeComponent {
public:
    char pad_4a0[0x4];
    float LineThickness; // 0x4a4
    char pad_4a8[0x8];
    static UBoxComponent* StaticClass();
    void SetBoxExtent(FVector InBoxExtent, bool bUpdateOverlaps);
    FVector GetUnscaledBoxExtent();
    FVector GetScaledBoxExtent();
}; // Size: 0x4b0
#pragma pack(pop)
