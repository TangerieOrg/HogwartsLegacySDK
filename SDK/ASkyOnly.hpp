#pragma once
#include <cstdint>
#include "AInfo.hpp"
#include "FSkyAtmosphereSkyOnlyParameters.hpp"
class USkyOnlyComponent;
#pragma pack(push, 1)
class ASkyOnly : public AInfo {
public:
    USkyOnlyComponent* SkyOnlyComponent; // 0x248
    FSkyAtmosphereSkyOnlyParameters Parameters; // 0x250
    bool bDualDirectionalLights; // 0x2a0
    bool bEnabled; // 0x2a1
    char pad_2a2[0xe];
    static ASkyOnly* StaticClass();
}; // Size: 0x2b0
#pragma pack(pop)
