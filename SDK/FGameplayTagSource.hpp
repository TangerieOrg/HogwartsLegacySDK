#pragma once
#include <cstdint>
#include "EGameplayTagSourceType.hpp"
class UGameplayTagsList;
class URestrictedGameplayTagsList;
#pragma pack(push, 1)
struct FGameplayTagSource {
    FName SourceName; // 0x0
    EGameplayTagSourceType SourceType; // 0x8
    char pad_9[0x7];
    UGameplayTagsList* SourceTagList; // 0x10
    URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18
}; // Size: 0x20
#pragma pack(pop)
