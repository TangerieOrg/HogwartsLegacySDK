#include "UAssetWidget.hpp"
#include "UBlueprint.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UWidget.hpp"
UAssetWidget* UAssetWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AssetWidget");
    return (UAssetWidget*)res;
}
void UAssetWidget::ShowAssetsInContentBrowser(TArray<UObject*>& InAssets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AssetWidget.ShowAssetsInContentBrowser"));
    struct Params_ShowAssetsInContentBrowser {
        TArray<UObject*> InAssets; // 0x0
    }; // Size: 0x10
    Params_ShowAssetsInContentBrowser params{};
    params.InAssets = (TArray<UObject*>)InAssets;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InAssets = params.InAssets;
}
UObject* UAssetWidget::GetAsset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AssetWidget.GetAsset"));
    struct Params_GetAsset {
        UObject* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAsset params{};
    ProcessEvent(func, &params);
    return (UObject*)params.ReturnValue;
}
UObject* UAssetWidget::SpawnObject(UObject* ObjectToSpawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AssetWidget.SpawnObject"));
    struct Params_SpawnObject {
        UObject* ObjectToSpawn; // 0x0
        UObject* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SpawnObject params{};
    params.ObjectToSpawn = (UObject*)ObjectToSpawn;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UObject*)params.ReturnValue;
}
void UAssetWidget::ShowAssetInContentBrowser(UObject* Asset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AssetWidget.ShowAssetInContentBrowser"));
    struct Params_ShowAssetInContentBrowser {
        UObject* Asset; // 0x0
    }; // Size: 0x8
    Params_ShowAssetInContentBrowser params{};
    params.Asset = (UObject*)Asset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAssetWidget::SetAsset(UObject* InAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AssetWidget.SetAsset"));
    struct Params_SetAsset {
        UObject* InAsset; // 0x0
    }; // Size: 0x8
    Params_SetAsset params{};
    params.InAsset = (UObject*)InAsset;
    ProcessEvent(func, &params);
}
UObject* UAssetWidget::GetSelectedAssetInContentBrowser(UClass* ObjectClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AssetWidget.GetSelectedAssetInContentBrowser"));
    struct Params_GetSelectedAssetInContentBrowser {
        UClass* ObjectClass; // 0x0
        UObject* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetSelectedAssetInContentBrowser params{};
    params.ObjectClass = (UClass*)ObjectClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UObject*)params.ReturnValue;
}
UClass* UAssetWidget::GetGeneratedClassFromBlueprint(UBlueprint* Blueprint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AssetWidget.GetGeneratedClassFromBlueprint"));
    struct Params_GetGeneratedClassFromBlueprint {
        UBlueprint* Blueprint; // 0x0
        UClass* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetGeneratedClassFromBlueprint params{};
    params.Blueprint = (UBlueprint*)Blueprint;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UClass*)params.ReturnValue;
}
UBlueprint* UAssetWidget::CastToBlueprint(UObject* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AssetWidget.CastToBlueprint"));
    struct Params_CastToBlueprint {
        UObject* Object; // 0x0
        UBlueprint* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_CastToBlueprint params{};
    params.Object = (UObject*)Object;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UBlueprint*)params.ReturnValue;
}
