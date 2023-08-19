#include "UMovieSceneEnumPropertySystem.hpp"
#include "UMovieScenePropertySystem.hpp"
UMovieSceneEnumPropertySystem* UMovieSceneEnumPropertySystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneEnumPropertySystem");
    return (UMovieSceneEnumPropertySystem*)res;
}
