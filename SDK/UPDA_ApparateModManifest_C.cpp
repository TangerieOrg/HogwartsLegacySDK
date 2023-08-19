#include "UFunction.hpp"
#include "UPDA_ApparateModManifest_C.hpp"
#include "UPrimaryDataAsset.hpp"
UPDA_ApparateModManifest_C* UPDA_ApparateModManifest_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/CustomContent/ModloaderAssets/PDA_ApparateModManifest.PDA_ApparateModManifest_C");
    return (UPDA_ApparateModManifest_C*)res;
}
void UPDA_ApparateModManifest_C::GetInfoOrDefault(FString Key, FString Default, FString& Value, FString CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FString CallFunc_SelectString_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/PDA_ApparateModManifest.PDA_ApparateModManifest_C.GetInfoOrDefault"));
    struct Params_GetInfoOrDefault {
        FString Key; // 0x0
        FString Default; // 0x10
        FString Value; // 0x20
        FString CallFunc_Map_Find_Value; // 0x30
        bool CallFunc_Map_Find_ReturnValue; // 0x40
        char pad_41[0x7];
        FString CallFunc_SelectString_ReturnValue; // 0x48
    }; // Size: 0x58
    Params_GetInfoOrDefault params{};
    params.Key = (FString)Key;
    params.Default = (FString)Default;
    params.Value = (FString)Value;
    params.CallFunc_Map_Find_Value = (FString)CallFunc_Map_Find_Value;
    params.CallFunc_Map_Find_ReturnValue = (bool)CallFunc_Map_Find_ReturnValue;
    params.CallFunc_SelectString_ReturnValue = (FString)CallFunc_SelectString_ReturnValue;
    ProcessEvent(func, &params);
    Value = params.Value;
}
