#include "FPrimaryAssetId.hpp"
#include "UAsyncActionLoadPrimaryAssetBase.hpp"
#include "UAsyncActionLoadPrimaryAssetList.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAsyncActionLoadPrimaryAssetList* UAsyncActionLoadPrimaryAssetList::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AsyncActionLoadPrimaryAssetList");
    return (UAsyncActionLoadPrimaryAssetList*)res;
}
UAsyncActionLoadPrimaryAssetList* UAsyncActionLoadPrimaryAssetList::AsyncLoadPrimaryAssetList(UObject* WorldContextObject, TArray<FPrimaryAssetId>& PrimaryAssetList, TArray<FName>& LoadBundles) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AsyncActionLoadPrimaryAssetList.AsyncLoadPrimaryAssetList"));
    struct Params_AsyncLoadPrimaryAssetList {
        UObject* WorldContextObject; // 0x0
        TArray<FPrimaryAssetId> PrimaryAssetList; // 0x8
        TArray<FName> LoadBundles; // 0x18
        UAsyncActionLoadPrimaryAssetList* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_AsyncLoadPrimaryAssetList params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PrimaryAssetList = (TArray<FPrimaryAssetId>)PrimaryAssetList;
    params.LoadBundles = (TArray<FName>)LoadBundles;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PrimaryAssetList = params.PrimaryAssetList;
    LoadBundles = params.LoadBundles;
    return (UAsyncActionLoadPrimaryAssetList*)params.ReturnValue;
}
