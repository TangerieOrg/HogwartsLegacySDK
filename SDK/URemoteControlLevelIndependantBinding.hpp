#pragma once
#include <cstdint>
#include "URemoteControlBinding.hpp"
#pragma pack(push, 1)
class URemoteControlLevelIndependantBinding : public URemoteControlBinding {
public:
    char pad_38[0x28];
    static URemoteControlLevelIndependantBinding* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
