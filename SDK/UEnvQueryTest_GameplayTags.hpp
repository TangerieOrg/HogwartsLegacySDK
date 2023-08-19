#pragma once
#include <cstdint>
#include "EGameplayContainerMatchType.hpp"
#include "FGameplayTagContainer.hpp"
#include "FGameplayTagQuery.hpp"
#include "UEnvQueryTest.hpp"
#pragma pack(push, 1)
class UEnvQueryTest_GameplayTags : public UEnvQueryTest {
public:
    FGameplayTagQuery TagQueryToMatch; // 0x1f8
    bool bUpdatedToUseQuery; // 0x240
    EGameplayContainerMatchType TagsToMatch; // 0x241
    char pad_242[0x6];
    FGameplayTagContainer GameplayTags; // 0x248
    static UEnvQueryTest_GameplayTags* StaticClass();
}; // Size: 0x268
#pragma pack(pop)
