#include "UMovieSceneEntitySystem.hpp"
#include "UMovieSceneEventSystem.hpp"
UMovieSceneEventSystem* UMovieSceneEventSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneEventSystem");
    return (UMovieSceneEventSystem*)res;
}
