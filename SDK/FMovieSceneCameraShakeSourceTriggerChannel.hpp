#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FMovieSceneCameraShakeSourceTrigger.hpp"
#include "FMovieSceneChannel.hpp"
#pragma pack(push, 1)
struct FMovieSceneCameraShakeSourceTriggerChannel : public FMovieSceneChannel {
    TArray<FFrameNumber> KeyTimes; // 0x8
    TArray<FMovieSceneCameraShakeSourceTrigger> KeyValues; // 0x18
    char pad_28[0x60];
}; // Size: 0x88
#pragma pack(pop)
