#include "FPrimaryAssetId.hpp"
#include "UAsyncActionLoadPrimaryAssetBase.hpp"
#include "UAsyncActionLoadPrimaryAssetClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAsyncActionLoadPrimaryAssetClass* UAsyncActionLoadPrimaryAssetClass::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AsyncActionLoadPrimaryAssetClass");
    return (UAsyncActionLoadPrimaryAssetClass*)res;
}
UAsyncActionLoadPrimaryAssetClass* UAsyncActionLoadPrimaryAssetClass::AsyncLoadPrimaryAssetClass(UObject* WorldContextObject, FPrimaryAssetId PrimaryAsset, TArray<FName>& LoadBundles) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AsyncActionLoadPrimaryAssetClass.AsyncLoadPrimaryAssetClass"));
    struct Params_AsyncLoadPrimaryAssetClass {
        UObject* WorldContextObject; // 0x0
        FPrimaryAssetId PrimaryAsset; // 0x8
        TArray<FName> LoadBundles; // 0x18
        UAsyncActionLoadPrimaryAssetClass* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_AsyncLoadPrimaryAssetClass params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PrimaryAsset = (FPrimaryAssetId)PrimaryAsset;
    params.LoadBundles = (TArray<FName>)LoadBundles;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    LoadBundles = params.LoadBundles;
    return (UAsyncActionLoadPrimaryAssetClass*)params.ReturnValue;
}
