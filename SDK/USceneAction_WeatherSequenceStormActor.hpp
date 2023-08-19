#pragma once
#include <cstdint>
#include "USceneAction_WeatherSequence.hpp"
class UClass;
class UTransformProvider;
#pragma pack(push, 1)
class USceneAction_WeatherSequenceStormActor : public USceneAction_WeatherSequence {
public:
    UClass* StormActor; // 0x88
    UTransformProvider* Transform; // 0x90
    static USceneAction_WeatherSequenceStormActor* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
