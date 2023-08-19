#pragma once
#include <cstdint>
#include "AInfo.hpp"
class USkyAtmosphereComponent;
#pragma pack(push, 1)
class ASkyAtmosphere : public AInfo {
public:
    USkyAtmosphereComponent* SkyAtmosphereComponent; // 0x248
    static ASkyAtmosphere* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
