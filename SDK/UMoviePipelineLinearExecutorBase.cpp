#include "UMoviePipeline.hpp"
#include "UMoviePipelineExecutorBase.hpp"
#include "UMoviePipelineLinearExecutorBase.hpp"
#include "UMoviePipelineQueue.hpp"
UMoviePipelineLinearExecutorBase* UMoviePipelineLinearExecutorBase::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineLinearExecutorBase");
    return (UMoviePipelineLinearExecutorBase*)res;
}
