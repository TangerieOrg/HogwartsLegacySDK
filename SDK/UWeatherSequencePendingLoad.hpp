#pragma once
#include <cstdint>
#include "ULiveWeatherSequenceInfo.hpp"
#pragma pack(push, 1)
class UWeatherSequencePendingLoad : public ULiveWeatherSequenceInfo {
public:
    char pad_98[0x38];
    static UWeatherSequencePendingLoad* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
