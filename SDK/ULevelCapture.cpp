#include "FGuid.hpp"
#include "ULevelCapture.hpp"
#include "UMovieSceneCapture.hpp"
ULevelCapture* ULevelCapture::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneCapture.LevelCapture");
    return (ULevelCapture*)res;
}
