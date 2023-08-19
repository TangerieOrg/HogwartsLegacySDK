#include "EMoviePipelineShutterTiming.hpp"
#include "UMoviePipelineCameraSetting.hpp"
#include "UMoviePipelineSetting.hpp"
UMoviePipelineCameraSetting* UMoviePipelineCameraSetting::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineCameraSetting");
    return (UMoviePipelineCameraSetting*)res;
}
