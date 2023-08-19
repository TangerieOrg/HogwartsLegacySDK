#include "FAssetData.hpp"
#include "UAssetTagsSubsystem.hpp"
#include "UEngineSubsystem.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAssetTagsSubsystem* UAssetTagsSubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/AssetTags.AssetTagsSubsystem");
    return (UAssetTagsSubsystem*)res;
}
TArray<FAssetData> UAssetTagsSubsystem::GetAssetsInCollection(FName Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetTags.AssetTagsSubsystem.GetAssetsInCollection"));
    struct Params_GetAssetsInCollection {
        FName Name; // 0x0
        TArray<FAssetData> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetAssetsInCollection params{};
    params.Name = (FName)Name;
    ProcessEvent(func, &params);
    return (TArray<FAssetData>)params.ReturnValue;
}
TArray<FName> UAssetTagsSubsystem::GetCollections() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetTags.AssetTagsSubsystem.GetCollections"));
    struct Params_GetCollections {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCollections params{};
    ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
TArray<FName> UAssetTagsSubsystem::GetCollectionsContainingAssetPtr(UObject* AssetPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr"));
    struct Params_GetCollectionsContainingAssetPtr {
        UObject* AssetPtr; // 0x0
        TArray<FName> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetCollectionsContainingAssetPtr params{};
    params.AssetPtr = (UObject*)AssetPtr;
    ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
bool UAssetTagsSubsystem::CollectionExists(FName Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetTags.AssetTagsSubsystem.CollectionExists"));
    struct Params_CollectionExists {
        FName Name; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_CollectionExists params{};
    params.Name = (FName)Name;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FName> UAssetTagsSubsystem::GetCollectionsContainingAssetData(FAssetData& AssetData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData"));
    struct Params_GetCollectionsContainingAssetData {
        FAssetData AssetData; // 0x0
        TArray<FName> ReturnValue; // 0x60
    }; // Size: 0x70
    Params_GetCollectionsContainingAssetData params{};
    params.AssetData = (FAssetData)AssetData;
    ProcessEvent(func, &params);
    AssetData = params.AssetData;
    return (TArray<FName>)params.ReturnValue;
}
TArray<FName> UAssetTagsSubsystem::GetCollectionsContainingAsset(FName AssetPathName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset"));
    struct Params_GetCollectionsContainingAsset {
        FName AssetPathName; // 0x0
        TArray<FName> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetCollectionsContainingAsset params{};
    params.AssetPathName = (FName)AssetPathName;
    ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
