#pragma once
#include <cstdint>
class AWeatherSurfaceFogBase;
#pragma pack(push, 1)
struct FSurfaceFogActorTracker {
    TArray<AWeatherSurfaceFogBase*> Actors; // 0x0
    TArray<AWeatherSurfaceFogBase*> CurrentlyActivated; // 0x10
}; // Size: 0x20
#pragma pack(pop)
