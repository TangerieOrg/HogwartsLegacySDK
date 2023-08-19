#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FMovieSceneActorReferenceData.hpp"
#include "FMovieSceneFloatChannel.hpp"
#include "UMovieSceneSection.hpp"
class USoundBase;
class USoundAttenuation;
#pragma pack(push, 1)
class UMovieSceneAudioSection : public UMovieSceneSection {
public:
    USoundBase* Sound; // 0xe8
    FFrameNumber StartFrameOffset; // 0xf0
    float StartOffset; // 0xf4
    float AudioStartTime; // 0xf8
    float AudioDilationFactor; // 0xfc
    float AudioVolume; // 0x100
    char pad_104[0x4];
    FMovieSceneFloatChannel SoundVolume; // 0x108
    FMovieSceneFloatChannel PitchMultiplier; // 0x1a8
    FMovieSceneActorReferenceData AttachActorData; // 0x248
    bool bLooping; // 0x2f8
    bool bSuppressSubtitles; // 0x2f9
    bool bOverrideAttenuation; // 0x2fa
    char pad_2fb[0x5];
    USoundAttenuation* AttenuationSettings; // 0x300
    char pad_308[0x30];
    static UMovieSceneAudioSection* StaticClass();
    void SetStartOffset(FFrameNumber InStartOffset);
    void SetSound(USoundBase* InSound);
    FFrameNumber GetStartOffset();
    USoundBase* GetSound();
}; // Size: 0x338
#pragma pack(pop)
