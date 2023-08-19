#pragma once
#include <cstdint>
#include "FSkyAtmosphereParameters.hpp"
#include "USkyAtmosphereParams.hpp"
#pragma pack(push, 1)
class USkyAtmosphereParamsFull : public USkyAtmosphereParams {
public:
    FSkyAtmosphereParameters Parameters; // 0x28
    static USkyAtmosphereParamsFull* StaticClass();
}; // Size: 0x170
#pragma pack(pop)
