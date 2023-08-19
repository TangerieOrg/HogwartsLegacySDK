#include "ESamplePlayerSeekType.hpp"
#include "UFunction.hpp"
#include "USoundWave.hpp"
#include "USynthComponent.hpp"
#include "USynthSamplePlayer.hpp"
USynthSamplePlayer* USynthSamplePlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SynthSamplePlayer");
    return (USynthSamplePlayer*)res;
}
float USynthSamplePlayer::GetSampleDuration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthSamplePlayer.GetSampleDuration"));
    struct Params_GetSampleDuration {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSampleDuration params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void USynthSamplePlayer::SetSoundWave(USoundWave* InSoundWave) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthSamplePlayer.SetSoundWave"));
    struct Params_SetSoundWave {
        USoundWave* InSoundWave; // 0x0
    }; // Size: 0x8
    Params_SetSoundWave params{};
    params.InSoundWave = (USoundWave*)InSoundWave;
    ProcessEvent(func, &params);
}
void USynthSamplePlayer::SetScrubTimeWidth(float InScrubTimeWidthSec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthSamplePlayer.SetScrubTimeWidth"));
    struct Params_SetScrubTimeWidth {
        float InScrubTimeWidthSec; // 0x0
    }; // Size: 0x4
    Params_SetScrubTimeWidth params{};
    params.InScrubTimeWidthSec = (float)InScrubTimeWidthSec;
    ProcessEvent(func, &params);
}
void USynthSamplePlayer::SetScrubMode(bool bScrubMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthSamplePlayer.SetScrubMode"));
    struct Params_SetScrubMode {
        bool bScrubMode; // 0x0
    }; // Size: 0x1
    Params_SetScrubMode params{};
    params.bScrubMode = (bool)bScrubMode;
    ProcessEvent(func, &params);
}
void USynthSamplePlayer::SetPitch(float InPitch, float TimeSec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthSamplePlayer.SetPitch"));
    struct Params_SetPitch {
        float InPitch; // 0x0
        float TimeSec; // 0x4
    }; // Size: 0x8
    Params_SetPitch params{};
    params.InPitch = (float)InPitch;
    params.TimeSec = (float)TimeSec;
    ProcessEvent(func, &params);
}
void USynthSamplePlayer::SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthSamplePlayer.SeekToTime"));
    struct Params_SeekToTime {
        float TimeSec; // 0x0
        ESamplePlayerSeekType SeekType; // 0x4
        bool bWrap; // 0x5
    }; // Size: 0x6
    Params_SeekToTime params{};
    params.TimeSec = (float)TimeSec;
    params.SeekType = (ESamplePlayerSeekType)SeekType;
    params.bWrap = (bool)bWrap;
    ProcessEvent(func, &params);
}
bool USynthSamplePlayer::IsLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthSamplePlayer.IsLoaded"));
    struct Params_IsLoaded {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLoaded params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float USynthSamplePlayer::GetCurrentPlaybackProgressTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime"));
    struct Params_GetCurrentPlaybackProgressTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentPlaybackProgressTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float USynthSamplePlayer::GetCurrentPlaybackProgressPercent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent"));
    struct Params_GetCurrentPlaybackProgressPercent {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentPlaybackProgressPercent params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
