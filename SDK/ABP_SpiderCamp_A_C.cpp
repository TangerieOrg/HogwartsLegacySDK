#include "AActor.hpp"
#include "ABP_SpiderCamp_A_C.hpp"
#include "ABP_SpiderEggs_C.hpp"
#include "AEncounterLocationCreator.hpp"
#include "E_AVA_OverlandSpiderTypes\Type.hpp"
#include "FVector2D.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
ABP_SpiderCamp_A_C* ABP_SpiderCamp_A_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/BanditCamps/Blueprints/BP_SpiderCamp_A.BP_SpiderCamp_A_C");
    return (ABP_SpiderCamp_A_C*)res;
}
void ABP_SpiderCamp_A_C::UserConstructionScript0(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, ABP_SpiderEggs_C* K2Node_DynamicCast_AsBP_Spider_Eggs, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/BanditCamps/Blueprints/BP_SpiderCamp_A.BP_SpiderCamp_A_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x0
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x1
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x2
        char pad_3[0x5];
        ABP_SpiderEggs_C* K2Node_DynamicCast_AsBP_Spider_Eggs; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
    }; // Size: 0x11
    Params_UserConstructionScript params{};
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.K2Node_DynamicCast_AsBP_Spider_Eggs = (ABP_SpiderEggs_C*)K2Node_DynamicCast_AsBP_Spider_Eggs;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
