#include "UMovieSceneNameableTrack.hpp"
#include "UMovieSceneParticleParameterTrack.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneParticleParameterTrack* UMovieSceneParticleParameterTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneParticleParameterTrack");
    return (UMovieSceneParticleParameterTrack*)res;
}
