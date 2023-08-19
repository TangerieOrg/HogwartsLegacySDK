#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_Biped_SpellLearning_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UFunction.hpp"
void UBTT_Biped_SpellLearning_C::ExecuteUbergraph_BTT_Biped_SpellLearning(int32_t EntryPoint, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue) {}
UBTT_Biped_SpellLearning_C* UBTT_Biped_SpellLearning_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_SpellLearning.BTT_Biped_SpellLearning_C");
    return (UBTT_Biped_SpellLearning_C*)res;
}
void UBTT_Biped_SpellLearning_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_SpellLearning.BTT_Biped_SpellLearning_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_SpellLearning_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_SpellLearning.BTT_Biped_SpellLearning_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
