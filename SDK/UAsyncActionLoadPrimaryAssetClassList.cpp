#include "FPrimaryAssetId.hpp"
#include "UAsyncActionLoadPrimaryAssetBase.hpp"
#include "UAsyncActionLoadPrimaryAssetClassList.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAsyncActionLoadPrimaryAssetClassList* UAsyncActionLoadPrimaryAssetClassList::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AsyncActionLoadPrimaryAssetClassList");
    return (UAsyncActionLoadPrimaryAssetClassList*)res;
}
UAsyncActionLoadPrimaryAssetClassList* UAsyncActionLoadPrimaryAssetClassList::AsyncLoadPrimaryAssetClassList(UObject* WorldContextObject, TArray<FPrimaryAssetId>& PrimaryAssetList, TArray<FName>& LoadBundles) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AsyncActionLoadPrimaryAssetClassList.AsyncLoadPrimaryAssetClassList"));
    struct Params_AsyncLoadPrimaryAssetClassList {
        UObject* WorldContextObject; // 0x0
        TArray<FPrimaryAssetId> PrimaryAssetList; // 0x8
        TArray<FName> LoadBundles; // 0x18
        UAsyncActionLoadPrimaryAssetClassList* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_AsyncLoadPrimaryAssetClassList params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PrimaryAssetList = (TArray<FPrimaryAssetId>)PrimaryAssetList;
    params.LoadBundles = (TArray<FName>)LoadBundles;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PrimaryAssetList = params.PrimaryAssetList;
    LoadBundles = params.LoadBundles;
    return (UAsyncActionLoadPrimaryAssetClassList*)params.ReturnValue;
}
