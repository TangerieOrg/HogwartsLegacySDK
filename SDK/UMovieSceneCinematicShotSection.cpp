#include "UFunction.hpp"
#include "UMovieSceneCinematicShotSection.hpp"
#include "UMovieSceneSubSection.hpp"
FString UMovieSceneCinematicShotSection::GetShotDisplayName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName"));
    struct Params_GetShotDisplayName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetShotDisplayName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
UMovieSceneCinematicShotSection* UMovieSceneCinematicShotSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneCinematicShotSection");
    return (UMovieSceneCinematicShotSection*)res;
}
void UMovieSceneCinematicShotSection::SetShotDisplayName(FString InShotDisplayName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName"));
    struct Params_SetShotDisplayName {
        FString InShotDisplayName; // 0x0
    }; // Size: 0x10
    Params_SetShotDisplayName params{};
    params.InShotDisplayName = (FString)InShotDisplayName;
    ProcessEvent(func, &params);
}
