#pragma once
#include <cstdint>
#include "FDirectionalLightParameters.hpp"
#include "UDirectionalLightParams.hpp"
#pragma pack(push, 1)
class UDirectionalLightParamsFull : public UDirectionalLightParams {
public:
    FDirectionalLightParameters Parameters; // 0x28
    char pad_104[0x4];
    static UDirectionalLightParamsFull* StaticClass();
}; // Size: 0x108
#pragma pack(pop)
