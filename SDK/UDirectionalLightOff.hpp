#pragma once
#include <cstdint>
#include "UDirectionalLightParams.hpp"
#pragma pack(push, 1)
class UDirectionalLightOff : public UDirectionalLightParams {
public:
    bool bForceVisibilityOff; // 0x28
    char pad_29[0x7];
    static UDirectionalLightOff* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
