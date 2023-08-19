#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UCleanNameToDisplayName : public UDataAsset {
public:
    char pad_30[0x50];
    static UCleanNameToDisplayName* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
