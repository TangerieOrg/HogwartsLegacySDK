#include "FFrameNumber.hpp"
#include "FMovieSceneActorReferenceData.hpp"
#include "FMovieSceneFloatChannel.hpp"
#include "UFunction.hpp"
#include "UMovieSceneAudioSection.hpp"
#include "UMovieSceneSection.hpp"
#include "USoundAttenuation.hpp"
#include "USoundBase.hpp"
UMovieSceneAudioSection* UMovieSceneAudioSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneAudioSection");
    return (UMovieSceneAudioSection*)res;
}
void UMovieSceneAudioSection::SetStartOffset(FFrameNumber InStartOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneAudioSection.SetStartOffset"));
    struct Params_SetStartOffset {
        FFrameNumber InStartOffset; // 0x0
    }; // Size: 0x4
    Params_SetStartOffset params{};
    params.InStartOffset = (FFrameNumber)InStartOffset;
    ProcessEvent(func, &params);
}
USoundBase* UMovieSceneAudioSection::GetSound() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneAudioSection.GetSound"));
    struct Params_GetSound {
        USoundBase* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSound params{};
    ProcessEvent(func, &params);
    return (USoundBase*)params.ReturnValue;
}
FFrameNumber UMovieSceneAudioSection::GetStartOffset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneAudioSection.GetStartOffset"));
    struct Params_GetStartOffset {
        FFrameNumber ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetStartOffset params{};
    ProcessEvent(func, &params);
    return (FFrameNumber)params.ReturnValue;
}
void UMovieSceneAudioSection::SetSound(USoundBase* InSound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneAudioSection.SetSound"));
    struct Params_SetSound {
        USoundBase* InSound; // 0x0
    }; // Size: 0x8
    Params_SetSound params{};
    params.InSound = (USoundBase*)InSound;
    ProcessEvent(func, &params);
}
