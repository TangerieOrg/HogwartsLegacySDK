#include "UMoviePipelineOutputBase.hpp"
#include "UMoviePipelineSetting.hpp"
UMoviePipelineOutputBase* UMoviePipelineOutputBase::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineOutputBase");
    return (UMoviePipelineOutputBase*)res;
}
