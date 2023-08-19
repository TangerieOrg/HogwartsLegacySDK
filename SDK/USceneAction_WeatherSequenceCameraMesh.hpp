#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "FWeatherSequenceScalarParameterCurve.hpp"
#include "USceneAction_WeatherSequence.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceCameraMesh : public USceneAction_WeatherSequence {
public:
    FVector Offset; // 0x88
    FRotator Rotation; // 0x94
    FVector Scale; // 0xa0
    char pad_ac[0x4];
    TArray<FWeatherSequenceScalarParameterCurve> Parameters; // 0xb0
    FName SetMaterialOutdoors; // 0xc0
    bool bHideIndoors; // 0xc8
    bool bSetOutdoorsValue; // 0xc9
    char pad_ca[0x6];
    static USceneAction_WeatherSequenceCameraMesh* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
