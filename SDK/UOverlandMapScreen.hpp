#pragma once
#include <cstdint>
#include "UMapScreenBase.hpp"
class UMapOverland;
class APhoenixMapRegion;
class UMapIcon;
#pragma pack(push, 1)
class UOverlandMapScreen : public UMapScreenBase {
public:
    UMapOverland* OverlandMap; // 0x4d8
    static UOverlandMapScreen* StaticClass();
    void RegionChange_Event(APhoenixMapRegion* regionActor, APhoenixMapRegion* subregionActor, bool noString);
    void HoveredFilterRegion_Event(UMapIcon* Icon);
    UMapOverland* GetMap();
    void ExitHogwarts_Event();
    void EnterHogwarts_Event();
}; // Size: 0x4e0
#pragma pack(pop)
