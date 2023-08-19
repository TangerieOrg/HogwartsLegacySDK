#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
#include "UStreamlineReflexMode.hpp"
#include "UStreamlineReflexSupport.hpp"
#pragma pack(push, 1)
class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary {
public:
    static UStreamlineLibraryReflex* StaticClass();
    static void SetReflexMode(UStreamlineReflexMode Mode);
    static UStreamlineReflexSupport QueryReflexSupport();
    static bool IsReflexSupported();
    static float GetRenderLatencyInMs();
    static UStreamlineReflexMode GetReflexMode();
    static float GetGameToRenderLatencyInMs();
    static float GetGameLatencyInMs();
    static UStreamlineReflexMode GetDefaultReflexMode();
}; // Size: 0x28
#pragma pack(pop)
