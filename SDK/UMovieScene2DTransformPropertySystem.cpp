#include "UMovieScene2DTransformPropertySystem.hpp"
#include "UMovieScenePropertySystem.hpp"
UMovieScene2DTransformPropertySystem* UMovieScene2DTransformPropertySystem::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.MovieScene2DTransformPropertySystem");
    return (UMovieScene2DTransformPropertySystem*)res;
}
