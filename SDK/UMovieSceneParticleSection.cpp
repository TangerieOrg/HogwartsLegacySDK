#include "FMovieSceneParticleChannel.hpp"
#include "UMovieSceneParticleSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneParticleSection* UMovieSceneParticleSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneParticleSection");
    return (UMovieSceneParticleSection*)res;
}
