#pragma once
#include <cstdint>
#include "AActor.hpp"
class UAudioComponent;
#pragma pack(push, 1)
class AAmbientSound : public AActor {
public:
    UAudioComponent* AudioComponent; // 0x248
    static AAmbientSound* StaticClass();
    void Stop();
    void Play(float StartTime);
    void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
    void FadeIn(float FadeInDuration, float FadeVolumeLevel);
    void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
}; // Size: 0x250
#pragma pack(pop)
