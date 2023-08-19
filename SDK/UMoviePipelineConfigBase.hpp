#pragma once
#include <cstdint>
#include "UObject.hpp"
class UMoviePipelineSetting;
class UClass;
#pragma pack(push, 1)
class UMoviePipelineConfigBase : public UObject {
public:
    FString DisplayName; // 0x28
    TArray<UMoviePipelineSetting*> Settings; // 0x38
    char pad_48[0x8];
    static UMoviePipelineConfigBase* StaticClass();
    void RemoveSetting(UMoviePipelineSetting* InSetting);
    TArray<UMoviePipelineSetting*> GetUserSettings();
    TArray<UMoviePipelineSetting*> FindSettingsByClass(UClass* InClass, bool bIncludeDisabledSettings);
    UMoviePipelineSetting* FindSettingByClass(UClass* InClass, bool bIncludeDisabledSettings);
    UMoviePipelineSetting* FindOrAddSettingByClass(UClass* InClass, bool bIncludeDisabledSettings);
    void CopyFrom(UMoviePipelineConfigBase* InConfig);
}; // Size: 0x50
#pragma pack(pop)
