#pragma once
#include <cstdint>
#include "AInfo.hpp"
class UAtmosphericFogComponent;
#pragma pack(push, 1)
class AAtmosphericFog : public AInfo {
public:
    UAtmosphericFogComponent* AtmosphericFogComponent; // 0x248
    static AAtmosphericFog* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
