#pragma once
#include <cstdint>
#include "UObject.hpp"
class UBlueprintGeneratedClass;
class UVariantSet;
#pragma pack(push, 1)
class ULevelVariantSets : public UObject {
public:
    UBlueprintGeneratedClass* DirectorClass; // 0x28
    TArray<UVariantSet*> VariantSets; // 0x30
    char pad_40[0x50];
    static ULevelVariantSets* StaticClass();
    UVariantSet* GetVariantSetByName(FString VariantSetName);
    UVariantSet* GetVariantSet(int32_t VariantSetIndex);
    int32_t GetNumVariantSets();
}; // Size: 0x90
#pragma pack(pop)
