#pragma once
#include <cstdint>
#include "UBlueprintAsyncActionBase.hpp"
#pragma pack(push, 1)
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x20];
    static UARBaseAsyncTaskBlueprintProxy* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
