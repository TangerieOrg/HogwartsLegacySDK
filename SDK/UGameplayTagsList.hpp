#pragma once
#include <cstdint>
#include "FGameplayTagTableRow.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UGameplayTagsList : public UObject {
public:
    FString ConfigFileName; // 0x28
    TArray<FGameplayTagTableRow> GameplayTagList; // 0x38
    static UGameplayTagsList* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
