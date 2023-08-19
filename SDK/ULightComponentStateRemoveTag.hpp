#pragma once
#include <cstdint>
#include "ULightComponentStateTag.hpp"
#pragma pack(push, 1)
class ULightComponentStateRemoveTag : public ULightComponentStateTag {
public:
    static ULightComponentStateRemoveTag* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
