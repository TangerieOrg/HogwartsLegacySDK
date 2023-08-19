#pragma once
#include <cstdint>
#include "USceneAction_WeatherSequence.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceEnvGlobal : public USceneAction_WeatherSequence {
public:
    bool bUnsetAtEndOfSequence; // 0x88
    char pad_89[0x7];
    static USceneAction_WeatherSequenceEnvGlobal* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
