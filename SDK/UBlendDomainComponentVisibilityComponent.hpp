#pragma once
#include <cstdint>
#include "UBlendDomainVisibilityComponent.hpp"
#pragma pack(push, 1)
class UBlendDomainComponentVisibilityComponent : public UBlendDomainVisibilityComponent {
public:
    bool bSetDitheredAlpha; // 0x260
    char pad_261[0xf];
    static UBlendDomainComponentVisibilityComponent* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
