#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "UInterface.hpp"
struct FGameplayTagContainer;
#pragma pack(push, 1)
class UGameplayTagAssetInterface : public UInterface {
public:
    static UGameplayTagAssetInterface* StaticClass();
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck);
    bool HasAnyMatchingGameplayTags(FGameplayTagContainer& TagContainer);
    bool HasAllMatchingGameplayTags(FGameplayTagContainer& TagContainer);
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer);
}; // Size: 0x28
#pragma pack(pop)
