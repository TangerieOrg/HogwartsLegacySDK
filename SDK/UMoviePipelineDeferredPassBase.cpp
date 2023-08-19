#include "FActorLayer.hpp"
#include "FMoviePipelinePostProcessPass.hpp"
#include "UMaterialInterface.hpp"
#include "UMoviePipelineDeferredPassBase.hpp"
#include "UMoviePipelineImagePassBase.hpp"
#include "UTextureRenderTarget2D.hpp"
UMoviePipelineDeferredPassBase* UMoviePipelineDeferredPassBase::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPassBase");
    return (UMoviePipelineDeferredPassBase*)res;
}
