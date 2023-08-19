#include "ACLVisualFidelity.hpp"
#include "ACLVisualFidelityChangeResult.hpp"
#include "FLatentActionInfo.hpp"
#include "UAnimationCompressionLibraryDatabase.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAnimationCompressionLibraryDatabase* UAnimationCompressionLibraryDatabase::StaticClass() {
    static auto res = find_uobject("Class /Script/ACLPlugin.AnimationCompressionLibraryDatabase");
    return (UAnimationCompressionLibraryDatabase*)res;
}
void UAnimationCompressionLibraryDatabase::SetVisualFidelity(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UAnimationCompressionLibraryDatabase* DatabaseAsset, ACLVisualFidelityChangeResult& Result, ACLVisualFidelity VisualFidelity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ACLPlugin.AnimationCompressionLibraryDatabase.SetVisualFidelity"));
    struct Params_SetVisualFidelity {
        UObject* WorldContextObject; // 0x0
        FLatentActionInfo LatentInfo; // 0x8
        UAnimationCompressionLibraryDatabase* DatabaseAsset; // 0x20
        ACLVisualFidelityChangeResult Result; // 0x28
        ACLVisualFidelity VisualFidelity; // 0x29
    }; // Size: 0x2a
    Params_SetVisualFidelity params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    params.DatabaseAsset = (UAnimationCompressionLibraryDatabase*)DatabaseAsset;
    params.Result = (ACLVisualFidelityChangeResult)Result;
    params.VisualFidelity = (ACLVisualFidelity)VisualFidelity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Result = params.Result;
}
ACLVisualFidelity UAnimationCompressionLibraryDatabase::GetVisualFidelity(UAnimationCompressionLibraryDatabase* DatabaseAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ACLPlugin.AnimationCompressionLibraryDatabase.GetVisualFidelity"));
    struct Params_GetVisualFidelity {
        UAnimationCompressionLibraryDatabase* DatabaseAsset; // 0x0
        ACLVisualFidelity ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetVisualFidelity params{};
    params.DatabaseAsset = (UAnimationCompressionLibraryDatabase*)DatabaseAsset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ACLVisualFidelity)params.ReturnValue;
}
