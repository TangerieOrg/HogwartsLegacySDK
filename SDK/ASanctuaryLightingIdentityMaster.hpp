#pragma once
#include <cstdint>
#include "AActor.hpp"
class USanctuaryLightingIdentityMasterComponent;
#pragma pack(push, 1)
class ASanctuaryLightingIdentityMaster : public AActor {
public:
    USanctuaryLightingIdentityMasterComponent* MasterComponent; // 0x248
    static ASanctuaryLightingIdentityMaster* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
