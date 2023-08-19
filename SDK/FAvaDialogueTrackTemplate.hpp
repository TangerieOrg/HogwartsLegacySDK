#pragma once
#include <cstdint>
#include "FAvaDialogueTrackTemplateData.hpp"
#include "FMovieSceneEvalTemplate.hpp"
#pragma pack(push, 1)
struct FAvaDialogueTrackTemplate : public FMovieSceneEvalTemplate {
    FAvaDialogueTrackTemplateData TemplateData; // 0x20
}; // Size: 0x90
#pragma pack(pop)
