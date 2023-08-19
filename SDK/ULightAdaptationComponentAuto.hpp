#pragma once
#include <cstdint>
#include "ULightAdaptationComponent.hpp"
#pragma pack(push, 1)
class ULightAdaptationComponentAuto : public ULightAdaptationComponent {
public:
    bool bDeepScanChildren; // 0x2c0
    char pad_2c1[0xf];
    static ULightAdaptationComponentAuto* StaticClass();
}; // Size: 0x2d0
#pragma pack(pop)
