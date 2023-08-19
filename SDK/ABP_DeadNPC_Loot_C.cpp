#include "ABP_DeadNPC_Loot_C.hpp"
#include "AWorldObject.hpp"
#include "FCalloutInformation.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBoxComponent.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "ULootDropComponent.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
void ABP_DeadNPC_Loot_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/DeadNpc/Placeable_DeadNPC/BP_DeadNPC_Loot.BP_DeadNPC_Loot_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
ABP_DeadNPC_Loot_C* ABP_DeadNPC_Loot_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/WorldEvents/Blueprints/DeadNpc/Placeable_DeadNPC/BP_DeadNPC_Loot.BP_DeadNPC_Loot_C");
    return (ABP_DeadNPC_Loot_C*)res;
}
void ABP_DeadNPC_Loot_C::SetSpecificLoot(int32_t NoteIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/DeadNpc/Placeable_DeadNPC/BP_DeadNPC_Loot.BP_DeadNPC_Loot_C.SetSpecificLoot"));
    struct Params_SetSpecificLoot {
        int32_t NoteIndex; // 0x0
    }; // Size: 0x4
    Params_SetSpecificLoot params{};
    params.NoteIndex = (int32_t)NoteIndex;
    ProcessEvent(func, &params);
}
void ABP_DeadNPC_Loot_C::BndEvt__BP_DeadNPC_Loot_LootDrop_K2Node_ComponentBoundEvent_0_OnInventoryUpdated__DelegateSignature(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/DeadNpc/Placeable_DeadNPC/BP_DeadNPC_Loot.BP_DeadNPC_Loot_C.BndEvt__BP_DeadNPC_Loot_LootDrop_K2Node_ComponentBoundEvent_0_OnInventoryUpdated__DelegateSignature"));
    struct Params_BndEvt__BP_DeadNPC_Loot_LootDrop_K2Node_ComponentBoundEvent_0_OnInventoryUpdated__DelegateSignature {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_BndEvt__BP_DeadNPC_Loot_LootDrop_K2Node_ComponentBoundEvent_0_OnInventoryUpdated__DelegateSignature params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
void ABP_DeadNPC_Loot_C::ExecuteUbergraph_BP_DeadNPC_Loot(int32_t EntryPoint, UObject* K2Node_ComponentBoundEvent_i_caller, int32_t K2Node_CustomEvent_NoteIndex, FCalloutInformation K2Node_MakeStruct_CalloutInformation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/DeadNpc/Placeable_DeadNPC/BP_DeadNPC_Loot.BP_DeadNPC_Loot_C.ExecuteUbergraph_BP_DeadNPC_Loot"));
    struct Params_ExecuteUbergraph_BP_DeadNPC_Loot {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UObject* K2Node_ComponentBoundEvent_i_caller; // 0x8
        int32_t K2Node_CustomEvent_NoteIndex; // 0x10
        char pad_14[0x4];
        FCalloutInformation K2Node_MakeStruct_CalloutInformation; // 0x18
    }; // Size: 0x70
    Params_ExecuteUbergraph_BP_DeadNPC_Loot params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_ComponentBoundEvent_i_caller = (UObject*)K2Node_ComponentBoundEvent_i_caller;
    params.K2Node_CustomEvent_NoteIndex = (int32_t)K2Node_CustomEvent_NoteIndex;
    params.K2Node_MakeStruct_CalloutInformation = (FCalloutInformation)K2Node_MakeStruct_CalloutInformation;
    ProcessEvent(func, &params);
}
