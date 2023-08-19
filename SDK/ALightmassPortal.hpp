#pragma once
#include <cstdint>
#include "AActor.hpp"
class ULightmassPortalComponent;
#pragma pack(push, 1)
class ALightmassPortal : public AActor {
public:
    ULightmassPortalComponent* PortalComponent; // 0x248
    static ALightmassPortal* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
