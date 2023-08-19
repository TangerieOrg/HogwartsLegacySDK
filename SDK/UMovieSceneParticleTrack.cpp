#include "UMovieSceneNameableTrack.hpp"
#include "UMovieSceneParticleTrack.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneParticleTrack* UMovieSceneParticleTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneParticleTrack");
    return (UMovieSceneParticleTrack*)res;
}
