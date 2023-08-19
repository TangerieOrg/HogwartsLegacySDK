#include "FSoftClassPath.hpp"
#include "UMoviePipelineBurnInSetting.hpp"
#include "UMoviePipelineBurnInWidget.hpp"
#include "UMoviePipelineRenderPass.hpp"
#include "UTextureRenderTarget2D.hpp"
UMoviePipelineBurnInSetting* UMoviePipelineBurnInSetting::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineSettings.MoviePipelineBurnInSetting");
    return (UMoviePipelineBurnInSetting*)res;
}
