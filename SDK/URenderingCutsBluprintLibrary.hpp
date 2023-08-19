#pragma once
#include <cstdint>
#include "FRenderingCutBits.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
#pragma pack(push, 1)
class URenderingCutsBluprintLibrary : public UBlueprintFunctionLibrary {
public:
    static URenderingCutsBluprintLibrary* StaticClass();
    static void TriggerRenderingCut(UObject* WorldContextObject, FRenderingCutBits RenderingCuts);
    static void TriggerCameraCut(UObject* WorldContextObject);
}; // Size: 0x28
#pragma pack(pop)
