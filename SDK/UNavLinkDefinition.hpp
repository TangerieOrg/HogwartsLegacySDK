#pragma once
#include <cstdint>
#include "FNavigationLink.hpp"
#include "FNavigationSegmentLink.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UNavLinkDefinition : public UObject {
public:
    TArray<FNavigationLink> Links; // 0x28
    TArray<FNavigationSegmentLink> SegmentLinks; // 0x38
    char pad_48[0x8];
    static UNavLinkDefinition* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
