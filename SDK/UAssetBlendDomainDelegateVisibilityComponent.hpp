#pragma once
#include <cstdint>
#include "UAssetBlendDomainVisibilityComponent.hpp"
#pragma pack(push, 1)
class UAssetBlendDomainDelegateVisibilityComponent : public UAssetBlendDomainVisibilityComponent {
public:
    char pad_230[0x10];
    static UAssetBlendDomainDelegateVisibilityComponent* StaticClass();
}; // Size: 0x240
#pragma pack(pop)
