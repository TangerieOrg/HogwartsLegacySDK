#pragma once
#include <cstdint>
#include "EMapRegionType.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UMapMarkupComponent : public UActorComponent {
public:
    bool ShowBannerWhenEntering; // 0xc8
    EMapRegionType Type; // 0xc9
    char pad_ca[0x6];
    FDbSingleColumnInfo DbId; // 0xd0
    FString RegionName; // 0x158
    char pad_168[0x18];
    static UMapMarkupComponent* StaticClass();
    bool IsStairs();
    bool IsRoom();
    bool IsFloor();
    EMapRegionType GetType();
}; // Size: 0x180
#pragma pack(pop)
