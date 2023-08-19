#include "FMovieSceneGroomCacheParams.hpp"
#include "UMovieSceneGroomCacheSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneGroomCacheSection* UMovieSceneGroomCacheSection::StaticClass() {
    static auto res = find_uobject("Class /Script/HairStrandsCore.MovieSceneGroomCacheSection");
    return (UMovieSceneGroomCacheSection*)res;
}
