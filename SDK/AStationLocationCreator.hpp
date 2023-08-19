#pragma once
#include <cstdint>
#include "AActor.hpp"
class AEncounterCreator;
class AStation;
#pragma pack(push, 1)
class AStationLocationCreator : public AActor {
public:
    int32_t StationLocationCount; // 0x248
    int32_t EncounterCount; // 0x24c
    TArray<AEncounterCreator*> EncounterCreators; // 0x250
    TArray<AStation*> StationLocations; // 0x260
    char pad_270[0x30];
    static AStationLocationCreator* StaticClass();
}; // Size: 0x2a0
#pragma pack(pop)
