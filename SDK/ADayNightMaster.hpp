#pragma once
#include <cstdint>
#include "AActor.hpp"
class UDayNightMasterComponent;
#pragma pack(push, 1)
class ADayNightMaster : public AActor {
public:
    UDayNightMasterComponent* DayNightMaster; // 0x248
    bool bAutoFindSkyActor; // 0x250
    char pad_251[0x7];
    static ADayNightMaster* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
