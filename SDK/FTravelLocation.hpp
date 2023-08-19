#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FTravelLocation {
    FString LocationID; // 0x0
    FVector DropInLocaton; // 0x10
    FVector BeaconLocation; // 0x1c
    float DropInYaw; // 0x28
    char pad_2c[0x4];
    FString WorldName; // 0x30
    bool bIsSaveLocation; // 0x40
    bool bIsFloo; // 0x41
    bool bIsBuiltNightly; // 0x42
    bool bShowOnMap; // 0x43
    char pad_44[0x4];
}; // Size: 0x48
#pragma pack(pop)
