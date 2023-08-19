#pragma once
#include <cstdint>
#include "FNavigationLink.hpp"
#include "UPrimitiveComponent.hpp"
#pragma pack(push, 1)
class UNavLinkComponent : public UPrimitiveComponent {
public:
    char pad_480[0x8];
    TArray<FNavigationLink> Links; // 0x488
    char pad_498[0x8];
    static UNavLinkComponent* StaticClass();
}; // Size: 0x4a0
#pragma pack(pop)
