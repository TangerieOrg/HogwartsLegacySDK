#include "FDialogueDataTableHandles.hpp"
#include "UFacialComponentShimHelper.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UFacialComponentShimHelper* UFacialComponentShimHelper::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimationShim.FacialComponentShimHelper");
    return (UFacialComponentShimHelper*)res;
}
FDialogueDataTableHandles UFacialComponentShimHelper::PreloadPlayerMaleFemaleDialogueDataTables() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimationShim.FacialComponentShimHelper.PreloadPlayerMaleFemaleDialogueDataTables"));
    struct Params_PreloadPlayerMaleFemaleDialogueDataTables {
        FDialogueDataTableHandles ReturnValue; // 0x0
    }; // Size: 0x10
    Params_PreloadPlayerMaleFemaleDialogueDataTables params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FDialogueDataTableHandles)params.ReturnValue;
}
