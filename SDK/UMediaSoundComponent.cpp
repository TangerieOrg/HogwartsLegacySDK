#include "EMediaSoundChannels.hpp"
#include "EMediaSoundComponentFFTSize.hpp"
#include "FFloatRange.hpp"
#include "FMediaSoundComponentSpectralData.hpp"
#include "FSoundAttenuationSettings.hpp"
#include "UFunction.hpp"
#include "UMediaPlayer.hpp"
#include "UMediaSoundComponent.hpp"
#include "USynthComponent.hpp"
UMediaSoundComponent* UMediaSoundComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/MediaAssets.MediaSoundComponent");
    return (UMediaSoundComponent*)res;
}
void UMediaSoundComponent::SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings"));
    struct Params_SetSpectralAnalysisSettings {
        TArray<float> InFrequenciesToAnalyze; // 0x0
        EMediaSoundComponentFFTSize InFFTSize; // 0x10
    }; // Size: 0x11
    Params_SetSpectralAnalysisSettings params{};
    params.InFrequenciesToAnalyze = (TArray<float>)InFrequenciesToAnalyze;
    params.InFFTSize = (EMediaSoundComponentFFTSize)InFFTSize;
    ProcessEvent(func, &params);
}
void UMediaSoundComponent::SetMediaPlayer(UMediaPlayer* NewMediaPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaSoundComponent.SetMediaPlayer"));
    struct Params_SetMediaPlayer {
        UMediaPlayer* NewMediaPlayer; // 0x0
    }; // Size: 0x8
    Params_SetMediaPlayer params{};
    params.NewMediaPlayer = (UMediaPlayer*)NewMediaPlayer;
    ProcessEvent(func, &params);
}
void UMediaSoundComponent::SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings"));
    struct Params_SetEnvelopeFollowingsettings {
        int32_t AttackTimeMsec; // 0x0
        int32_t ReleaseTimeMsec; // 0x4
    }; // Size: 0x8
    Params_SetEnvelopeFollowingsettings params{};
    params.AttackTimeMsec = (int32_t)AttackTimeMsec;
    params.ReleaseTimeMsec = (int32_t)ReleaseTimeMsec;
    ProcessEvent(func, &params);
}
void UMediaSoundComponent::SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis"));
    struct Params_SetEnableSpectralAnalysis {
        bool bInSpectralAnalysisEnabled; // 0x0
    }; // Size: 0x1
    Params_SetEnableSpectralAnalysis params{};
    params.bInSpectralAnalysisEnabled = (bool)bInSpectralAnalysisEnabled;
    ProcessEvent(func, &params);
}
void UMediaSoundComponent::SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing"));
    struct Params_SetEnableEnvelopeFollowing {
        bool bInEnvelopeFollowing; // 0x0
    }; // Size: 0x1
    Params_SetEnableEnvelopeFollowing params{};
    params.bInEnvelopeFollowing = (bool)bInEnvelopeFollowing;
    ProcessEvent(func, &params);
}
TArray<FMediaSoundComponentSpectralData> UMediaSoundComponent::GetSpectralData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaSoundComponent.GetSpectralData"));
    struct Params_GetSpectralData {
        TArray<FMediaSoundComponentSpectralData> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetSpectralData params{};
    ProcessEvent(func, &params);
    return (TArray<FMediaSoundComponentSpectralData>)params.ReturnValue;
}
TArray<FMediaSoundComponentSpectralData> UMediaSoundComponent::GetNormalizedSpectralData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaSoundComponent.GetNormalizedSpectralData"));
    struct Params_GetNormalizedSpectralData {
        TArray<FMediaSoundComponentSpectralData> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetNormalizedSpectralData params{};
    ProcessEvent(func, &params);
    return (TArray<FMediaSoundComponentSpectralData>)params.ReturnValue;
}
UMediaPlayer* UMediaSoundComponent::GetMediaPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaSoundComponent.GetMediaPlayer"));
    struct Params_GetMediaPlayer {
        UMediaPlayer* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMediaPlayer params{};
    ProcessEvent(func, &params);
    return (UMediaPlayer*)params.ReturnValue;
}
float UMediaSoundComponent::GetEnvelopeValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaSoundComponent.GetEnvelopeValue"));
    struct Params_GetEnvelopeValue {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetEnvelopeValue params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UMediaSoundComponent::BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply"));
    struct Params_BP_GetAttenuationSettingsToApply {
        FSoundAttenuationSettings OutAttenuationSettings; // 0x0
        bool ReturnValue; // 0x3a0
    }; // Size: 0x3a1
    Params_BP_GetAttenuationSettingsToApply params{};
    params.OutAttenuationSettings = (FSoundAttenuationSettings)OutAttenuationSettings;
    ProcessEvent(func, &params);
    OutAttenuationSettings = params.OutAttenuationSettings;
    return (bool)params.ReturnValue;
}
