#include "UAsyncActionLoadPrimaryAssetBase.hpp"
#include "UBlueprintAsyncActionBase.hpp"
UAsyncActionLoadPrimaryAssetBase* UAsyncActionLoadPrimaryAssetBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AsyncActionLoadPrimaryAssetBase");
    return (UAsyncActionLoadPrimaryAssetBase*)res;
}
