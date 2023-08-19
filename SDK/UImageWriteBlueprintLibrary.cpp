#include "FImageWriteOptions.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UImageWriteBlueprintLibrary.hpp"
#include "UTexture.hpp"
UImageWriteBlueprintLibrary* UImageWriteBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/ImageWriteQueue.ImageWriteBlueprintLibrary");
    return (UImageWriteBlueprintLibrary*)res;
}
void UImageWriteBlueprintLibrary::ExportToDisk(UTexture* Texture, FString Filename, FImageWriteOptions& OPTIONS) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk"));
    struct Params_ExportToDisk {
        UTexture* Texture; // 0x0
        FString Filename; // 0x8
        char pad_18[0x8];
        FImageWriteOptions OPTIONS; // 0x20
    }; // Size: 0x80
    Params_ExportToDisk params{};
    params.Texture = (UTexture*)Texture;
    params.Filename = (FString)Filename;
    params.OPTIONS = (FImageWriteOptions)OPTIONS;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OPTIONS = params.OPTIONS;
}
