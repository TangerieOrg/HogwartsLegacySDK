#include "UMaterialParameterCollection.hpp"
#include "UMovieSceneMaterialParameterCollectionTrack.hpp"
#include "UMovieSceneMaterialTrack.hpp"
UMovieSceneMaterialParameterCollectionTrack* UMovieSceneMaterialParameterCollectionTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack");
    return (UMovieSceneMaterialParameterCollectionTrack*)res;
}
