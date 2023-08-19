#pragma once
#include <cstdint>
#include "UWidget.hpp"
class UObject;
class UBlueprint;
class UClass;
#pragma pack(push, 1)
class UAssetWidget : public UWidget {
public:
    UObject* Delegate; // 0x108
    char pad_110[0x10];
    static UAssetWidget* StaticClass();
    static UObject* SpawnObject(UObject* ObjectToSpawn);
    static void ShowAssetsInContentBrowser(TArray<UObject*>& InAssets);
    static void ShowAssetInContentBrowser(UObject* Asset);
    void SetAsset(UObject* InAsset);
    static UObject* GetSelectedAssetInContentBrowser(UClass* ObjectClass);
    static UClass* GetGeneratedClassFromBlueprint(UBlueprint* Blueprint);
    UObject* GetAsset();
    static UBlueprint* CastToBlueprint(UObject* Object);
}; // Size: 0x120
#pragma pack(pop)
