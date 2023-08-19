#include "EMoviePipelineTextureStreamingMethod.hpp"
#include "UClass.hpp"
#include "UMoviePipelineGameOverrideSetting.hpp"
#include "UMoviePipelineSetting.hpp"
UMoviePipelineGameOverrideSetting* UMoviePipelineGameOverrideSetting::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineGameOverrideSetting");
    return (UMoviePipelineGameOverrideSetting*)res;
}
