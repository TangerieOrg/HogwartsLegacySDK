#pragma once
#include <cstdint>
#include "ABP_Breakable_Fragile_C.hpp"
class UOdcAuthoredObstacleSetupComponent;
#pragma pack(push, 1)
class ABP_Cav_DestructibleJug_02_C : public ABP_Breakable_Fragile_C {
public:
    UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup; // 0x358
    static ABP_Cav_DestructibleJug_02_C* StaticClass();
}; // Size: 0x360
#pragma pack(pop)
