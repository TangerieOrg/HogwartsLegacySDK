#include "UBlueprintGeneratedClass.hpp"
#include "UFunction.hpp"
#include "ULevelVariantSets.hpp"
#include "UObject.hpp"
#include "UVariantSet.hpp"
UVariantSet* ULevelVariantSets::GetVariantSet(int32_t VariantSetIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSet"));
    struct Params_GetVariantSet {
        int32_t VariantSetIndex; // 0x0
        char pad_4[0x4];
        UVariantSet* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetVariantSet params{};
    params.VariantSetIndex = (int32_t)VariantSetIndex;
    ProcessEvent(func, &params);
    return (UVariantSet*)params.ReturnValue;
}
UVariantSet* ULevelVariantSets::GetVariantSetByName(FString VariantSetName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSetByName"));
    struct Params_GetVariantSetByName {
        FString VariantSetName; // 0x0
        UVariantSet* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetVariantSetByName params{};
    params.VariantSetName = (FString)VariantSetName;
    ProcessEvent(func, &params);
    return (UVariantSet*)params.ReturnValue;
}
ULevelVariantSets* ULevelVariantSets::StaticClass() {
    static auto res = find_uobject("Class /Script/VariantManagerContent.LevelVariantSets");
    return (ULevelVariantSets*)res;
}
int32_t ULevelVariantSets::GetNumVariantSets() {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.LevelVariantSets.GetNumVariantSets"));
    struct Params_GetNumVariantSets {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumVariantSets params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
