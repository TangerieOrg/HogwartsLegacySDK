#pragma once
#include <cstdint>
#include "FMovieSceneActorReferenceData.hpp"
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieScenePropertySectionData.hpp"
#pragma pack(push, 1)
struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate {
    FMovieScenePropertySectionData PropertyData; // 0x20
    FMovieSceneActorReferenceData ActorReferenceData; // 0x38
}; // Size: 0xe8
#pragma pack(pop)
