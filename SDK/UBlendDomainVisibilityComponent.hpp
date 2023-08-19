#pragma once
#include <cstdint>
#include "FBlendDomain.hpp"
#include "UBlendDomainVisibilityComponentBase.hpp"
#pragma pack(push, 1)
class UBlendDomainVisibilityComponent : public UBlendDomainVisibilityComponentBase {
public:
    char pad_230[0x30];
    static UBlendDomainVisibilityComponent* StaticClass();
}; // Size: 0x260
#pragma pack(pop)
