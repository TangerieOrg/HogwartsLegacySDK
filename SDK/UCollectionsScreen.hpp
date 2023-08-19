#pragma once
#include <cstdint>
#include "UTabPageWidget.hpp"
#pragma pack(push, 1)
class UCollectionsScreen : public UTabPageWidget {
public:
    char pad_3c8[0x50];
    static UCollectionsScreen* StaticClass();
    TArray<FName> GetUsedInRecipesForCollectionItem(FName CollectionItem, FName CollectionCategory, bool IncludeLocked);
}; // Size: 0x418
#pragma pack(pop)
