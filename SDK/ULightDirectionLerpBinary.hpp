#pragma once
#include <cstdint>
#include "ULightDirectionLerpControl.hpp"
#pragma pack(push, 1)
class ULightDirectionLerpBinary : public ULightDirectionLerpControl {
public:
    bool bInvert; // 0x30
    char pad_31[0x7];
    static ULightDirectionLerpBinary* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
