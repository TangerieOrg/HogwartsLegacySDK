#include "UMoviePipelineRenderPass.hpp"
#include "UMoviePipelineWidgetRenderer.hpp"
#include "UTextureRenderTarget2D.hpp"
UMoviePipelineWidgetRenderer* UMoviePipelineWidgetRenderer::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineSettings.MoviePipelineWidgetRenderer");
    return (UMoviePipelineWidgetRenderer*)res;
}
