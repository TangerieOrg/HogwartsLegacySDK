#pragma once
#include <cstdint>
#include "UObject.hpp"
class UClass;
#pragma pack(push, 1)
class UObjectLibrary : public UObject {
public:
    UClass* ObjectBaseClass; // 0x28
    bool bHasBlueprintClasses; // 0x30
    char pad_31[0x7];
    TArray<UObject*> Objects; // 0x38
    TArray<void*> WeakObjects; // 0x48
    bool bUseWeakReferences; // 0x58
    bool bIsFullyLoaded; // 0x59
    char pad_5a[0x4e];
    static UObjectLibrary* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
