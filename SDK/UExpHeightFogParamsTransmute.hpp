#pragma once
#include <cstdint>
#include "UExpHeightFogParams.hpp"
#pragma pack(push, 1)
class UExpHeightFogParamsTransmute : public UExpHeightFogParams {
public:
    static UExpHeightFogParamsTransmute* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
