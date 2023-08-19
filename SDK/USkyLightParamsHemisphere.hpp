#pragma once
#include <cstdint>
#include "FSkyLightHemisphereParameters.hpp"
#include "USkyLightParams.hpp"
#pragma pack(push, 1)
class USkyLightParamsHemisphere : public USkyLightParams {
public:
    FSkyLightHemisphereParameters Hemisphere; // 0x28
    char pad_64[0x4];
    static USkyLightParamsHemisphere* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
