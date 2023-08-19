#include "UMovieSceneMediaPlayerPropertyTrack.hpp"
#include "UMovieScenePropertyTrack.hpp"
UMovieSceneMediaPlayerPropertyTrack* UMovieSceneMediaPlayerPropertyTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MediaCompositing.MovieSceneMediaPlayerPropertyTrack");
    return (UMovieSceneMediaPlayerPropertyTrack*)res;
}
