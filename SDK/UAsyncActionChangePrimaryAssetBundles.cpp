#include "FPrimaryAssetId.hpp"
#include "UAsyncActionChangePrimaryAssetBundles.hpp"
#include "UAsyncActionLoadPrimaryAssetBase.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAsyncActionChangePrimaryAssetBundles* UAsyncActionChangePrimaryAssetBundles::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AsyncActionChangePrimaryAssetBundles");
    return (UAsyncActionChangePrimaryAssetBundles*)res;
}
UAsyncActionChangePrimaryAssetBundles* UAsyncActionChangePrimaryAssetBundles::AsyncChangeBundleStateForPrimaryAssetList(UObject* WorldContextObject, TArray<FPrimaryAssetId>& PrimaryAssetList, TArray<FName>& AddBundles, TArray<FName>& RemoveBundles) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AsyncActionChangePrimaryAssetBundles.AsyncChangeBundleStateForPrimaryAssetList"));
    struct Params_AsyncChangeBundleStateForPrimaryAssetList {
        UObject* WorldContextObject; // 0x0
        TArray<FPrimaryAssetId> PrimaryAssetList; // 0x8
        TArray<FName> AddBundles; // 0x18
        TArray<FName> RemoveBundles; // 0x28
        UAsyncActionChangePrimaryAssetBundles* ReturnValue; // 0x38
    }; // Size: 0x40
    Params_AsyncChangeBundleStateForPrimaryAssetList params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PrimaryAssetList = (TArray<FPrimaryAssetId>)PrimaryAssetList;
    params.AddBundles = (TArray<FName>)AddBundles;
    params.RemoveBundles = (TArray<FName>)RemoveBundles;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PrimaryAssetList = params.PrimaryAssetList;
    AddBundles = params.AddBundles;
    RemoveBundles = params.RemoveBundles;
    return (UAsyncActionChangePrimaryAssetBundles*)params.ReturnValue;
}
UAsyncActionChangePrimaryAssetBundles* UAsyncActionChangePrimaryAssetBundles::AsyncChangeBundleStateForMatchingPrimaryAssets(UObject* WorldContextObject, TArray<FName>& NewBundles, TArray<FName>& OldBundles) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AsyncActionChangePrimaryAssetBundles.AsyncChangeBundleStateForMatchingPrimaryAssets"));
    struct Params_AsyncChangeBundleStateForMatchingPrimaryAssets {
        UObject* WorldContextObject; // 0x0
        TArray<FName> NewBundles; // 0x8
        TArray<FName> OldBundles; // 0x18
        UAsyncActionChangePrimaryAssetBundles* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_AsyncChangeBundleStateForMatchingPrimaryAssets params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.NewBundles = (TArray<FName>)NewBundles;
    params.OldBundles = (TArray<FName>)OldBundles;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OldBundles = params.OldBundles;
    NewBundles = params.NewBundles;
    return (UAsyncActionChangePrimaryAssetBundles*)params.ReturnValue;
}
