#include "UMovieSceneMediaTrack.hpp"
#include "UMovieSceneNameableTrack.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneMediaTrack* UMovieSceneMediaTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MediaCompositing.MovieSceneMediaTrack");
    return (UMovieSceneMediaTrack*)res;
}
