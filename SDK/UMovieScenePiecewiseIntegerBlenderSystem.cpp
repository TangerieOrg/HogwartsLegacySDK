#include "UMovieSceneBlenderSystem.hpp"
#include "UMovieScenePiecewiseIntegerBlenderSystem.hpp"
UMovieScenePiecewiseIntegerBlenderSystem* UMovieScenePiecewiseIntegerBlenderSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieScenePiecewiseIntegerBlenderSystem");
    return (UMovieScenePiecewiseIntegerBlenderSystem*)res;
}
