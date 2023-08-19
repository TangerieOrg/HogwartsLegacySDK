#include "FOpenColorIODisplayConfiguration.hpp"
#include "UMoviePipelineColorSetting.hpp"
#include "UMoviePipelineSetting.hpp"
UMoviePipelineColorSetting* UMoviePipelineColorSetting::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineColorSetting");
    return (UMoviePipelineColorSetting*)res;
}
