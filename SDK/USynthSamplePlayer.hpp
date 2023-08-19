#pragma once
#include <cstdint>
#include "ESamplePlayerSeekType.hpp"
#include "USynthComponent.hpp"
class USoundWave;
#pragma pack(push, 1)
class USynthSamplePlayer : public USynthComponent {
public:
    USoundWave* SoundWave; // 0x6e0
    char pad_6e8[0x128];
    static USynthSamplePlayer* StaticClass();
    void SetSoundWave(USoundWave* InSoundWave);
    void SetScrubTimeWidth(float InScrubTimeWidthSec);
    void SetScrubMode(bool bScrubMode);
    void SetPitch(float InPitch, float TimeSec);
    void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap);
    bool IsLoaded();
    float GetSampleDuration();
    float GetCurrentPlaybackProgressTime();
    float GetCurrentPlaybackProgressPercent();
}; // Size: 0x810
#pragma pack(pop)
