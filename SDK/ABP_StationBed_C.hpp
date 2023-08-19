#pragma once
#include <cstdint>
#include "ABP_Station_C.hpp"
class UStationArchitectComponent;
#pragma pack(push, 1)
class ABP_StationBed_C : public ABP_Station_C {
public:
    UStationArchitectComponent* StationArchitect; // 0x378
    static ABP_StationBed_C* StaticClass();
}; // Size: 0x380
#pragma pack(pop)
