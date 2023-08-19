#include "AActor.hpp"
#include "ALevelVariantSetsActor.hpp"
#include "FSoftObjectPath.hpp"
#include "UFunction.hpp"
#include "ULevelVariantSets.hpp"
ULevelVariantSets* ALevelVariantSetsActor::GetLevelVariantSets(bool bLoad) {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets"));
    struct Params_GetLevelVariantSets {
        bool bLoad; // 0x0
        char pad_1[0x7];
        ULevelVariantSets* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetLevelVariantSets params{};
    params.bLoad = (bool)bLoad;
    ProcessEvent(func, &params);
    return (ULevelVariantSets*)params.ReturnValue;
}
bool ALevelVariantSetsActor::SwitchOnVariantByName(FString VariantSetName, FString VariantName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName"));
    struct Params_SwitchOnVariantByName {
        FString VariantSetName; // 0x0
        FString VariantName; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_SwitchOnVariantByName params{};
    params.VariantSetName = (FString)VariantSetName;
    params.VariantName = (FString)VariantName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ALevelVariantSetsActor* ALevelVariantSetsActor::StaticClass() {
    static auto res = find_uobject("Class /Script/VariantManagerContent.LevelVariantSetsActor");
    return (ALevelVariantSetsActor*)res;
}
bool ALevelVariantSetsActor::SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex"));
    struct Params_SwitchOnVariantByIndex {
        int32_t VariantSetIndex; // 0x0
        int32_t VariantIndex; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_SwitchOnVariantByIndex params{};
    params.VariantSetIndex = (int32_t)VariantSetIndex;
    params.VariantIndex = (int32_t)VariantIndex;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ALevelVariantSetsActor::SetLevelVariantSets(ULevelVariantSets* InVariantSets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets"));
    struct Params_SetLevelVariantSets {
        ULevelVariantSets* InVariantSets; // 0x0
    }; // Size: 0x8
    Params_SetLevelVariantSets params{};
    params.InVariantSets = (ULevelVariantSets*)InVariantSets;
    ProcessEvent(func, &params);
}
