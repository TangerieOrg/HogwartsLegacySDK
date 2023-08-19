#pragma once
#include <cstdint>
#include "FMovieSceneEvalTemplate.hpp"
#include "FSceneRigDialogTrackTemplateData.hpp"
#pragma pack(push, 1)
struct FSceneRigDialogTrackTemplate : public FMovieSceneEvalTemplate {
    FSceneRigDialogTrackTemplateData TemplateData; // 0x20
}; // Size: 0x88
#pragma pack(pop)
