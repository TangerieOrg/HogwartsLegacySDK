#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UTexture;
struct FImageWriteOptions;
#pragma pack(push, 1)
class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UImageWriteBlueprintLibrary* StaticClass();
    static void ExportToDisk(UTexture* Texture, FString Filename, FImageWriteOptions& OPTIONS);
}; // Size: 0x28
#pragma pack(pop)
