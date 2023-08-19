#pragma once
#include <cstdint>
#include "ULightComponentStateBoolMap.hpp"
#pragma pack(push, 1)
class ULightComponentStateCastShadows : public ULightComponentStateBoolMap {
public:
    bool bCastShadows; // 0x28
    char pad_29[0x7];
    static ULightComponentStateCastShadows* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
