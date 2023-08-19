#include "UMediaSource.hpp"
#include "UMovieSceneMediaPlayerPropertySection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneMediaPlayerPropertySection* UMovieSceneMediaPlayerPropertySection::StaticClass() {
    static auto res = find_uobject("Class /Script/MediaCompositing.MovieSceneMediaPlayerPropertySection");
    return (UMovieSceneMediaPlayerPropertySection*)res;
}
