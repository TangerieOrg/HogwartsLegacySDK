#include "UMovieSceneBlenderSystem.hpp"
#include "UMovieScenePiecewiseFloatBlenderSystem.hpp"
UMovieScenePiecewiseFloatBlenderSystem* UMovieScenePiecewiseFloatBlenderSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieScenePiecewiseFloatBlenderSystem");
    return (UMovieScenePiecewiseFloatBlenderSystem*)res;
}
