#pragma once
#include <cstdint>
#include "FCreatureTakeoffMotionData.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UCreature_FlightMotionTable : public UDataAsset {
public:
    char pad_30[0x50];
    TArray<FCreatureTakeoffMotionData> TakeoffMotionData; // 0x80
    static UCreature_FlightMotionTable* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
