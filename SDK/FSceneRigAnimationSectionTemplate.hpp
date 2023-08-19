#pragma once
#include <cstdint>
#include "FMovieSceneEvalTemplate.hpp"
#include "FSceneRigAnimationSectionTemplateParameters.hpp"
#pragma pack(push, 1)
struct FSceneRigAnimationSectionTemplate : public FMovieSceneEvalTemplate {
    FSceneRigAnimationSectionTemplateParameters Params; // 0x20
}; // Size: 0x568
#pragma pack(pop)
