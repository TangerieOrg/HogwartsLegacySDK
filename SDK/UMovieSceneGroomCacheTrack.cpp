#include "UMovieSceneGroomCacheTrack.hpp"
#include "UMovieSceneNameableTrack.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneGroomCacheTrack* UMovieSceneGroomCacheTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/HairStrandsCore.MovieSceneGroomCacheTrack");
    return (UMovieSceneGroomCacheTrack*)res;
}
