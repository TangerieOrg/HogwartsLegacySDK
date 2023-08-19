#pragma once
#include <cstdint>
#include "ESoundGroup.hpp"
#include "ESoundWaveLoadingBehavior.hpp"
#include "ESoundwaveSampleRateSettings.hpp"
#include "FSoundModulationDefaultRoutingSettings.hpp"
#include "FSoundWaveEnvelopeTimeData.hpp"
#include "FSoundWaveSpectralTimeData.hpp"
#include "FSubtitleCue.hpp"
#include "USoundBase.hpp"
class UCurveTable;
#pragma pack(push, 1)
class USoundWave : public USoundBase {
public:
    int32_t CompressionQuality; // 0x170
    int32_t StreamingPriority; // 0x174
    ESoundwaveSampleRateSettings SampleRateQuality; // 0x178
    char pad_179[0x1];
    ESoundGroup SoundGroup; // 0x17a
    uint8_t bLooping : 1; // 0x17b
    uint8_t bStreaming : 1; // 0x17b
    uint8_t bSeekableStreaming : 1; // 0x17b
    uint8_t pad_bitfield_17b_3 : 5;
    ESoundWaveLoadingBehavior LoadingBehavior; // 0x17c
    uint8_t pad_bitfield_17d_0 : 6;
    uint8_t bMature : 1; // 0x17d
    uint8_t bManualWordWrap : 1; // 0x17d
    uint8_t bSingleLine : 1; // 0x17e
    uint8_t bIsAmbisonics : 1; // 0x17e
    uint8_t pad_bitfield_17e_2 : 6;
    char pad_17f[0x1];
    FSoundModulationDefaultRoutingSettings ModulationSettings; // 0x180
    TArray<float> FrequenciesToAnalyze; // 0x1c8
    TArray<FSoundWaveSpectralTimeData> CookedSpectralTimeData; // 0x1d8
    TArray<FSoundWaveEnvelopeTimeData> CookedEnvelopeTimeData; // 0x1e8
    int32_t InitialChunkSize; // 0x1f8
    char pad_1fc[0x44];
    FString SpokenText; // 0x240
    float SubtitlePriority; // 0x250
    float Volume; // 0x254
    float Pitch; // 0x258
    int32_t NumChannels; // 0x25c
    int32_t SampleRate; // 0x260
    char pad_264[0xc];
    TArray<FSubtitleCue> Subtitles; // 0x270
    UCurveTable* Curves; // 0x280
    UCurveTable* InternalCurves; // 0x288
    char pad_290[0xe0];
    static USoundWave* StaticClass();
}; // Size: 0x370
#pragma pack(pop)
