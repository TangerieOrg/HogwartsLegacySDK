#include "FFrameNumber.hpp"
#include "UMediaPlayer.hpp"
#include "UMediaSoundComponent.hpp"
#include "UMediaSource.hpp"
#include "UMediaTexture.hpp"
#include "UMovieSceneMediaSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneMediaSection* UMovieSceneMediaSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MediaCompositing.MovieSceneMediaSection");
    return (UMovieSceneMediaSection*)res;
}
