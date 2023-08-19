#include "AActor.hpp"
#include "ABP_DeadNPC_Body_C.hpp"
#include "ABP_DeadNPC_Loot_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "UStaticMeshComponent.hpp"
ABP_DeadNPC_Body_C* ABP_DeadNPC_Body_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/WorldEvents/Blueprints/DeadNpc/Placeable_DeadNPC/BP_DeadNPC_Body.BP_DeadNPC_Body_C");
    return (ABP_DeadNPC_Body_C*)res;
}
void ABP_DeadNPC_Body_C::Assign_Loot_Level(int32_t NewParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/DeadNpc/Placeable_DeadNPC/BP_DeadNPC_Body.BP_DeadNPC_Body_C.Assign Loot Level"));
    struct Params_Assign_Loot_Level {
        int32_t NewParam; // 0x0
    }; // Size: 0x4
    Params_Assign_Loot_Level params{};
    params.NewParam = (int32_t)NewParam;
    ProcessEvent(func, &params);
}
void ABP_DeadNPC_Body_C::ExecuteUbergraph_BP_DeadNPC_Body(int32_t EntryPoint, int32_t K2Node_CustomEvent_NewParam, ABP_DeadNPC_Loot_C* K2Node_DynamicCast_AsBP_Dead_NPC_Loot, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/DeadNpc/Placeable_DeadNPC/BP_DeadNPC_Body.BP_DeadNPC_Body_C.ExecuteUbergraph_BP_DeadNPC_Body"));
    struct Params_ExecuteUbergraph_BP_DeadNPC_Body {
        int32_t EntryPoint; // 0x0
        int32_t K2Node_CustomEvent_NewParam; // 0x4
        ABP_DeadNPC_Loot_C* K2Node_DynamicCast_AsBP_Dead_NPC_Loot; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
    }; // Size: 0x11
    Params_ExecuteUbergraph_BP_DeadNPC_Body params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_CustomEvent_NewParam = (int32_t)K2Node_CustomEvent_NewParam;
    params.K2Node_DynamicCast_AsBP_Dead_NPC_Loot = (ABP_DeadNPC_Loot_C*)K2Node_DynamicCast_AsBP_Dead_NPC_Loot;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
