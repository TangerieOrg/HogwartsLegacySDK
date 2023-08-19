#include "UMoviePipelineSetting.hpp"
#include "UMoviePipelineViewFamilySetting.hpp"
UMoviePipelineViewFamilySetting* UMoviePipelineViewFamilySetting::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineViewFamilySetting");
    return (UMoviePipelineViewFamilySetting*)res;
}
