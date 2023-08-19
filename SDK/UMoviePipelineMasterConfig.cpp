#include "FFrameRate.hpp"
#include "UFunction.hpp"
#include "ULevelSequence.hpp"
#include "UMoviePipelineConfigBase.hpp"
#include "UMoviePipelineMasterConfig.hpp"
#include "UMoviePipelineOutputSetting.hpp"
#include "UMoviePipelineSetting.hpp"
UMoviePipelineMasterConfig* UMoviePipelineMasterConfig::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineMasterConfig");
    return (UMoviePipelineMasterConfig*)res;
}
void UMoviePipelineMasterConfig::InitializeTransientSettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineMasterConfig.InitializeTransientSettings"));
    struct Params_InitializeTransientSettings {
    }; // Size: 0x0
    Params_InitializeTransientSettings params{};
    ProcessEvent(func, &params);
}
TArray<UMoviePipelineSetting*> UMoviePipelineMasterConfig::GetAllSettings(bool bIncludeDisabledSettings, bool bIncludeTransientSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineMasterConfig.GetAllSettings"));
    struct Params_GetAllSettings {
        bool bIncludeDisabledSettings; // 0x0
        bool bIncludeTransientSettings; // 0x1
        char pad_2[0x6];
        TArray<UMoviePipelineSetting*> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetAllSettings params{};
    params.bIncludeDisabledSettings = (bool)bIncludeDisabledSettings;
    params.bIncludeTransientSettings = (bool)bIncludeTransientSettings;
    ProcessEvent(func, &params);
    return (TArray<UMoviePipelineSetting*>)params.ReturnValue;
}
TArray<UMoviePipelineSetting*> UMoviePipelineMasterConfig::GetTransientSettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineMasterConfig.GetTransientSettings"));
    struct Params_GetTransientSettings {
        TArray<UMoviePipelineSetting*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetTransientSettings params{};
    ProcessEvent(func, &params);
    return (TArray<UMoviePipelineSetting*>)params.ReturnValue;
}
FFrameRate UMoviePipelineMasterConfig::GetEffectiveFrameRate(ULevelSequence* InSequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineMasterConfig.GetEffectiveFrameRate"));
    struct Params_GetEffectiveFrameRate {
        ULevelSequence* InSequence; // 0x0
        FFrameRate ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetEffectiveFrameRate params{};
    params.InSequence = (ULevelSequence*)InSequence;
    ProcessEvent(func, &params);
    return (FFrameRate)params.ReturnValue;
}
