#pragma once
#include <cstdint>
#include "ULightComponentStateBoolMap.hpp"
#pragma pack(push, 1)
class ULightComponentStateCastTranslucentShadows : public ULightComponentStateBoolMap {
public:
    bool bCastTranslucentShadows; // 0x28
    char pad_29[0x7];
    static ULightComponentStateCastTranslucentShadows* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
