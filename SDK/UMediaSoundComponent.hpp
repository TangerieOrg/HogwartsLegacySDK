#pragma once
#include <cstdint>
#include "EMediaSoundChannels.hpp"
#include "EMediaSoundComponentFFTSize.hpp"
#include "FFloatRange.hpp"
#include "FMediaSoundComponentSpectralData.hpp"
#include "USynthComponent.hpp"
class UMediaPlayer;
struct FSoundAttenuationSettings;
#pragma pack(push, 1)
class UMediaSoundComponent : public USynthComponent {
public:
    EMediaSoundChannels Channels; // 0x6e0
    bool DynamicRateAdjustment; // 0x6e4
    char pad_6e5[0x3];
    float RateAdjustmentFactor; // 0x6e8
    FFloatRange RateAdjustmentRange; // 0x6ec
    char pad_6fc[0x4];
    UMediaPlayer* MediaPlayer; // 0x700
    char pad_708[0x138];
    static UMediaSoundComponent* StaticClass();
    void SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize);
    void SetMediaPlayer(UMediaPlayer* NewMediaPlayer);
    void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec);
    void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);
    void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);
    TArray<FMediaSoundComponentSpectralData> GetSpectralData();
    TArray<FMediaSoundComponentSpectralData> GetNormalizedSpectralData();
    UMediaPlayer* GetMediaPlayer();
    float GetEnvelopeValue();
    bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);
}; // Size: 0x840
#pragma pack(pop)
