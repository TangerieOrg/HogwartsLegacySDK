#pragma once
#include <cstdint>
class URenderSettingsCustomBlendDomain;
#pragma pack(push, 1)
struct FSimpleBlendDomain {
    TArray<URenderSettingsCustomBlendDomain*> Blends; // 0x0
}; // Size: 0x10
#pragma pack(pop)
