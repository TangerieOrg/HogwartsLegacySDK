#include "FPrimaryAssetId.hpp"
#include "UAsyncActionLoadPrimaryAsset.hpp"
#include "UAsyncActionLoadPrimaryAssetBase.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAsyncActionLoadPrimaryAsset* UAsyncActionLoadPrimaryAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AsyncActionLoadPrimaryAsset");
    return (UAsyncActionLoadPrimaryAsset*)res;
}
UAsyncActionLoadPrimaryAsset* UAsyncActionLoadPrimaryAsset::AsyncLoadPrimaryAsset(UObject* WorldContextObject, FPrimaryAssetId PrimaryAsset, TArray<FName>& LoadBundles) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AsyncActionLoadPrimaryAsset.AsyncLoadPrimaryAsset"));
    struct Params_AsyncLoadPrimaryAsset {
        UObject* WorldContextObject; // 0x0
        FPrimaryAssetId PrimaryAsset; // 0x8
        TArray<FName> LoadBundles; // 0x18
        UAsyncActionLoadPrimaryAsset* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_AsyncLoadPrimaryAsset params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PrimaryAsset = (FPrimaryAssetId)PrimaryAsset;
    params.LoadBundles = (TArray<FName>)LoadBundles;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    LoadBundles = params.LoadBundles;
    return (UAsyncActionLoadPrimaryAsset*)params.ReturnValue;
}
