#pragma once
#include <cstdint>
#include "FFunctionCaller.hpp"
#include "FSoftObjectPath.hpp"
#include "UObject.hpp"
class UPropertyValue;
#pragma pack(push, 1)
class UVariantObjectBinding : public UObject {
public:
    FString CachedActorLabel; // 0x28
    FSoftObjectPath ObjectPtr; // 0x38
    char pad_50[0x20];
    TArray<UPropertyValue*> CapturedProperties; // 0x70
    TArray<FFunctionCaller> FunctionCallers; // 0x80
    static UVariantObjectBinding* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
