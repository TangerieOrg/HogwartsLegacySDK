#include "UMoviePipelineOutputBase.hpp"
#include "UMoviePipelineVideoOutputBase.hpp"
UMoviePipelineVideoOutputBase* UMoviePipelineVideoOutputBase::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineVideoOutputBase");
    return (UMoviePipelineVideoOutputBase*)res;
}
