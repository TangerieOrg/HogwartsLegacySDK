#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FEdGraphSchemaAction {
    char pad_0[0x68];
    int32_t Grouping; // 0x68
    int32_t SectionID; // 0x6c
    TArray<FString> MenuDescriptionArray; // 0x70
    TArray<FString> FullSearchTitlesArray; // 0x80
    TArray<FString> FullSearchKeywordsArray; // 0x90
    TArray<FString> FullSearchCategoryArray; // 0xa0
    TArray<FString> LocalizedMenuDescriptionArray; // 0xb0
    TArray<FString> LocalizedFullSearchTitlesArray; // 0xc0
    TArray<FString> LocalizedFullSearchKeywordsArray; // 0xd0
    TArray<FString> LocalizedFullSearchCategoryArray; // 0xe0
    FString SearchText; // 0xf0
}; // Size: 0x100
#pragma pack(pop)
