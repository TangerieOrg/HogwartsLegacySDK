#pragma once
#include <cstdint>
#include "FWeatherSequenceCustom.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UWeatherCustomSequences : public UDataAsset {
public:
    TArray<FWeatherSequenceCustom> CustomSequences; // 0x30
    static UWeatherCustomSequences* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
