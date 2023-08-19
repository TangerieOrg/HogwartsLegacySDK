#include "FIntegralCurve.hpp"
#include "FMovieSceneActorReferenceData.hpp"
#include "UMovieSceneActorReferenceSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneActorReferenceSection* UMovieSceneActorReferenceSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneActorReferenceSection");
    return (UMovieSceneActorReferenceSection*)res;
}
