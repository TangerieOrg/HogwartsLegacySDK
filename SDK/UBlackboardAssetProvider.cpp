#include "UBlackboardAssetProvider.hpp"
#include "UBlackboardData.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UBlackboardAssetProvider* UBlackboardAssetProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BlackboardAssetProvider");
    return (UBlackboardAssetProvider*)res;
}
UBlackboardData* UBlackboardAssetProvider::GetBlackboardAsset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BlackboardAssetProvider.GetBlackboardAsset"));
    struct Params_GetBlackboardAsset {
        UBlackboardData* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBlackboardAsset params{};
    ProcessEvent(func, &params);
    return (UBlackboardData*)params.ReturnValue;
}
