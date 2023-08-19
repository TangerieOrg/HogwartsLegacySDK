#include "FIconInfo.hpp"
#include "UAnimSequence.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UDataTable.hpp"
#include "UFunction.hpp"
#include "UIconEditorFunctionLibrary.hpp"
#include "USkeleton.hpp"
#include "UTexture2D.hpp"
#include "UTextureRenderTarget2D.hpp"
UIconEditorFunctionLibrary* UIconEditorFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/UtilitiesRuntime.IconEditorFunctionLibrary");
    return (UIconEditorFunctionLibrary*)res;
}
TArray<UAnimSequence*> UIconEditorFunctionLibrary::GetAnimationsForSkeleton(USkeleton* Skeleton) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.IconEditorFunctionLibrary.GetAnimationsForSkeleton"));
    struct Params_GetAnimationsForSkeleton {
        USkeleton* Skeleton; // 0x0
        TArray<UAnimSequence*> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetAnimationsForSkeleton params{};
    params.Skeleton = (USkeleton*)Skeleton;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<UAnimSequence*>)params.ReturnValue;
}
void UIconEditorFunctionLibrary::UpdateIconTableRow(UDataTable* Table, FName RowName, FIconInfo& IconInfo, bool bSave) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.IconEditorFunctionLibrary.UpdateIconTableRow"));
    struct Params_UpdateIconTableRow {
        UDataTable* Table; // 0x0
        FName RowName; // 0x8
        FIconInfo IconInfo; // 0x10
        bool bSave; // 0xa0
    }; // Size: 0xa1
    Params_UpdateIconTableRow params{};
    params.Table = (UDataTable*)Table;
    params.RowName = (FName)RowName;
    params.IconInfo = (FIconInfo)IconInfo;
    params.bSave = (bool)bSave;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    IconInfo = params.IconInfo;
}
void UIconEditorFunctionLibrary::SaveImageFromRenderTargets(FName Name, UTextureRenderTarget2D* ColorTextureRenderTarget, int32_t DownResFactor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.IconEditorFunctionLibrary.SaveImageFromRenderTargets"));
    struct Params_SaveImageFromRenderTargets {
        FName Name; // 0x0
        UTextureRenderTarget2D* ColorTextureRenderTarget; // 0x8
        int32_t DownResFactor; // 0x10
    }; // Size: 0x14
    Params_SaveImageFromRenderTargets params{};
    params.Name = (FName)Name;
    params.ColorTextureRenderTarget = (UTextureRenderTarget2D*)ColorTextureRenderTarget;
    params.DownResFactor = (int32_t)DownResFactor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UTexture2D* UIconEditorFunctionLibrary::CreateTextureFromRenderTargets(UTextureRenderTarget2D* ColorTextureRenderTarget, FString PackageName, int32_t DownResFactor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.IconEditorFunctionLibrary.CreateTextureFromRenderTargets"));
    struct Params_CreateTextureFromRenderTargets {
        UTextureRenderTarget2D* ColorTextureRenderTarget; // 0x0
        FString PackageName; // 0x8
        int32_t DownResFactor; // 0x18
        char pad_1c[0x4];
        UTexture2D* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_CreateTextureFromRenderTargets params{};
    params.ColorTextureRenderTarget = (UTextureRenderTarget2D*)ColorTextureRenderTarget;
    params.PackageName = (FString)PackageName;
    params.DownResFactor = (int32_t)DownResFactor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UTexture2D*)params.ReturnValue;
}
