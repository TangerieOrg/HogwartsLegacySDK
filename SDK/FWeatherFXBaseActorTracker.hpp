#pragma once
#include <cstdint>
class AWeatherStormFXBase;
#pragma pack(push, 1)
struct FWeatherFXBaseActorTracker {
    TArray<AWeatherStormFXBase*> Actors; // 0x0
    TArray<AWeatherStormFXBase*> CurrentlyActivated; // 0x10
}; // Size: 0x20
#pragma pack(pop)
