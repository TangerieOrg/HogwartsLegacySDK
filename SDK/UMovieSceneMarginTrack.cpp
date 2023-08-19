#include "UMovieSceneMarginTrack.hpp"
#include "UMovieScenePropertyTrack.hpp"
UMovieSceneMarginTrack* UMovieSceneMarginTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.MovieSceneMarginTrack");
    return (UMovieSceneMarginTrack*)res;
}
