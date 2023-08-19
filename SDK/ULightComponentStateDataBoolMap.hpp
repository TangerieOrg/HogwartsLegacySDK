#pragma once
#include <cstdint>
#include "ULightComponentStateData.hpp"
#pragma pack(push, 1)
class ULightComponentStateDataBoolMap : public ULightComponentStateData {
public:
    char pad_30[0x50];
    static ULightComponentStateDataBoolMap* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
