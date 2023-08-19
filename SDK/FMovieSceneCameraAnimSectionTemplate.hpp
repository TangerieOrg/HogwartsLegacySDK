#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FMovieSceneCameraAnimSectionData.hpp"
#include "FMovieSceneEvalTemplate.hpp"
#pragma pack(push, 1)
struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneEvalTemplate {
    FMovieSceneCameraAnimSectionData SourceData; // 0x20
    FFrameNumber SectionStartTime; // 0x40
    char pad_44[0x4];
}; // Size: 0x48
#pragma pack(pop)
