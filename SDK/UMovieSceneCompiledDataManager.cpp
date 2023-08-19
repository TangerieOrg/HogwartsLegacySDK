#include "UMovieSceneCompiledDataManager.hpp"
#include "UObject.hpp"
UMovieSceneCompiledDataManager* UMovieSceneCompiledDataManager::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneCompiledDataManager");
    return (UMovieSceneCompiledDataManager*)res;
}
