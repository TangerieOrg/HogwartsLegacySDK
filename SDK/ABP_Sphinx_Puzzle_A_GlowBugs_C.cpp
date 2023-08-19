#include "AActor.hpp"
#include "ABP_GlowBugSwarm_C.hpp"
#include "ABP_Sphinx_Puzzle_A_GlowBugs_C.hpp"
#include "ABiped_Player.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "ULocalStencilBoundsHintComponent.hpp"
#include "UNiagaraComponent.hpp"
#include "USphereComponent.hpp"
#include "UTargetTypeBase.hpp"
void ABP_Sphinx_Puzzle_A_GlowBugs_C::OnEnteredNearby(AActor* LumosBP) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.OnEnteredNearby"));
    struct Params_OnEnteredNearby {
        AActor* LumosBP; // 0x0
    }; // Size: 0x8
    Params_OnEnteredNearby params{};
    params.LumosBP = (AActor*)LumosBP;
    ProcessEvent(func, &params);
}
ABP_Sphinx_Puzzle_A_GlowBugs_C* ABP_Sphinx_Puzzle_A_GlowBugs_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C");
    return (ABP_Sphinx_Puzzle_A_GlowBugs_C*)res;
}
bool ABP_Sphinx_Puzzle_A_GlowBugs_C::DisableLightRaytrace() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.DisableLightRaytrace"));
    struct Params_DisableLightRaytrace {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisableLightRaytrace params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_Sphinx_Puzzle_A_GlowBugs_C::DisableLightInteraction() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.DisableLightInteraction"));
    struct Params_DisableLightInteraction {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisableLightInteraction params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_Sphinx_Puzzle_A_GlowBugs_C::PlayerLookAt(bool Flag, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UTargetTypeBase* CallFunc_AddTarget_Actor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.PlayerLookAt"));
    struct Params_PlayerLookAt {
        bool Flag; // 0x0
        char pad_1[0x7];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x8
        UTargetTypeBase* CallFunc_AddTarget_Actor_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_PlayerLookAt params{};
    params.Flag = (bool)Flag;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_AddTarget_Actor_ReturnValue = (UTargetTypeBase*)CallFunc_AddTarget_Actor_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_GlowBugs_C::Build() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.Build"));
    struct Params_Build {
    }; // Size: 0x0
    Params_Build params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_GlowBugs_C::OnExitedNearby() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.OnExitedNearby"));
    struct Params_OnExitedNearby {
    }; // Size: 0x0
    Params_OnExitedNearby params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_GlowBugs_C::OnEnteredLightProximity(AActor* LumosBP) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.OnEnteredLightProximity"));
    struct Params_OnEnteredLightProximity {
        AActor* LumosBP; // 0x0
    }; // Size: 0x8
    Params_OnEnteredLightProximity params{};
    params.LumosBP = (AActor*)LumosBP;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_GlowBugs_C::UserConstructionScript0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_GlowBugs_C::OnExitedLightProximity(AActor* LumosBP) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.OnExitedLightProximity"));
    struct Params_OnExitedLightProximity {
        AActor* LumosBP; // 0x0
    }; // Size: 0x8
    Params_OnExitedLightProximity params{};
    params.LumosBP = (AActor*)LumosBP;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_GlowBugs_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_GlowBugs_C::Retreat() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.Retreat"));
    struct Params_Retreat {
    }; // Size: 0x0
    Params_Retreat params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_GlowBugs_C::OnEnteredLight(AActor* LumosBP, bool bPlayerOwned) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.OnEnteredLight"));
    struct Params_OnEnteredLight {
        AActor* LumosBP; // 0x0
        bool bPlayerOwned; // 0x8
    }; // Size: 0x9
    Params_OnEnteredLight params{};
    params.LumosBP = (AActor*)LumosBP;
    params.bPlayerOwned = (bool)bPlayerOwned;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_GlowBugs_C::OnExitedLight(AActor* LumosBP, bool bPlayerOwned) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.OnExitedLight"));
    struct Params_OnExitedLight {
        AActor* LumosBP; // 0x0
        bool bPlayerOwned; // 0x8
    }; // Size: 0x9
    Params_OnExitedLight params{};
    params.LumosBP = (AActor*)LumosBP;
    params.bPlayerOwned = (bool)bPlayerOwned;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_GlowBugs_C::Move() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.Move"));
    struct Params_Move {
    }; // Size: 0x0
    Params_Move params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_GlowBugs_C::Success(FVector RestLoc) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.Success"));
    struct Params_Success {
        FVector RestLoc; // 0x0
    }; // Size: 0xc
    Params_Success params{};
    params.RestLoc = (FVector)RestLoc;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_GlowBugs_C::EndMove() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.EndMove"));
    struct Params_EndMove {
    }; // Size: 0x0
    Params_EndMove params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_GlowBugs_C::Reveal() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.Reveal"));
    struct Params_Reveal {
    }; // Size: 0x0
    Params_Reveal params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_GlowBugs_C::ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_GlowBugs_C::ExecuteUbergraph_BP_Sphinx_Puzzle_A_GlowBugs(int32_t EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2, uint8_t CallFunc_MakeLiteralByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable, uint8_t CallFunc_MakeLiteralByte_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, uint8_t CallFunc_MakeLiteralByte_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable_1, bool K2Node_SwitchEnum_CmpSuccess_2, uint8_t CallFunc_MakeLiteralByte_ReturnValue_3, bool Temp_bool_IsClosed_Variable_2, bool K2Node_SwitchEnum_CmpSuccess_3, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_3, bool Temp_bool_IsClosed_Variable_4, bool Temp_bool_Has_Been_Initd_Variable_3, AActor* K2Node_Event_LumosBP_4, AActor* K2Node_Event_LumosBP_3, AActor* K2Node_Event_LumosBP_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, uint8_t CallFunc_MakeLiteralByte_ReturnValue_4, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_4, bool CallFunc_Less_FloatFloat_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, FVector CallFunc_Normal_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, AActor* K2Node_Event_LumosBP_1, bool K2Node_Event_bPlayerOwned_1, AActor* K2Node_Event_LumosBP, bool K2Node_Event_bPlayerOwned, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_2, FVector K2Node_CustomEvent_RestLoc, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_4, bool Temp_bool_IsClosed_Variable_5, bool Temp_bool_Has_Been_Initd_Variable_5, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue_2, FVector CallFunc_Subtract_VectorVector_ReturnValue_3, FVector CallFunc_Normal_ReturnValue_1, float CallFunc_VSize_ReturnValue_1, float Temp_float_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Log_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue) {}
void ABP_Sphinx_Puzzle_A_GlowBugs_C::Dropped__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.Dropped__DelegateSignature"));
    struct Params_Dropped__DelegateSignature {
    }; // Size: 0x0
    Params_Dropped__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_GlowBugs_C::Grabbed__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.Grabbed__DelegateSignature"));
    struct Params_Grabbed__DelegateSignature {
    }; // Size: 0x0
    Params_Grabbed__DelegateSignature params{};
    ProcessEvent(func, &params);
}
