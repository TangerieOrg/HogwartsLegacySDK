#include "EAntiAliasingMethod.hpp"
#include "UMoviePipelineAntiAliasingSetting.hpp"
#include "UMoviePipelineSetting.hpp"
UMoviePipelineAntiAliasingSetting* UMoviePipelineAntiAliasingSetting::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting");
    return (UMoviePipelineAntiAliasingSetting*)res;
}
