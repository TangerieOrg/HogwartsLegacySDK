#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UActorComponent.hpp"
#include "UBP_LeviosoReactionComp_C.hpp"
#include "UFunction.hpp"
#include "UManagedCharacterComponent.hpp"
void UBP_LeviosoReactionComp_C::ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/BP_LeviosoReactionComp.BP_LeviosoReactionComp_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
UBP_LeviosoReactionComp_C* UBP_LeviosoReactionComp_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Shared/BP_LeviosoReactionComp.BP_LeviosoReactionComp_C");
    return (UBP_LeviosoReactionComp_C*)res;
}
void UBP_LeviosoReactionComp_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/BP_LeviosoReactionComp.BP_LeviosoReactionComp_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void UBP_LeviosoReactionComp_C::ExecuteUbergraph_BP_LeviosoReactionComp(int32_t EntryPoint, AActor* CallFunc_GetOwner_ReturnValue, EEndPlayReason::Type K2Node_Event_EndPlayReason, UManagedCharacterComponent* CallFunc_GetComponentByClass_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, UManagedCharacterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/BP_LeviosoReactionComp.BP_LeviosoReactionComp_C.ExecuteUbergraph_BP_LeviosoReactionComp"));
    struct Params_ExecuteUbergraph_BP_LeviosoReactionComp {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* CallFunc_GetOwner_ReturnValue; // 0x8
        EEndPlayReason::Type K2Node_Event_EndPlayReason; // 0x10
        char pad_11[0x7];
        UManagedCharacterComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x18
        AActor* CallFunc_GetOwner_ReturnValue_1; // 0x20
        bool CallFunc_IsValid_ReturnValue; // 0x28
        char pad_29[0x7];
        UManagedCharacterComponent* CallFunc_GetComponentByClass_ReturnValue_1; // 0x30
        bool CallFunc_IsValid_ReturnValue_1; // 0x38
    }; // Size: 0x39
    Params_ExecuteUbergraph_BP_LeviosoReactionComp params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetOwner_ReturnValue = (AActor*)CallFunc_GetOwner_ReturnValue;
    params.K2Node_Event_EndPlayReason = (EEndPlayReason::Type)K2Node_Event_EndPlayReason;
    params.CallFunc_GetComponentByClass_ReturnValue = (UManagedCharacterComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_GetOwner_ReturnValue_1 = (AActor*)CallFunc_GetOwner_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue_1 = (UManagedCharacterComponent*)CallFunc_GetComponentByClass_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    ProcessEvent(func, &params);
}
