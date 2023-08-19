#include "ETextureRenderTargetFormat.hpp"
#include "FColor.hpp"
#include "FDrawToRenderTargetContext.hpp"
#include "FLinearColor.hpp"
#include "FSkelMeshSkinWeightInfo.hpp"
#include "FVector2D.hpp"
#include "TextureCompressionSettings.hpp"
#include "TextureMipGenSettings.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UCanvas.hpp"
#include "UFunction.hpp"
#include "UKismetRenderingLibrary.hpp"
#include "UMaterialInterface.hpp"
#include "UObject.hpp"
#include "UPrimitiveComponent.hpp"
#include "UTexture2D.hpp"
#include "UTextureRenderTarget2D.hpp"
#include "UTextureRenderTarget2DArray.hpp"
#include "UTextureRenderTargetVolume.hpp"
void UKismetRenderingLibrary::SetCastInsetShadowForAllAttachments(UPrimitiveComponent* PrimitiveComponent, bool bCastInsetShadow, bool bLightAttachmentsAsGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetRenderingLibrary.SetCastInsetShadowForAllAttachments"));
    struct Params_SetCastInsetShadowForAllAttachments {
        UPrimitiveComponent* PrimitiveComponent; // 0x0
        bool bCastInsetShadow; // 0x8
        bool bLightAttachmentsAsGroup; // 0x9
    }; // Size: 0xa
    Params_SetCastInsetShadowForAllAttachments params{};
    params.PrimitiveComponent = (UPrimitiveComponent*)PrimitiveComponent;
    params.bCastInsetShadow = (bool)bCastInsetShadow;
    params.bLightAttachmentsAsGroup = (bool)bLightAttachmentsAsGroup;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UKismetRenderingLibrary* UKismetRenderingLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.KismetRenderingLibrary");
    return (UKismetRenderingLibrary*)res;
}
UTexture2D* UKismetRenderingLibrary::RenderTargetCreateStaticTexture2DEditorOnly(UTextureRenderTarget2D* RenderTarget, FString Name, TextureCompressionSettings CompressionSettings, TextureMipGenSettings MipSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetRenderingLibrary.RenderTargetCreateStaticTexture2DEditorOnly"));
    struct Params_RenderTargetCreateStaticTexture2DEditorOnly {
        UTextureRenderTarget2D* RenderTarget; // 0x0
        FString Name; // 0x8
        TextureCompressionSettings CompressionSettings; // 0x18
        TextureMipGenSettings MipSettings; // 0x19
        char pad_1a[0x6];
        UTexture2D* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_RenderTargetCreateStaticTexture2DEditorOnly params{};
    params.RenderTarget = (UTextureRenderTarget2D*)RenderTarget;
    params.Name = (FString)Name;
    params.CompressionSettings = (TextureCompressionSettings)CompressionSettings;
    params.MipSettings = (TextureMipGenSettings)MipSettings;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UTexture2D*)params.ReturnValue;
}
FColor UKismetRenderingLibrary::ReadRenderTargetUV(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, float U, float V) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetRenderingLibrary.ReadRenderTargetUV"));
    struct Params_ReadRenderTargetUV {
        UObject* WorldContextObject; // 0x0
        UTextureRenderTarget2D* TextureRenderTarget; // 0x8
        float U; // 0x10
        float V; // 0x14
        FColor ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_ReadRenderTargetUV params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.TextureRenderTarget = (UTextureRenderTarget2D*)TextureRenderTarget;
    params.U = (float)U;
    params.V = (float)V;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FColor)params.ReturnValue;
}
void UKismetRenderingLibrary::ReleaseRenderTarget2D(UTextureRenderTarget2D* TextureRenderTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetRenderingLibrary.ReleaseRenderTarget2D"));
    struct Params_ReleaseRenderTarget2D {
        UTextureRenderTarget2D* TextureRenderTarget; // 0x0
    }; // Size: 0x8
    Params_ReleaseRenderTarget2D params{};
    params.TextureRenderTarget = (UTextureRenderTarget2D*)TextureRenderTarget;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FLinearColor UKismetRenderingLibrary::ReadRenderTargetRawUV(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, float U, float V) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetRenderingLibrary.ReadRenderTargetRawUV"));
    struct Params_ReadRenderTargetRawUV {
        UObject* WorldContextObject; // 0x0
        UTextureRenderTarget2D* TextureRenderTarget; // 0x8
        float U; // 0x10
        float V; // 0x14
        FLinearColor ReturnValue; // 0x18
    }; // Size: 0x28
    Params_ReadRenderTargetRawUV params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.TextureRenderTarget = (UTextureRenderTarget2D*)TextureRenderTarget;
    params.U = (float)U;
    params.V = (float)V;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FColor UKismetRenderingLibrary::ReadRenderTargetPixel(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, int32_t X, int32_t Y) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetRenderingLibrary.ReadRenderTargetPixel"));
    struct Params_ReadRenderTargetPixel {
        UObject* WorldContextObject; // 0x0
        UTextureRenderTarget2D* TextureRenderTarget; // 0x8
        int32_t X; // 0x10
        int32_t Y; // 0x14
        FColor ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_ReadRenderTargetPixel params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.TextureRenderTarget = (UTextureRenderTarget2D*)TextureRenderTarget;
    params.X = (int32_t)X;
    params.Y = (int32_t)Y;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FColor)params.ReturnValue;
}
FLinearColor UKismetRenderingLibrary::ReadRenderTargetRawPixel(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, int32_t X, int32_t Y) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetRenderingLibrary.ReadRenderTargetRawPixel"));
    struct Params_ReadRenderTargetRawPixel {
        UObject* WorldContextObject; // 0x0
        UTextureRenderTarget2D* TextureRenderTarget; // 0x8
        int32_t X; // 0x10
        int32_t Y; // 0x14
        FLinearColor ReturnValue; // 0x18
    }; // Size: 0x28
    Params_ReadRenderTargetRawPixel params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.TextureRenderTarget = (UTextureRenderTarget2D*)TextureRenderTarget;
    params.X = (int32_t)X;
    params.Y = (int32_t)Y;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FSkelMeshSkinWeightInfo UKismetRenderingLibrary::MakeSkinWeightInfo(int32_t Bone0, uint8_t Weight0, int32_t Bone1, uint8_t Weight1, int32_t Bone2, uint8_t Weight2, int32_t Bone3, uint8_t Weight3) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetRenderingLibrary.MakeSkinWeightInfo"));
    struct Params_MakeSkinWeightInfo {
        int32_t Bone0; // 0x0
        uint8_t Weight0; // 0x4
        char pad_5[0x3];
        int32_t Bone1; // 0x8
        uint8_t Weight1; // 0xc
        char pad_d[0x3];
        int32_t Bone2; // 0x10
        uint8_t Weight2; // 0x14
        char pad_15[0x3];
        int32_t Bone3; // 0x18
        uint8_t Weight3; // 0x1c
        char pad_1d[0x3];
        FSkelMeshSkinWeightInfo ReturnValue; // 0x20
    }; // Size: 0x5c
    Params_MakeSkinWeightInfo params{};
    params.Bone0 = (int32_t)Bone0;
    params.Weight0 = (uint8_t)Weight0;
    params.Bone1 = (int32_t)Bone1;
    params.Weight1 = (uint8_t)Weight1;
    params.Bone2 = (int32_t)Bone2;
    params.Weight2 = (uint8_t)Weight2;
    params.Bone3 = (int32_t)Bone3;
    params.Weight3 = (uint8_t)Weight3;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSkelMeshSkinWeightInfo)params.ReturnValue;
}
UTexture2D* UKismetRenderingLibrary::ImportFileAsTexture2D(UObject* WorldContextObject, FString Filename) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetRenderingLibrary.ImportFileAsTexture2D"));
    struct Params_ImportFileAsTexture2D {
        UObject* WorldContextObject; // 0x0
        FString Filename; // 0x8
        UTexture2D* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_ImportFileAsTexture2D params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Filename = (FString)Filename;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UTexture2D*)params.ReturnValue;
}
UTexture2D* UKismetRenderingLibrary::ImportBufferAsTexture2D(UObject* WorldContextObject, TArray<uint8_t>& Buffer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetRenderingLibrary.ImportBufferAsTexture2D"));
    struct Params_ImportBufferAsTexture2D {
        UObject* WorldContextObject; // 0x0
        TArray<uint8_t> Buffer; // 0x8
        UTexture2D* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_ImportBufferAsTexture2D params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Buffer = (TArray<uint8_t>)Buffer;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Buffer = params.Buffer;
    return (UTexture2D*)params.ReturnValue;
}
void UKismetRenderingLibrary::ExportTexture2D(UObject* WorldContextObject, UTexture2D* Texture, FString FilePath, FString Filename) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetRenderingLibrary.ExportTexture2D"));
    struct Params_ExportTexture2D {
        UObject* WorldContextObject; // 0x0
        UTexture2D* Texture; // 0x8
        FString FilePath; // 0x10
        FString Filename; // 0x20
    }; // Size: 0x30
    Params_ExportTexture2D params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Texture = (UTexture2D*)Texture;
    params.FilePath = (FString)FilePath;
    params.Filename = (FString)Filename;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetRenderingLibrary::ExportRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, FString FilePath, FString Filename) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetRenderingLibrary.ExportRenderTarget"));
    struct Params_ExportRenderTarget {
        UObject* WorldContextObject; // 0x0
        UTextureRenderTarget2D* TextureRenderTarget; // 0x8
        FString FilePath; // 0x10
        FString Filename; // 0x20
    }; // Size: 0x30
    Params_ExportRenderTarget params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.TextureRenderTarget = (UTextureRenderTarget2D*)TextureRenderTarget;
    params.FilePath = (FString)FilePath;
    params.Filename = (FString)Filename;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UTextureRenderTarget2D* UKismetRenderingLibrary::CreateRenderTarget2D(UObject* WorldContextObject, int32_t Width, int32_t Height, ETextureRenderTargetFormat Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetRenderingLibrary.CreateRenderTarget2D"));
    struct Params_CreateRenderTarget2D {
        UObject* WorldContextObject; // 0x0
        int32_t Width; // 0x8
        int32_t Height; // 0xc
        ETextureRenderTargetFormat Format; // 0x10
        char pad_11[0x3];
        FLinearColor ClearColor; // 0x14
        bool bAutoGenerateMipMaps; // 0x24
        char pad_25[0x3];
        UTextureRenderTarget2D* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_CreateRenderTarget2D params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Width = (int32_t)Width;
    params.Height = (int32_t)Height;
    params.Format = (ETextureRenderTargetFormat)Format;
    params.ClearColor = (FLinearColor)ClearColor;
    params.bAutoGenerateMipMaps = (bool)bAutoGenerateMipMaps;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UTextureRenderTarget2D*)params.ReturnValue;
}
void UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(UObject* WorldContextObject, FDrawToRenderTargetContext& Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetRenderingLibrary.EndDrawCanvasToRenderTarget"));
    struct Params_EndDrawCanvasToRenderTarget {
        UObject* WorldContextObject; // 0x0
        FDrawToRenderTargetContext Context; // 0x8
    }; // Size: 0x18
    Params_EndDrawCanvasToRenderTarget params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Context = (FDrawToRenderTargetContext)Context;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Context = params.Context;
}
void UKismetRenderingLibrary::DrawMaterialToRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, UMaterialInterface* Material) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetRenderingLibrary.DrawMaterialToRenderTarget"));
    struct Params_DrawMaterialToRenderTarget {
        UObject* WorldContextObject; // 0x0
        UTextureRenderTarget2D* TextureRenderTarget; // 0x8
        UMaterialInterface* Material; // 0x10
    }; // Size: 0x18
    Params_DrawMaterialToRenderTarget params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.TextureRenderTarget = (UTextureRenderTarget2D*)TextureRenderTarget;
    params.Material = (UMaterialInterface*)Material;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UTextureRenderTargetVolume* UKismetRenderingLibrary::CreateRenderTargetVolume(UObject* WorldContextObject, int32_t Width, int32_t Height, int32_t Depth, ETextureRenderTargetFormat Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetRenderingLibrary.CreateRenderTargetVolume"));
    struct Params_CreateRenderTargetVolume {
        UObject* WorldContextObject; // 0x0
        int32_t Width; // 0x8
        int32_t Height; // 0xc
        int32_t Depth; // 0x10
        ETextureRenderTargetFormat Format; // 0x14
        char pad_15[0x3];
        FLinearColor ClearColor; // 0x18
        bool bAutoGenerateMipMaps; // 0x28
        char pad_29[0x7];
        UTextureRenderTargetVolume* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_CreateRenderTargetVolume params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Width = (int32_t)Width;
    params.Height = (int32_t)Height;
    params.Depth = (int32_t)Depth;
    params.Format = (ETextureRenderTargetFormat)Format;
    params.ClearColor = (FLinearColor)ClearColor;
    params.bAutoGenerateMipMaps = (bool)bAutoGenerateMipMaps;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UTextureRenderTargetVolume*)params.ReturnValue;
}
UTextureRenderTarget2DArray* UKismetRenderingLibrary::CreateRenderTarget2DArray(UObject* WorldContextObject, int32_t Width, int32_t Height, int32_t Slices, ETextureRenderTargetFormat Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetRenderingLibrary.CreateRenderTarget2DArray"));
    struct Params_CreateRenderTarget2DArray {
        UObject* WorldContextObject; // 0x0
        int32_t Width; // 0x8
        int32_t Height; // 0xc
        int32_t Slices; // 0x10
        ETextureRenderTargetFormat Format; // 0x14
        char pad_15[0x3];
        FLinearColor ClearColor; // 0x18
        bool bAutoGenerateMipMaps; // 0x28
        char pad_29[0x7];
        UTextureRenderTarget2DArray* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_CreateRenderTarget2DArray params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Width = (int32_t)Width;
    params.Height = (int32_t)Height;
    params.Slices = (int32_t)Slices;
    params.Format = (ETextureRenderTargetFormat)Format;
    params.ClearColor = (FLinearColor)ClearColor;
    params.bAutoGenerateMipMaps = (bool)bAutoGenerateMipMaps;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UTextureRenderTarget2DArray*)params.ReturnValue;
}
void UKismetRenderingLibrary::ConvertRenderTargetToTexture2DEditorOnly(UObject* WorldContextObject, UTextureRenderTarget2D* RenderTarget, UTexture2D* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetRenderingLibrary.ConvertRenderTargetToTexture2DEditorOnly"));
    struct Params_ConvertRenderTargetToTexture2DEditorOnly {
        UObject* WorldContextObject; // 0x0
        UTextureRenderTarget2D* RenderTarget; // 0x8
        UTexture2D* Texture; // 0x10
    }; // Size: 0x18
    Params_ConvertRenderTargetToTexture2DEditorOnly params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.RenderTarget = (UTextureRenderTarget2D*)RenderTarget;
    params.Texture = (UTexture2D*)Texture;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetRenderingLibrary::ClearRenderTarget2D(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, FLinearColor ClearColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetRenderingLibrary.ClearRenderTarget2D"));
    struct Params_ClearRenderTarget2D {
        UObject* WorldContextObject; // 0x0
        UTextureRenderTarget2D* TextureRenderTarget; // 0x8
        FLinearColor ClearColor; // 0x10
    }; // Size: 0x20
    Params_ClearRenderTarget2D params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.TextureRenderTarget = (UTextureRenderTarget2D*)TextureRenderTarget;
    params.ClearColor = (FLinearColor)ClearColor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UKismetRenderingLibrary::BreakSkinWeightInfo(FSkelMeshSkinWeightInfo InWeight, int32_t& Bone0, uint8_t& Weight0, int32_t& Bone1, uint8_t& Weight1, int32_t& Bone2, uint8_t& Weight2, int32_t& Bone3, uint8_t& Weight3) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetRenderingLibrary.BreakSkinWeightInfo"));
    struct Params_BreakSkinWeightInfo {
        FSkelMeshSkinWeightInfo InWeight; // 0x0
        int32_t Bone0; // 0x3c
        uint8_t Weight0; // 0x40
        char pad_41[0x3];
        int32_t Bone1; // 0x44
        uint8_t Weight1; // 0x48
        char pad_49[0x3];
        int32_t Bone2; // 0x4c
        uint8_t Weight2; // 0x50
        char pad_51[0x3];
        int32_t Bone3; // 0x54
        uint8_t Weight3; // 0x58
    }; // Size: 0x59
    Params_BreakSkinWeightInfo params{};
    params.InWeight = (FSkelMeshSkinWeightInfo)InWeight;
    params.Bone0 = (int32_t)Bone0;
    params.Weight0 = (uint8_t)Weight0;
    params.Bone1 = (int32_t)Bone1;
    params.Weight1 = (uint8_t)Weight1;
    params.Bone2 = (int32_t)Bone2;
    params.Weight2 = (uint8_t)Weight2;
    params.Bone3 = (int32_t)Bone3;
    params.Weight3 = (uint8_t)Weight3;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Weight0 = params.Weight0;
    Bone0 = params.Bone0;
    Bone1 = params.Bone1;
    Weight1 = params.Weight1;
    Bone2 = params.Bone2;
    Weight2 = params.Weight2;
    Weight3 = params.Weight3;
    Bone3 = params.Bone3;
}
void UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, UCanvas*& Canvas, FVector2D& Size, FDrawToRenderTargetContext& Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetRenderingLibrary.BeginDrawCanvasToRenderTarget"));
    struct Params_BeginDrawCanvasToRenderTarget {
        UObject* WorldContextObject; // 0x0
        UTextureRenderTarget2D* TextureRenderTarget; // 0x8
        UCanvas* Canvas; // 0x10
        FVector2D Size; // 0x18
        FDrawToRenderTargetContext Context; // 0x20
    }; // Size: 0x30
    Params_BeginDrawCanvasToRenderTarget params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.TextureRenderTarget = (UTextureRenderTarget2D*)TextureRenderTarget;
    params.Canvas = (UCanvas*)Canvas;
    params.Size = (FVector2D)Size;
    params.Context = (FDrawToRenderTargetContext)Context;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Canvas = params.Canvas;
    Size = params.Size;
    Context = params.Context;
}
