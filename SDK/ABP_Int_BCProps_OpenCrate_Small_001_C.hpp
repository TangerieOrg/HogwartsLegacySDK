#pragma once
#include <cstdint>
#include "ABP_Breakable_Persistent_C.hpp"
class UOdcAuthoredObstacleSetupComponent;
#pragma pack(push, 1)
class ABP_Int_BCProps_OpenCrate_Small_001_C : public ABP_Breakable_Persistent_C {
public:
    UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup; // 0x358
    static ABP_Int_BCProps_OpenCrate_Small_001_C* StaticClass();
}; // Size: 0x360
#pragma pack(pop)
