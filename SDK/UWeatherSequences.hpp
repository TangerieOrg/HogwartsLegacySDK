#pragma once
#include <cstdint>
#include "FWeatherDefinitionName.hpp"
#include "FWeatherSequenceInfo.hpp"
#include "FWeatherSequenceInfoWithProbability.hpp"
#include "FWeatherSequenceRedirector.hpp"
#include "UDataAsset.hpp"
class UWeatherCustomSequences;
class UWeatherSequence;
#pragma pack(push, 1)
class UWeatherSequences : public UDataAsset {
public:
    TArray<FWeatherSequenceInfo> GeneralSequences; // 0x30
    TArray<FWeatherSequenceInfoWithProbability> SummerSequences; // 0x40
    TArray<FWeatherSequenceInfoWithProbability> FallSequences; // 0x50
    TArray<FWeatherSequenceInfoWithProbability> WinterSequences; // 0x60
    TArray<FWeatherSequenceInfoWithProbability> SpringSequences; // 0x70
    TArray<FWeatherSequenceInfo> MissionSequences; // 0x80
    TArray<FWeatherSequenceInfo> PrivateSequences; // 0x90
    TArray<FWeatherSequenceInfo> EditorOnlySequences; // 0xa0
    UWeatherCustomSequences* CustomSequences; // 0xb0
    TArray<FWeatherSequenceRedirector> Redirectors; // 0xb8
    TArray<UWeatherSequence*> HardLoadSequences; // 0xc8
    FWeatherDefinitionName FallDefaultWeather; // 0xd8
    FWeatherDefinitionName WinterDefaultWeather; // 0xe8
    FWeatherDefinitionName SpringDefaultWeather; // 0xf8
    FWeatherDefinitionName SummerDefaultWeather; // 0x108
    static UWeatherSequences* StaticClass();
}; // Size: 0x118
#pragma pack(pop)
