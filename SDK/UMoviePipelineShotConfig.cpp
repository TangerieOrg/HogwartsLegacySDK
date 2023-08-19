#include "UMoviePipelineConfigBase.hpp"
#include "UMoviePipelineShotConfig.hpp"
UMoviePipelineShotConfig* UMoviePipelineShotConfig::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineShotConfig");
    return (UMoviePipelineShotConfig*)res;
}
