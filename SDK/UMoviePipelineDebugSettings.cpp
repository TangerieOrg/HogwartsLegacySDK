#include "UMoviePipelineDebugSettings.hpp"
#include "UMoviePipelineSetting.hpp"
UMoviePipelineDebugSettings* UMoviePipelineDebugSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineDebugSettings");
    return (UMoviePipelineDebugSettings*)res;
}
