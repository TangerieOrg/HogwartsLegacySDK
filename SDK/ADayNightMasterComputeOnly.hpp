#pragma once
#include <cstdint>
#include "AActor.hpp"
class UDayNightMasterComponent;
#pragma pack(push, 1)
class ADayNightMasterComputeOnly : public AActor {
public:
    UDayNightMasterComponent* DayNightMaster; // 0x248
    static ADayNightMasterComputeOnly* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
