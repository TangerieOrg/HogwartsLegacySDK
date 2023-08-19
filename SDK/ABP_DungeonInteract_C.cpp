#include "AActor.hpp"
#include "ABP_DungeonInteract_C.hpp"
#include "ABP_DungeonLOCs_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTService_AvaAITree.hpp"
#include "UBillboardComponent.hpp"
#include "UCapsuleComponent.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "UWidgetComponent.hpp"
ABP_DungeonInteract_C* ABP_DungeonInteract_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Dungeons/BluePrints/BP_DungeonInteract.BP_DungeonInteract_C");
    return (ABP_DungeonInteract_C*)res;
}
void ABP_DungeonInteract_C::Interact(UBTService_AvaAITree* AvaService) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonInteract.BP_DungeonInteract_C.Interact"));
    struct Params_Interact {
        UBTService_AvaAITree* AvaService; // 0x0
    }; // Size: 0x8
    Params_Interact params{};
    params.AvaService = (UBTService_AvaAITree*)AvaService;
    ProcessEvent(func, &params);
}
void ABP_DungeonInteract_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonInteract.BP_DungeonInteract_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_DungeonInteract_C::InteractedWith__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonInteract.BP_DungeonInteract_C.InteractedWith__DelegateSignature"));
    struct Params_InteractedWith__DelegateSignature {
    }; // Size: 0x0
    Params_InteractedWith__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_DungeonInteract_C::ExecuteUbergraph_BP_DungeonInteract(int32_t EntryPoint, bool Temp_bool_Variable, FName Temp_name_Variable, UBTService_AvaAITree* K2Node_Event_AvaService, bool CallFunc_EqualEqual_NameName_ReturnValue, AActor* CallFunc_GetParentActor_ReturnValue, FName K2Node_Select_Default, ABP_DungeonLOCs_C* K2Node_DynamicCast_AsBP_Dungeon_LOCs, bool K2Node_DynamicCast_bSuccess) {}
