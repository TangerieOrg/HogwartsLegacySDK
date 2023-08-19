#pragma once
#include <cstdint>
#include "ULightComponentStateData.hpp"
#pragma pack(push, 1)
class ULightComponentStateDataFloatMap : public ULightComponentStateData {
public:
    char pad_30[0x50];
    static ULightComponentStateDataFloatMap* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
