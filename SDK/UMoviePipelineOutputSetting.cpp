#include "FDirectoryPath.hpp"
#include "FFrameRate.hpp"
#include "FIntPoint.hpp"
#include "UMoviePipelineOutputSetting.hpp"
#include "UMoviePipelineSetting.hpp"
UMoviePipelineOutputSetting* UMoviePipelineOutputSetting::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineOutputSetting");
    return (UMoviePipelineOutputSetting*)res;
}
