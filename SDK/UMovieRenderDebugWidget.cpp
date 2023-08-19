#include "UFunction.hpp"
#include "UMoviePipeline.hpp"
#include "UMovieRenderDebugWidget.hpp"
#include "UUserWidget.hpp"
UMovieRenderDebugWidget* UMovieRenderDebugWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MovieRenderDebugWidget");
    return (UMovieRenderDebugWidget*)res;
}
void UMovieRenderDebugWidget::OnInitializedForPipeline(UMoviePipeline* ForPipeline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MovieRenderDebugWidget.OnInitializedForPipeline"));
    struct Params_OnInitializedForPipeline {
        UMoviePipeline* ForPipeline; // 0x0
    }; // Size: 0x8
    Params_OnInitializedForPipeline params{};
    params.ForPipeline = (UMoviePipeline*)ForPipeline;
    ProcessEvent(func, &params);
}
