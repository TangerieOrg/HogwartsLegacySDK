#pragma once
#include <cstdint>
#include "FRestrictedGameplayTagTableRow.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class URestrictedGameplayTagsList : public UObject {
public:
    FString ConfigFileName; // 0x28
    TArray<FRestrictedGameplayTagTableRow> RestrictedGameplayTagList; // 0x38
    static URestrictedGameplayTagsList* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
