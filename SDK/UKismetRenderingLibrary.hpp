#pragma once
#include <cstdint>
#include "ETextureRenderTargetFormat.hpp"
#include "FColor.hpp"
#include "FLinearColor.hpp"
#include "FSkelMeshSkinWeightInfo.hpp"
#include "TextureCompressionSettings.hpp"
#include "TextureMipGenSettings.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UPrimitiveComponent;
class UTextureRenderTarget2D;
class UTextureRenderTargetVolume;
class UObject;
class UTexture2D;
class UTextureRenderTarget2DArray;
struct FDrawToRenderTargetContext;
class UMaterialInterface;
class UCanvas;
struct FVector2D;
#pragma pack(push, 1)
class UKismetRenderingLibrary : public UBlueprintFunctionLibrary {
public:
    static UKismetRenderingLibrary* StaticClass();
    static void SetCastInsetShadowForAllAttachments(UPrimitiveComponent* PrimitiveComponent, bool bCastInsetShadow, bool bLightAttachmentsAsGroup);
    static UTexture2D* RenderTargetCreateStaticTexture2DEditorOnly(UTextureRenderTarget2D* RenderTarget, FString Name, TextureCompressionSettings CompressionSettings, TextureMipGenSettings MipSettings);
    static void ReleaseRenderTarget2D(UTextureRenderTarget2D* TextureRenderTarget);
    static FColor ReadRenderTargetUV(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, float U, float V);
    static FLinearColor ReadRenderTargetRawUV(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, float U, float V);
    static FLinearColor ReadRenderTargetRawPixel(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, int32_t X, int32_t Y);
    static FColor ReadRenderTargetPixel(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, int32_t X, int32_t Y);
    static FSkelMeshSkinWeightInfo MakeSkinWeightInfo(int32_t Bone0, uint8_t Weight0, int32_t Bone1, uint8_t Weight1, int32_t Bone2, uint8_t Weight2, int32_t Bone3, uint8_t Weight3);
    static UTexture2D* ImportFileAsTexture2D(UObject* WorldContextObject, FString Filename);
    static UTexture2D* ImportBufferAsTexture2D(UObject* WorldContextObject, TArray<uint8_t>& Buffer);
    static void ExportTexture2D(UObject* WorldContextObject, UTexture2D* Texture, FString FilePath, FString Filename);
    static void ExportRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, FString FilePath, FString Filename);
    static void EndDrawCanvasToRenderTarget(UObject* WorldContextObject, FDrawToRenderTargetContext& Context);
    static void DrawMaterialToRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, UMaterialInterface* Material);
    static UTextureRenderTargetVolume* CreateRenderTargetVolume(UObject* WorldContextObject, int32_t Width, int32_t Height, int32_t Depth, ETextureRenderTargetFormat Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps);
    static UTextureRenderTarget2DArray* CreateRenderTarget2DArray(UObject* WorldContextObject, int32_t Width, int32_t Height, int32_t Slices, ETextureRenderTargetFormat Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps);
    static UTextureRenderTarget2D* CreateRenderTarget2D(UObject* WorldContextObject, int32_t Width, int32_t Height, ETextureRenderTargetFormat Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps);
    static void ConvertRenderTargetToTexture2DEditorOnly(UObject* WorldContextObject, UTextureRenderTarget2D* RenderTarget, UTexture2D* Texture);
    static void ClearRenderTarget2D(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, FLinearColor ClearColor);
    static void BreakSkinWeightInfo(FSkelMeshSkinWeightInfo InWeight, int32_t& Bone0, uint8_t& Weight0, int32_t& Bone1, uint8_t& Weight1, int32_t& Bone2, uint8_t& Weight2, int32_t& Bone3, uint8_t& Weight3);
    static void BeginDrawCanvasToRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, UCanvas*& Canvas, FVector2D& Size, FDrawToRenderTargetContext& Context);
}; // Size: 0x28
#pragma pack(pop)
