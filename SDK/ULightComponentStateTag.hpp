#pragma once
#include <cstdint>
#include "ULightComponentStateBoolMap.hpp"
#pragma pack(push, 1)
class ULightComponentStateTag : public ULightComponentStateBoolMap {
public:
    FName Tag; // 0x28
    static ULightComponentStateTag* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
