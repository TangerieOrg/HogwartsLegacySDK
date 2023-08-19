#include "FEnumParameterNameAndCurve.hpp"
#include "FIntegerParameterNameAndCurve.hpp"
#include "FMovieSceneFloatChannel.hpp"
#include "FMovieSceneTransformMask.hpp"
#include "UClass.hpp"
#include "UControlRig.hpp"
#include "UMovieSceneControlRigParameterSection.hpp"
#include "UMovieSceneParameterSection.hpp"
UMovieSceneControlRigParameterSection* UMovieSceneControlRigParameterSection::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlRig.MovieSceneControlRigParameterSection");
    return (UMovieSceneControlRigParameterSection*)res;
}
