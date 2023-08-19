#include "UDeveloperSettings.hpp"
#include "UMoviePipelineInProcessExecutorSettings.hpp"
UMoviePipelineInProcessExecutorSettings* UMoviePipelineInProcessExecutorSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings");
    return (UMoviePipelineInProcessExecutorSettings*)res;
}
