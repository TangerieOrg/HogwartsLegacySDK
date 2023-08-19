#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMoviePipelineConfigBase.hpp"
#include "UMoviePipelineSetting.hpp"
#include "UObject.hpp"
void UMoviePipelineConfigBase::RemoveSetting(UMoviePipelineSetting* InSetting) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.RemoveSetting"));
    struct Params_RemoveSetting {
        UMoviePipelineSetting* InSetting; // 0x0
    }; // Size: 0x8
    Params_RemoveSetting params{};
    params.InSetting = (UMoviePipelineSetting*)InSetting;
    ProcessEvent(func, &params);
}
UMoviePipelineConfigBase* UMoviePipelineConfigBase::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineConfigBase");
    return (UMoviePipelineConfigBase*)res;
}
UMoviePipelineSetting* UMoviePipelineConfigBase::FindOrAddSettingByClass(UClass* InClass, bool bIncludeDisabledSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.FindOrAddSettingByClass"));
    struct Params_FindOrAddSettingByClass {
        UClass* InClass; // 0x0
        bool bIncludeDisabledSettings; // 0x8
        char pad_9[0x7];
        UMoviePipelineSetting* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_FindOrAddSettingByClass params{};
    params.InClass = (UClass*)InClass;
    params.bIncludeDisabledSettings = (bool)bIncludeDisabledSettings;
    ProcessEvent(func, &params);
    return (UMoviePipelineSetting*)params.ReturnValue;
}
TArray<UMoviePipelineSetting*> UMoviePipelineConfigBase::GetUserSettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.GetUserSettings"));
    struct Params_GetUserSettings {
        TArray<UMoviePipelineSetting*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetUserSettings params{};
    ProcessEvent(func, &params);
    return (TArray<UMoviePipelineSetting*>)params.ReturnValue;
}
TArray<UMoviePipelineSetting*> UMoviePipelineConfigBase::FindSettingsByClass(UClass* InClass, bool bIncludeDisabledSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingsByClass"));
    struct Params_FindSettingsByClass {
        UClass* InClass; // 0x0
        bool bIncludeDisabledSettings; // 0x8
        char pad_9[0x7];
        TArray<UMoviePipelineSetting*> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_FindSettingsByClass params{};
    params.InClass = (UClass*)InClass;
    params.bIncludeDisabledSettings = (bool)bIncludeDisabledSettings;
    ProcessEvent(func, &params);
    return (TArray<UMoviePipelineSetting*>)params.ReturnValue;
}
UMoviePipelineSetting* UMoviePipelineConfigBase::FindSettingByClass(UClass* InClass, bool bIncludeDisabledSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingByClass"));
    struct Params_FindSettingByClass {
        UClass* InClass; // 0x0
        bool bIncludeDisabledSettings; // 0x8
        char pad_9[0x7];
        UMoviePipelineSetting* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_FindSettingByClass params{};
    params.InClass = (UClass*)InClass;
    params.bIncludeDisabledSettings = (bool)bIncludeDisabledSettings;
    ProcessEvent(func, &params);
    return (UMoviePipelineSetting*)params.ReturnValue;
}
void UMoviePipelineConfigBase::CopyFrom(UMoviePipelineConfigBase* InConfig) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.CopyFrom"));
    struct Params_CopyFrom {
        UMoviePipelineConfigBase* InConfig; // 0x0
    }; // Size: 0x8
    Params_CopyFrom params{};
    params.InConfig = (UMoviePipelineConfigBase*)InConfig;
    ProcessEvent(func, &params);
}
