#pragma once
#include <cstdint>
#include "UBlendDomainVisibilityComponent.hpp"
#pragma pack(push, 1)
class UBlendDomainDelegateVisibilityComponent : public UBlendDomainVisibilityComponent {
public:
    char pad_260[0x10];
    static UBlendDomainDelegateVisibilityComponent* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
