#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
class UTimeOverrideBase;
#pragma pack(push, 1)
class UTimeOverrideBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UTimeOverrideBlueprintLibrary* StaticClass();
    static void RegisterTimeOverride(UObject* WorldContextObject, UTimeOverrideBase* TimeOverride, bool& bSuccess);
    static void IsTimeOverrideRegistered(UObject* WorldContextObject, UTimeOverrideBase* TimeOverride, bool& bRegistered);
    static void DeregisterTimeOverride(UObject* WorldContextObject, UTimeOverrideBase* TimeOverride);
}; // Size: 0x28
#pragma pack(pop)
