#include "ABP_WO_SeekDiveSpot_C.hpp"
#include "ABiped_Player.hpp"
#include "AWorldObject.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UChildActorComponent.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFlowRippleSubsystem.hpp"
#include "UFunction.hpp"
#include "ULootDropComponent.hpp"
#include "UNiagaraComponent.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
ABP_WO_SeekDiveSpot_C* ABP_WO_SeekDiveSpot_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/WorldEvents/Blueprints/SeekAndFind/BP_WO_SeekDiveSpot.BP_WO_SeekDiveSpot_C");
    return (ABP_WO_SeekDiveSpot_C*)res;
}
void ABP_WO_SeekDiveSpot_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/SeekAndFind/BP_WO_SeekDiveSpot.BP_WO_SeekDiveSpot_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_WO_SeekDiveSpot_C::CheckPlayerMovementMode(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/SeekAndFind/BP_WO_SeekDiveSpot.BP_WO_SeekDiveSpot_C.CheckPlayerMovementMode"));
    struct Params_CheckPlayerMovementMode {
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x9
    }; // Size: 0xa
    Params_CheckPlayerMovementMode params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_WO_SeekDiveSpot_C::UserConstructionScript(FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Vector_GetAbs_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32_t CallFunc_Round_ReturnValue, int32_t CallFunc_Round_ReturnValue_1, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, int32_t CallFunc_Round_ReturnValue_2, FString CallFunc_Conv_IntToString_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/SeekAndFind/BP_WO_SeekDiveSpot.BP_WO_SeekDiveSpot_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x0
        FVector CallFunc_Vector_GetAbs_ReturnValue; // 0xc
        float CallFunc_BreakVector_X; // 0x18
        float CallFunc_BreakVector_Y; // 0x1c
        float CallFunc_BreakVector_Z; // 0x20
        int32_t CallFunc_Round_ReturnValue; // 0x24
        int32_t CallFunc_Round_ReturnValue_1; // 0x28
        char pad_2c[0x4];
        FString CallFunc_Conv_IntToString_ReturnValue; // 0x30
        FString CallFunc_Conv_IntToString_ReturnValue_1; // 0x40
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x50
        int32_t CallFunc_Round_ReturnValue_2; // 0x60
        char pad_64[0x4];
        FString CallFunc_Conv_IntToString_ReturnValue_2; // 0x68
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x78
        FString CallFunc_Concat_StrStr_ReturnValue_2; // 0x88
    }; // Size: 0x98
    Params_UserConstructionScript params{};
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_Vector_GetAbs_ReturnValue = (FVector)CallFunc_Vector_GetAbs_ReturnValue;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_Round_ReturnValue = (int32_t)CallFunc_Round_ReturnValue;
    params.CallFunc_Round_ReturnValue_1 = (int32_t)CallFunc_Round_ReturnValue_1;
    params.CallFunc_Conv_IntToString_ReturnValue = (FString)CallFunc_Conv_IntToString_ReturnValue;
    params.CallFunc_Conv_IntToString_ReturnValue_1 = (FString)CallFunc_Conv_IntToString_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_Round_ReturnValue_2 = (int32_t)CallFunc_Round_ReturnValue_2;
    params.CallFunc_Conv_IntToString_ReturnValue_2 = (FString)CallFunc_Conv_IntToString_ReturnValue_2;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue_2 = (FString)CallFunc_Concat_StrStr_ReturnValue_2;
    ProcessEvent(func, &params);
}
void ABP_WO_SeekDiveSpot_C::MovementModeChanged(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/SeekAndFind/BP_WO_SeekDiveSpot.BP_WO_SeekDiveSpot_C.MovementModeChanged"));
    struct Params_MovementModeChanged {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_MovementModeChanged params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_WO_SeekDiveSpot_C::StopAudio() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/SeekAndFind/BP_WO_SeekDiveSpot.BP_WO_SeekDiveSpot_C.StopAudio"));
    struct Params_StopAudio {
    }; // Size: 0x0
    Params_StopAudio params{};
    ProcessEvent(func, &params);
}
void ABP_WO_SeekDiveSpot_C::ReceiveTick(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/SeekAndFind/BP_WO_SeekDiveSpot.BP_WO_SeekDiveSpot_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ABP_WO_SeekDiveSpot_C::InteractionInitiated(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/SeekAndFind/BP_WO_SeekDiveSpot.BP_WO_SeekDiveSpot_C.InteractionInitiated"));
    struct Params_InteractionInitiated {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_InteractionInitiated params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_WO_SeekDiveSpot_C::ExecuteUbergraph_BP_WO_SeekDiveSpot(int32_t EntryPoint, UFlowRippleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue) {}
