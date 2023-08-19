#pragma once
#include <cstdint>
#include "USceneAction_WeatherSequence.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceNiagara : public USceneAction_WeatherSequence {
public:
    char pad_88[0x28];
    static USceneAction_WeatherSequenceNiagara* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
