#include "EMovieSceneBlendType.hpp"
#include "EMovieSceneCompletionMode.hpp"
#include "FFrameNumber.hpp"
#include "FMovieSceneEasingSettings.hpp"
#include "FMovieSceneFrameRange.hpp"
#include "FMovieSceneSectionEvalOptions.hpp"
#include "FOptionalMovieSceneBlendType.hpp"
#include "UFunction.hpp"
#include "UMovieSceneSection.hpp"
#include "UMovieSceneSignedObject.hpp"
void UMovieSceneSection::SetRowIndex(int32_t NewRowIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSection.SetRowIndex"));
    struct Params_SetRowIndex {
        int32_t NewRowIndex; // 0x0
    }; // Size: 0x4
    Params_SetRowIndex params{};
    params.NewRowIndex = (int32_t)NewRowIndex;
    ProcessEvent(func, &params);
}
UMovieSceneSection* UMovieSceneSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneSection");
    return (UMovieSceneSection*)res;
}
void UMovieSceneSection::SetIsActive(bool bInIsActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSection.SetIsActive"));
    struct Params_SetIsActive {
        bool bInIsActive; // 0x0
    }; // Size: 0x1
    Params_SetIsActive params{};
    params.bInIsActive = (bool)bInIsActive;
    ProcessEvent(func, &params);
}
void UMovieSceneSection::SetPreRollFrames(int32_t InPreRollFrames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSection.SetPreRollFrames"));
    struct Params_SetPreRollFrames {
        int32_t InPreRollFrames; // 0x0
    }; // Size: 0x4
    Params_SetPreRollFrames params{};
    params.InPreRollFrames = (int32_t)InPreRollFrames;
    ProcessEvent(func, &params);
}
void UMovieSceneSection::SetPostRollFrames(int32_t InPostRollFrames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSection.SetPostRollFrames"));
    struct Params_SetPostRollFrames {
        int32_t InPostRollFrames; // 0x0
    }; // Size: 0x4
    Params_SetPostRollFrames params{};
    params.InPostRollFrames = (int32_t)InPostRollFrames;
    ProcessEvent(func, &params);
}
void UMovieSceneSection::SetCompletionMode(EMovieSceneCompletionMode InCompletionMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSection.SetCompletionMode"));
    struct Params_SetCompletionMode {
        EMovieSceneCompletionMode InCompletionMode; // 0x0
    }; // Size: 0x1
    Params_SetCompletionMode params{};
    params.InCompletionMode = (EMovieSceneCompletionMode)InCompletionMode;
    ProcessEvent(func, &params);
}
void UMovieSceneSection::SetIsLocked(bool bInIsLocked) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSection.SetIsLocked"));
    struct Params_SetIsLocked {
        bool bInIsLocked; // 0x0
    }; // Size: 0x1
    Params_SetIsLocked params{};
    params.bInIsLocked = (bool)bInIsLocked;
    ProcessEvent(func, &params);
}
void UMovieSceneSection::SetOverlapPriority(int32_t NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSection.SetOverlapPriority"));
    struct Params_SetOverlapPriority {
        int32_t NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetOverlapPriority params{};
    params.NewPriority = (int32_t)NewPriority;
    ProcessEvent(func, &params);
}
void UMovieSceneSection::SetBlendType(EMovieSceneBlendType InBlendType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSection.SetBlendType"));
    struct Params_SetBlendType {
        EMovieSceneBlendType InBlendType; // 0x0
    }; // Size: 0x1
    Params_SetBlendType params{};
    params.InBlendType = (EMovieSceneBlendType)InBlendType;
    ProcessEvent(func, &params);
}
bool UMovieSceneSection::IsLocked() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSection.IsLocked"));
    struct Params_IsLocked {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLocked params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMovieSceneSection::IsActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSection.IsActive"));
    struct Params_IsActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UMovieSceneSection::GetRowIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSection.GetRowIndex"));
    struct Params_GetRowIndex {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRowIndex params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FOptionalMovieSceneBlendType UMovieSceneSection::GetBlendType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSection.GetBlendType"));
    struct Params_GetBlendType {
        FOptionalMovieSceneBlendType ReturnValue; // 0x0
    }; // Size: 0x2
    Params_GetBlendType params{};
    ProcessEvent(func, &params);
    return (FOptionalMovieSceneBlendType)params.ReturnValue;
}
int32_t UMovieSceneSection::GetPreRollFrames() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSection.GetPreRollFrames"));
    struct Params_GetPreRollFrames {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPreRollFrames params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UMovieSceneSection::GetPostRollFrames() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSection.GetPostRollFrames"));
    struct Params_GetPostRollFrames {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPostRollFrames params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UMovieSceneSection::GetOverlapPriority() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSection.GetOverlapPriority"));
    struct Params_GetOverlapPriority {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetOverlapPriority params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
EMovieSceneCompletionMode UMovieSceneSection::GetCompletionMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSection.GetCompletionMode"));
    struct Params_GetCompletionMode {
        EMovieSceneCompletionMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCompletionMode params{};
    ProcessEvent(func, &params);
    return (EMovieSceneCompletionMode)params.ReturnValue;
}
