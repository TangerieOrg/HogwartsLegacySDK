#pragma once
#include <cstdint>
#include "FGameplayTagCategoryRemap.hpp"
#include "FGameplayTagRedirect.hpp"
#include "FRestrictedConfigInfo.hpp"
#include "FSoftObjectPath.hpp"
#include "UGameplayTagsList.hpp"
#pragma pack(push, 1)
class UGameplayTagsSettings : public UGameplayTagsList {
public:
    bool ImportTagsFromConfig; // 0x48
    bool WarnOnInvalidTags; // 0x49
    bool ClearInvalidTags; // 0x4a
    bool FastReplication; // 0x4b
    char pad_4c[0x4];
    FString InvalidTagCharacters; // 0x50
    TArray<FGameplayTagCategoryRemap> CategoryRemapping; // 0x60
    TArray<FSoftObjectPath> GameplayTagTableList; // 0x70
    TArray<FGameplayTagRedirect> GameplayTagRedirects; // 0x80
    TArray<FName> CommonlyReplicatedTags; // 0x90
    int32_t NumBitsForContainerSize; // 0xa0
    int32_t NetIndexFirstBitSegment; // 0xa4
    TArray<FRestrictedConfigInfo> RestrictedConfigFiles; // 0xa8
    static UGameplayTagsSettings* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
