#include "UMoviePipelineInProcessExecutor.hpp"
#include "UMoviePipelineLinearExecutorBase.hpp"
UMoviePipelineInProcessExecutor* UMoviePipelineInProcessExecutor::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineInProcessExecutor");
    return (UMoviePipelineInProcessExecutor*)res;
}
