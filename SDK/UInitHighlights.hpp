#pragma once
#include <cstdint>
#include "UBlueprintAsyncActionBase.hpp"
class UObject;
#pragma pack(push, 1)
class UInitHighlights : public UBlueprintAsyncActionBase {
public:
    char pad_30[0xd0];
    static UInitHighlights* StaticClass();
    static UInitHighlights* InitHighlights(UObject* WorldContextObject, FString InGameName, bool Video, bool Screenshots);
}; // Size: 0x100
#pragma pack(pop)
