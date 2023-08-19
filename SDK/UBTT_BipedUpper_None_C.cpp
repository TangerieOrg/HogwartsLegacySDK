#include "AActor.hpp"
#include "AWandTool.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_BipedUpper_None_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UFunction.hpp"
void UBTT_BipedUpper_None_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_None.BTT_BipedUpper_None_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
UBTT_BipedUpper_None_C* UBTT_BipedUpper_None_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_BipedUpper_None.BTT_BipedUpper_None_C");
    return (UBTT_BipedUpper_None_C*)res;
}
void UBTT_BipedUpper_None_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_None.BTT_BipedUpper_None_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_None_C::ExecuteUbergraph_BTT_BipedUpper_None(int32_t EntryPoint, AWandTool* Temp_object_Variable, AActor* K2Node_Event_OwnerActor_1) {}
