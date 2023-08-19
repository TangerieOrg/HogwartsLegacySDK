#include "UMovieSceneEntitySystem.hpp"
#include "UMovieSceneTrackInstanceInstantiator.hpp"
#include "UMovieSceneTrackInstanceSystem.hpp"
UMovieSceneTrackInstanceSystem* UMovieSceneTrackInstanceSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneTrackInstanceSystem");
    return (UMovieSceneTrackInstanceSystem*)res;
}
