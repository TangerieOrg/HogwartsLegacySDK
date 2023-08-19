#pragma once
#include <cstdint>
#include "UAssetBlendDomainVisibilityComponent.hpp"
#pragma pack(push, 1)
class UAssetBlendDomainComponentVisibilityComponent : public UAssetBlendDomainVisibilityComponent {
public:
    bool bSetDitheredAlpha; // 0x230
    char pad_231[0xf];
    static UAssetBlendDomainComponentVisibilityComponent* StaticClass();
}; // Size: 0x240
#pragma pack(pop)
