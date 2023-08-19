#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTS_Student_TopLevel_C.hpp"
#include "UBTService_AvaAITree.hpp"
#include "UFunction.hpp"
UBTS_Student_TopLevel_C* UBTS_Student_TopLevel_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/BTS_Student_TopLevel.BTS_Student_TopLevel_C");
    return (UBTS_Student_TopLevel_C*)res;
}
void UBTS_Student_TopLevel_C::ReceiveSearchStart(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_TopLevel.BTS_Student_TopLevel_C.ReceiveSearchStart"));
    struct Params_ReceiveSearchStart {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveSearchStart params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTS_Student_TopLevel_C::ServiceBegin0(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_TopLevel.BTS_Student_TopLevel_C.ServiceBegin"));
    struct Params_ServiceBegin {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ServiceBegin params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTS_Student_TopLevel_C::ExecuteUbergraph_BTS_Student_TopLevel(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, AActor* K2Node_Event_OwnerActor_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_TopLevel.BTS_Student_TopLevel_C.ExecuteUbergraph_BTS_Student_TopLevel"));
    struct Params_ExecuteUbergraph_BTS_Student_TopLevel {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor; // 0x8
        AActor* K2Node_Event_OwnerActor_1; // 0x10
    }; // Size: 0x18
    Params_ExecuteUbergraph_BTS_Student_TopLevel params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.K2Node_Event_OwnerActor_1 = (AActor*)K2Node_Event_OwnerActor_1;
    ProcessEvent(func, &params);
}
