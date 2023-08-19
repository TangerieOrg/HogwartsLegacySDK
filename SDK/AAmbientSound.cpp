#include "AActor.hpp"
#include "AAmbientSound.hpp"
#include "UAudioComponent.hpp"
#include "UFunction.hpp"
void AAmbientSound::AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AmbientSound.AdjustVolume"));
    struct Params_AdjustVolume {
        float AdjustVolumeDuration; // 0x0
        float AdjustVolumeLevel; // 0x4
    }; // Size: 0x8
    Params_AdjustVolume params{};
    params.AdjustVolumeDuration = (float)AdjustVolumeDuration;
    params.AdjustVolumeLevel = (float)AdjustVolumeLevel;
    ProcessEvent(func, &params);
}
AAmbientSound* AAmbientSound::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AmbientSound");
    return (AAmbientSound*)res;
}
void AAmbientSound::FadeOut(float FadeOutDuration, float FadeVolumeLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AmbientSound.FadeOut"));
    struct Params_FadeOut {
        float FadeOutDuration; // 0x0
        float FadeVolumeLevel; // 0x4
    }; // Size: 0x8
    Params_FadeOut params{};
    params.FadeOutDuration = (float)FadeOutDuration;
    params.FadeVolumeLevel = (float)FadeVolumeLevel;
    ProcessEvent(func, &params);
}
void AAmbientSound::Stop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AmbientSound.Stop"));
    struct Params_Stop {
    }; // Size: 0x0
    Params_Stop params{};
    ProcessEvent(func, &params);
}
void AAmbientSound::Play(float StartTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AmbientSound.Play"));
    struct Params_Play {
        float StartTime; // 0x0
    }; // Size: 0x4
    Params_Play params{};
    params.StartTime = (float)StartTime;
    ProcessEvent(func, &params);
}
void AAmbientSound::FadeIn(float FadeInDuration, float FadeVolumeLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AmbientSound.FadeIn"));
    struct Params_FadeIn {
        float FadeInDuration; // 0x0
        float FadeVolumeLevel; // 0x4
    }; // Size: 0x8
    Params_FadeIn params{};
    params.FadeInDuration = (float)FadeInDuration;
    params.FadeVolumeLevel = (float)FadeVolumeLevel;
    ProcessEvent(func, &params);
}
