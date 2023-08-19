#include "UFunction.hpp"
#include "UMoviePipeline.hpp"
#include "UMoviePipelineBurnInWidget.hpp"
#include "UUserWidget.hpp"
void UMoviePipelineBurnInWidget::OnOutputFrameStarted(UMoviePipeline* ForPipeline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineSettings.MoviePipelineBurnInWidget.OnOutputFrameStarted"));
    struct Params_OnOutputFrameStarted {
        UMoviePipeline* ForPipeline; // 0x0
    }; // Size: 0x8
    Params_OnOutputFrameStarted params{};
    params.ForPipeline = (UMoviePipeline*)ForPipeline;
    ProcessEvent(func, &params);
}
UMoviePipelineBurnInWidget* UMoviePipelineBurnInWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineSettings.MoviePipelineBurnInWidget");
    return (UMoviePipelineBurnInWidget*)res;
}
