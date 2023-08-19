#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FMovieSceneCameraShakeSourceTrigger.hpp"
#include "FMovieSceneEvalTemplate.hpp"
#pragma pack(push, 1)
struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : public FMovieSceneEvalTemplate {
    TArray<FFrameNumber> TriggerTimes; // 0x20
    TArray<FMovieSceneCameraShakeSourceTrigger> TriggerValues; // 0x30
}; // Size: 0x40
#pragma pack(pop)
