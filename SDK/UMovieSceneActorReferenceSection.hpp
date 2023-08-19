#pragma once
#include <cstdint>
#include "FIntegralCurve.hpp"
#include "FMovieSceneActorReferenceData.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneActorReferenceSection : public UMovieSceneSection {
public:
    FMovieSceneActorReferenceData ActorReferenceData; // 0xe8
    FIntegralCurve ActorGuidIndexCurve; // 0x198
    TArray<FString> ActorGuidStrings; // 0x218
    static UMovieSceneActorReferenceSection* StaticClass();
}; // Size: 0x228
#pragma pack(pop)
