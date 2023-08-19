#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UMoviePlayerInterface.hpp"
UMoviePlayerInterface* UMoviePlayerInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.MoviePlayerInterface");
    return (UMoviePlayerInterface*)res;
}
void UMoviePlayerInterface::SetOpacity(float Opacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.MoviePlayerInterface.SetOpacity"));
    struct Params_SetOpacity {
        float Opacity; // 0x0
    }; // Size: 0x4
    Params_SetOpacity params{};
    params.Opacity = (float)Opacity;
    ProcessEvent(func, &params);
}
void UMoviePlayerInterface::SetForegroundOpacity(float Opacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.MoviePlayerInterface.SetForegroundOpacity"));
    struct Params_SetForegroundOpacity {
        float Opacity; // 0x0
    }; // Size: 0x4
    Params_SetForegroundOpacity params{};
    params.Opacity = (float)Opacity;
    ProcessEvent(func, &params);
}
