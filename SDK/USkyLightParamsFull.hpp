#pragma once
#include <cstdint>
#include "FSkyLightLightingParameters.hpp"
#include "USkyLightParams.hpp"
#pragma pack(push, 1)
class USkyLightParamsFull : public USkyLightParams {
public:
    FSkyLightLightingParameters Parameters; // 0x28
    static USkyLightParamsFull* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
