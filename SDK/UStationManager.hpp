#pragma once
#include <cstdint>
#include "UObject.hpp"
class UStationComponent;
struct FVector;
#pragma pack(push, 1)
class UStationManager : public UObject {
public:
    char pad_28[0x458];
    static UStationManager* StaticClass();
    static bool IsPlayerInWorld(FName& InWorldName);
    static UStationManager* GetStationManager();
    UStationComponent* GetClosestPlayerBed();
    bool FindSiteLocation(FString InSiteName, FVector& Location);
    bool FindBedSiteLocation(FString InSiteName, FVector& Location);
}; // Size: 0x480
#pragma pack(pop)
