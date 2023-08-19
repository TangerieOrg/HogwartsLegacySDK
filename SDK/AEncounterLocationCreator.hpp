#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FLocationCreatorData.hpp"
class AEncounterVolume;
#pragma pack(push, 1)
class AEncounterLocationCreator : public AActor {
public:
    FString StationCreatorName; // 0x248
    TArray<FLocationCreatorData> LocationData; // 0x258
    AEncounterVolume* LocationEncounter; // 0x268
    FString customWorldID; // 0x270
    char pad_280[0x38];
    static AEncounterLocationCreator* StaticClass();
    void AttachObjectsToCreator(bool bInAttachObjects);
    void AttachEncompassingStations(FString ObjectName);
}; // Size: 0x2b8
#pragma pack(pop)
