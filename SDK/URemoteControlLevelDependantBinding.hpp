#pragma once
#include <cstdint>
#include "URemoteControlBinding.hpp"
#pragma pack(push, 1)
class URemoteControlLevelDependantBinding : public URemoteControlBinding {
public:
    char pad_38[0x78];
    static URemoteControlLevelDependantBinding* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
