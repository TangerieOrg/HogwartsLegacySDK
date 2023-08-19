#include "UBTT_Biped_Talk_Helper.hpp"
#include "UBlueprintHelper.hpp"
#include "UFunction.hpp"
#include "USceneRig.hpp"
UBTT_Biped_Talk_Helper* UBTT_Biped_Talk_Helper::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTT_Biped_Talk_Helper");
    return (UBTT_Biped_Talk_Helper*)res;
}
USceneRig* UBTT_Biped_Talk_Helper::GetBTTBipedTalkSceneRig() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BTT_Biped_Talk_Helper.GetBTTBipedTalkSceneRig"));
    struct Params_GetBTTBipedTalkSceneRig {
        USceneRig* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBTTBipedTalkSceneRig params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (USceneRig*)params.ReturnValue;
}
