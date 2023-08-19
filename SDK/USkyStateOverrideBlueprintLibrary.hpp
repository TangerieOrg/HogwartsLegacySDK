#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
class USkyStateOverride;
#pragma pack(push, 1)
class USkyStateOverrideBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static USkyStateOverrideBlueprintLibrary* StaticClass();
    static void RegisterSkyStateOverride(UObject* WorldContextObject, USkyStateOverride* SkyStateOverride, bool& bSuccess);
    static void IsSkyStateOverrideRegistered(UObject* WorldContextObject, USkyStateOverride* SkyStateOverride, bool& bRegistered);
    static void DeregisterSkyStateOverride(UObject* WorldContextObject, USkyStateOverride* SkyStateOverride);
}; // Size: 0x28
#pragma pack(pop)
