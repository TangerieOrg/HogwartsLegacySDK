#include "ASocialReasoning.hpp"
#include "EEnvQueryRunMode\Type.hpp"
#include "EEnvQueryStatus\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FQueryFinishedData.hpp"
#include "UBTS_Biped_EQS_C.hpp"
#include "UBTService_SocialReasoning.hpp"
#include "UEnvQueryInstanceBlueprintWrapper.hpp"
#include "UFunction.hpp"
UBTS_Biped_EQS_C* UBTS_Biped_EQS_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTS_Biped_EQS.BTS_Biped_EQS_C");
    return (UBTS_Biped_EQS_C*)res;
}
void UBTS_Biped_EQS_C::ExecuteUbergraph_BTS_Biped_EQS(int32_t EntryPoint, UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, EEnvQueryStatus::Type K2Node_CustomEvent_QueryStatus, ASocialReasoning* K2Node_Event_SocialReasoning_1, EEnvQueryRunMode::Type K2Node_Event_RunMode_1, FQueryFinishedData K2Node_Event_QueryFinishedDelegate_1, UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance_1, EEnvQueryStatus::Type K2Node_CustomEvent_QueryStatus_1, bool CallFunc_IsValid_ReturnValue, ASocialReasoning* K2Node_Event_SocialReasoning, EEnvQueryRunMode::Type K2Node_Event_RunMode, FQueryFinishedData K2Node_Event_QueryFinishedDelegate) {}
void UBTS_Biped_EQS_C::RunEQS_FindStations(ASocialReasoning* SocialReasoning, EEnvQueryRunMode::Type RunMode, FQueryFinishedData& QueryFinishedDelegate) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_EQS.BTS_Biped_EQS_C.RunEQS_FindStations"));
    struct Params_RunEQS_FindStations {
        ASocialReasoning* SocialReasoning; // 0x0
        EEnvQueryRunMode::Type RunMode; // 0x8
        char pad_9[0x7];
        FQueryFinishedData QueryFinishedDelegate; // 0x10
    }; // Size: 0x20
    Params_RunEQS_FindStations params{};
    params.SocialReasoning = (ASocialReasoning*)SocialReasoning;
    params.RunMode = (EEnvQueryRunMode::Type)RunMode;
    params.QueryFinishedDelegate = (FQueryFinishedData)QueryFinishedDelegate;
    ProcessEvent(func, &params);
    QueryFinishedDelegate = params.QueryFinishedDelegate;
}
void UBTS_Biped_EQS_C::FindStations_QueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_EQS.BTS_Biped_EQS_C.FindStations_QueryFinished"));
    struct Params_FindStations_QueryFinished {
        UEnvQueryInstanceBlueprintWrapper* QueryInstance; // 0x0
        EEnvQueryStatus::Type QueryStatus; // 0x8
    }; // Size: 0x9
    Params_FindStations_QueryFinished params{};
    params.QueryInstance = (UEnvQueryInstanceBlueprintWrapper*)QueryInstance;
    params.QueryStatus = (EEnvQueryStatus::Type)QueryStatus;
    ProcessEvent(func, &params);
}
void UBTS_Biped_EQS_C::RunEQS_FindSocialReasonings(ASocialReasoning* SocialReasoning, EEnvQueryRunMode::Type RunMode, FQueryFinishedData& QueryFinishedDelegate) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_EQS.BTS_Biped_EQS_C.RunEQS_FindSocialReasonings"));
    struct Params_RunEQS_FindSocialReasonings {
        ASocialReasoning* SocialReasoning; // 0x0
        EEnvQueryRunMode::Type RunMode; // 0x8
        char pad_9[0x7];
        FQueryFinishedData QueryFinishedDelegate; // 0x10
    }; // Size: 0x20
    Params_RunEQS_FindSocialReasonings params{};
    params.SocialReasoning = (ASocialReasoning*)SocialReasoning;
    params.RunMode = (EEnvQueryRunMode::Type)RunMode;
    params.QueryFinishedDelegate = (FQueryFinishedData)QueryFinishedDelegate;
    ProcessEvent(func, &params);
    QueryFinishedDelegate = params.QueryFinishedDelegate;
}
void UBTS_Biped_EQS_C::FindSocialReasonings_QueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_EQS.BTS_Biped_EQS_C.FindSocialReasonings_QueryFinished"));
    struct Params_FindSocialReasonings_QueryFinished {
        UEnvQueryInstanceBlueprintWrapper* QueryInstance; // 0x0
        EEnvQueryStatus::Type QueryStatus; // 0x8
    }; // Size: 0x9
    Params_FindSocialReasonings_QueryFinished params{};
    params.QueryInstance = (UEnvQueryInstanceBlueprintWrapper*)QueryInstance;
    params.QueryStatus = (EEnvQueryStatus::Type)QueryStatus;
    ProcessEvent(func, &params);
}
