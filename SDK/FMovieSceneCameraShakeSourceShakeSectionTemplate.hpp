#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FMovieSceneCameraShakeSectionData.hpp"
#include "FMovieSceneEvalTemplate.hpp"
#pragma pack(push, 1)
struct FMovieSceneCameraShakeSourceShakeSectionTemplate : public FMovieSceneEvalTemplate {
    FMovieSceneCameraShakeSectionData SourceData; // 0x20
    FFrameNumber SectionStartTime; // 0x40
    FFrameNumber SectionEndTime; // 0x44
}; // Size: 0x48
#pragma pack(pop)
