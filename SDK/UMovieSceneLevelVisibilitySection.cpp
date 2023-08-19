#include "ELevelVisibility.hpp"
#include "UFunction.hpp"
#include "UMovieSceneLevelVisibilitySection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneLevelVisibilitySection* UMovieSceneLevelVisibilitySection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection");
    return (UMovieSceneLevelVisibilitySection*)res;
}
void UMovieSceneLevelVisibilitySection::SetVisibility(ELevelVisibility InVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility"));
    struct Params_SetVisibility {
        ELevelVisibility InVisibility; // 0x0
    }; // Size: 0x1
    Params_SetVisibility params{};
    params.InVisibility = (ELevelVisibility)InVisibility;
    ProcessEvent(func, &params);
}
void UMovieSceneLevelVisibilitySection::SetLevelNames(TArray<FName>& InLevelNames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames"));
    struct Params_SetLevelNames {
        TArray<FName> InLevelNames; // 0x0
    }; // Size: 0x10
    Params_SetLevelNames params{};
    params.InLevelNames = (TArray<FName>)InLevelNames;
    ProcessEvent(func, &params);
    InLevelNames = params.InLevelNames;
}
ELevelVisibility UMovieSceneLevelVisibilitySection::GetVisibility() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility"));
    struct Params_GetVisibility {
        ELevelVisibility ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetVisibility params{};
    ProcessEvent(func, &params);
    return (ELevelVisibility)params.ReturnValue;
}
TArray<FName> UMovieSceneLevelVisibilitySection::GetLevelNames() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames"));
    struct Params_GetLevelNames {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetLevelNames params{};
    ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
