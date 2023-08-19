#pragma once
#include <cstdint>
#include "UARBaseAsyncTaskBlueprintProxy.hpp"
class UObject;
#pragma pack(push, 1)
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy {
public:
    char pad_50[0x30];
    static UARSaveWorldAsyncTaskBlueprintProxy* StaticClass();
    static UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(UObject* WorldContextObject);
}; // Size: 0x80
#pragma pack(pop)
