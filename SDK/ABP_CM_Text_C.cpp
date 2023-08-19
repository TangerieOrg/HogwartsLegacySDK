#include "AActor.hpp"
#include "ABP_CM_Text_C.hpp"
#include "ABiped_Player.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "UTextRenderComponent.hpp"
ABP_CM_Text_C* ABP_CM_Text_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Experimental/Levels/CoreMechanics/Blueprints/BP_CM_Text.BP_CM_Text_C");
    return (ABP_CM_Text_C*)res;
}
void ABP_CM_Text_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Experimental/Levels/CoreMechanics/Blueprints/BP_CM_Text.BP_CM_Text_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_CM_Text_C::UserConstructionScript0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Experimental/Levels/CoreMechanics/Blueprints/BP_CM_Text.BP_CM_Text_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
void ABP_CM_Text_C::StartText() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Experimental/Levels/CoreMechanics/Blueprints/BP_CM_Text.BP_CM_Text_C.StartText"));
    struct Params_StartText {
    }; // Size: 0x0
    Params_StartText params{};
    ProcessEvent(func, &params);
}
void ABP_CM_Text_C::ExecuteUbergraph_BP_CM_Text(int32_t EntryPoint, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue) {}
