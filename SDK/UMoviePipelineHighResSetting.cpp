#include "UMoviePipelineHighResSetting.hpp"
#include "UMoviePipelineSetting.hpp"
UMoviePipelineHighResSetting* UMoviePipelineHighResSetting::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineHighResSetting");
    return (UMoviePipelineHighResSetting*)res;
}
