#pragma once
#include <cstdint>
#include "FGameplayTagQuery.hpp"
#include "UObject.hpp"
class UEditableGameplayTagQueryExpression;
#pragma pack(push, 1)
class UEditableGameplayTagQuery : public UObject {
public:
    FString UserDescription; // 0x28
    char pad_38[0x10];
    UEditableGameplayTagQueryExpression* RootExpression; // 0x48
    FGameplayTagQuery TagQueryExportText_Helper; // 0x50
    static UEditableGameplayTagQuery* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
