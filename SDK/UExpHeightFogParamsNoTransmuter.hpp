#pragma once
#include <cstdint>
#include "UExpHeightFogParams.hpp"
#pragma pack(push, 1)
class UExpHeightFogParamsNoTransmuter : public UExpHeightFogParams {
public:
    static UExpHeightFogParamsNoTransmuter* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
