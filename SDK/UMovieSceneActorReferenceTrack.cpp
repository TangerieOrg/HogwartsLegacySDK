#include "UMovieSceneActorReferenceTrack.hpp"
#include "UMovieScenePropertyTrack.hpp"
UMovieSceneActorReferenceTrack* UMovieSceneActorReferenceTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneActorReferenceTrack");
    return (UMovieSceneActorReferenceTrack*)res;
}
