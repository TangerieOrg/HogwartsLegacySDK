#include "ABP_Enemy_Controller_C.hpp"
#include "AEnemy_Controller.hpp"
#include "APawn.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
ABP_Enemy_Controller_C* ABP_Enemy_Controller_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/BP_Enemy_Controller.BP_Enemy_Controller_C");
    return (ABP_Enemy_Controller_C*)res;
}
void ABP_Enemy_Controller_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Controller.BP_Enemy_Controller_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Enemy_Controller_C::ReceivePossess(APawn* PossessedPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Controller.BP_Enemy_Controller_C.ReceivePossess"));
    struct Params_ReceivePossess {
        APawn* PossessedPawn; // 0x0
    }; // Size: 0x8
    Params_ReceivePossess params{};
    params.PossessedPawn = (APawn*)PossessedPawn;
    ProcessEvent(func, &params);
}
void ABP_Enemy_Controller_C::ExecuteUbergraph_BP_Enemy_Controller(int32_t EntryPoint, APawn* K2Node_Event_PossessedPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_Enemy_Controller.BP_Enemy_Controller_C.ExecuteUbergraph_BP_Enemy_Controller"));
    struct Params_ExecuteUbergraph_BP_Enemy_Controller {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        APawn* K2Node_Event_PossessedPawn; // 0x8
    }; // Size: 0x10
    Params_ExecuteUbergraph_BP_Enemy_Controller params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_PossessedPawn = (APawn*)K2Node_Event_PossessedPawn;
    ProcessEvent(func, &params);
}
