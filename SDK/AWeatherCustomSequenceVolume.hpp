#pragma once
#include <cstdint>
#include "AWeatherVolumeSortablePreload.hpp"
#include "FWeatherCustomSequenceName.hpp"
#pragma pack(push, 1)
class AWeatherCustomSequenceVolume : public AWeatherVolumeSortablePreload {
public:
    FWeatherCustomSequenceName CustomSequence; // 0x2a8
    bool bUseInFall; // 0x2b8
    bool bUseInWinter; // 0x2b9
    bool bUseInSpring; // 0x2ba
    bool bUseInSummer; // 0x2bb
    char pad_2bc[0x4];
    static AWeatherCustomSequenceVolume* StaticClass();
}; // Size: 0x2c0
#pragma pack(pop)
