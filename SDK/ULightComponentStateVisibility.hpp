#pragma once
#include <cstdint>
#include "ULightComponentStateBoolMap.hpp"
#pragma pack(push, 1)
class ULightComponentStateVisibility : public ULightComponentStateBoolMap {
public:
    bool bVisible; // 0x28
    char pad_29[0x7];
    static ULightComponentStateVisibility* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
