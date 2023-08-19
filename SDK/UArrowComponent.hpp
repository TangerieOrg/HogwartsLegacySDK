#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FLinearColor.hpp"
#include "UPrimitiveComponent.hpp"
#pragma pack(push, 1)
class UArrowComponent : public UPrimitiveComponent {
public:
    FColor ArrowColor; // 0x480
    float ArrowSize; // 0x484
    float ArrowLength; // 0x488
    float ScreenSize; // 0x48c
    uint8_t bIsScreenSizeScaled : 1; // 0x490
    uint8_t bTreatAsASprite : 1; // 0x490
    uint8_t pad_bitfield_490_2 : 6;
    char pad_491[0xf];
    static UArrowComponent* StaticClass();
    void SetArrowColor(FLinearColor NewColor);
}; // Size: 0x4a0
#pragma pack(pop)
