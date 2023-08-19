#include "FGuid.hpp"
#include "UMovieSceneSignedObject.hpp"
#include "UObject.hpp"
UMovieSceneSignedObject* UMovieSceneSignedObject::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneSignedObject");
    return (UMovieSceneSignedObject*)res;
}
