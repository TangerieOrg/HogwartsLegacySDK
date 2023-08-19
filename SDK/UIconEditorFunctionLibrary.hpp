#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UDataTable;
class UTexture2D;
struct FIconInfo;
class UTextureRenderTarget2D;
class USkeleton;
class UAnimSequence;
#pragma pack(push, 1)
class UIconEditorFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UIconEditorFunctionLibrary* StaticClass();
    static void UpdateIconTableRow(UDataTable* Table, FName RowName, FIconInfo& IconInfo, bool bSave);
    static void SaveImageFromRenderTargets(FName Name, UTextureRenderTarget2D* ColorTextureRenderTarget, int32_t DownResFactor);
    static TArray<UAnimSequence*> GetAnimationsForSkeleton(USkeleton* Skeleton);
    static UTexture2D* CreateTextureFromRenderTargets(UTextureRenderTarget2D* ColorTextureRenderTarget, FString PackageName, int32_t DownResFactor);
}; // Size: 0x28
#pragma pack(pop)
