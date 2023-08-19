#pragma once
#include <cstdint>
#include "FExpHeightFogParameters.hpp"
#include "UExpHeightFogParams.hpp"
#pragma pack(push, 1)
class UExpHeightFogParamsFull : public UExpHeightFogParams {
public:
    FExpHeightFogParameters Parameters; // 0x30
    static UExpHeightFogParamsFull* StaticClass();
}; // Size: 0x208
#pragma pack(pop)
