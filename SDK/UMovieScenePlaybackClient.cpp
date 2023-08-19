#include "UInterface.hpp"
#include "UMovieScenePlaybackClient.hpp"
UMovieScenePlaybackClient* UMovieScenePlaybackClient::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieScenePlaybackClient");
    return (UMovieScenePlaybackClient*)res;
}
