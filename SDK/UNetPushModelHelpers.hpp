#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
#pragma pack(push, 1)
class UNetPushModelHelpers : public UBlueprintFunctionLibrary {
public:
    static UNetPushModelHelpers* StaticClass();
    static void MarkPropertyDirtyFromRepIndex(UObject* Object, int32_t RepIndex, FName PropertyName);
    static void MarkPropertyDirty(UObject* Object, FName PropertyName);
}; // Size: 0x28
#pragma pack(pop)
