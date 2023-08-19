#pragma once
#include <cstdint>
#include "FTimespan.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class UBinkFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UBinkFunctionLibrary* StaticClass();
    static FTimespan BinkLoadingMovie_GetTime();
    static FTimespan BinkLoadingMovie_GetDuration();
    static void Bink_DrawOverlays();
}; // Size: 0x28
#pragma pack(pop)
