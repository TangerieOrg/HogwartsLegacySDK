#include "AAmbulatory_Character.hpp"
#include "ABase_Character.hpp"
#include "ASocialReasoning.hpp"
#include "EEnvQueryRunMode\Type.hpp"
#include "EStandardManagedPriority.hpp"
#include "FMultiFXHandle.hpp"
#include "FQueryFinishedData.hpp"
#include "FSocialResponse.hpp"
#include "UCharacterStateInfo.hpp"
#include "UClothSitComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UObjectStateInfo.hpp"
#include "UPhoenixManagedCharacter.hpp"
#include "UTraversalSettings.hpp"
ABase_Character* ABase_Character::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Base_Character");
    return (ABase_Character*)res;
}
void ABase_Character::RunEQS_FindSocialReasonings(EEnvQueryRunMode::Type RunMode, FQueryFinishedData& QueryFinishedDelegate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.RunEQS_FindSocialReasonings"));
    struct Params_RunEQS_FindSocialReasonings {
        EEnvQueryRunMode::Type RunMode; // 0x0
        char pad_1[0x7];
        FQueryFinishedData QueryFinishedDelegate; // 0x8
    }; // Size: 0x18
    Params_RunEQS_FindSocialReasonings params{};
    params.RunMode = (EEnvQueryRunMode::Type)RunMode;
    params.QueryFinishedDelegate = (FQueryFinishedData)QueryFinishedDelegate;
    ProcessEvent(func, &params);
    QueryFinishedDelegate = params.QueryFinishedDelegate;
}
void ABase_Character::StartSettingMaxHeightValue(float bValue, EStandardManagedPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.StartSettingMaxHeightValue"));
    struct Params_StartSettingMaxHeightValue {
        float bValue; // 0x0
        EStandardManagedPriority Priority; // 0x4
        char pad_5[0x3];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_StartSettingMaxHeightValue params{};
    params.bValue = (float)bValue;
    params.Priority = (EStandardManagedPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
void ABase_Character::PlayerSighted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.PlayerSighted"));
    struct Params_PlayerSighted {
    }; // Size: 0x0
    Params_PlayerSighted params{};
    ProcessEvent(func, &params);
}
void ABase_Character::ReRegisterWithSignificanceManager() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.ReRegisterWithSignificanceManager"));
    struct Params_ReRegisterWithSignificanceManager {
    }; // Size: 0x0
    Params_ReRegisterWithSignificanceManager params{};
    ProcessEvent(func, &params);
}
void ABase_Character::ConverseWithProxy(FSocialResponse& SocialResponse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.ConverseWithProxy"));
    struct Params_ConverseWithProxy {
        FSocialResponse SocialResponse; // 0x0
    }; // Size: 0x38
    Params_ConverseWithProxy params{};
    params.SocialResponse = (FSocialResponse)SocialResponse;
    ProcessEvent(func, &params);
    SocialResponse = params.SocialResponse;
}
void ABase_Character::StartSettingTargetableByAiState(bool bTargetable, EStandardManagedPriority Priority, UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.StartSettingTargetableByAiState"));
    struct Params_StartSettingTargetableByAiState {
        bool bTargetable; // 0x0
        EStandardManagedPriority Priority; // 0x1
        char pad_2[0x6];
        UObject* Provider; // 0x8
    }; // Size: 0x10
    Params_StartSettingTargetableByAiState params{};
    params.bTargetable = (bool)bTargetable;
    params.Priority = (EStandardManagedPriority)Priority;
    params.Provider = (UObject*)Provider;
    ProcessEvent(func, &params);
}
void ABase_Character::Chat() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.Chat"));
    struct Params_Chat {
    }; // Size: 0x0
    Params_Chat params{};
    ProcessEvent(func, &params);
}
void ABase_Character::StartSettingMaxHeightEnabledValue(bool bValue, EStandardManagedPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.StartSettingMaxHeightEnabledValue"));
    struct Params_StartSettingMaxHeightEnabledValue {
        bool bValue; // 0x0
        EStandardManagedPriority Priority; // 0x1
        char pad_2[0x6];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_StartSettingMaxHeightEnabledValue params{};
    params.bValue = (bool)bValue;
    params.Priority = (EStandardManagedPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
void ABase_Character::StartSettingLODOverride(int32_t LODOverride, UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.StartSettingLODOverride"));
    struct Params_StartSettingLODOverride {
        int32_t LODOverride; // 0x0
        char pad_4[0x4];
        UObject* Provider; // 0x8
    }; // Size: 0x10
    Params_StartSettingLODOverride params{};
    params.LODOverride = (int32_t)LODOverride;
    params.Provider = (UObject*)Provider;
    ProcessEvent(func, &params);
}
void ABase_Character::DisableCcd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.DisableCcd"));
    struct Params_DisableCcd {
    }; // Size: 0x0
    Params_DisableCcd params{};
    ProcessEvent(func, &params);
}
void ABase_Character::RunEQS_FindStations(EEnvQueryRunMode::Type RunMode, FQueryFinishedData& QueryFinishedDelegate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.RunEQS_FindStations"));
    struct Params_RunEQS_FindStations {
        EEnvQueryRunMode::Type RunMode; // 0x0
        char pad_1[0x7];
        FQueryFinishedData QueryFinishedDelegate; // 0x8
    }; // Size: 0x18
    Params_RunEQS_FindStations params{};
    params.RunMode = (EEnvQueryRunMode::Type)RunMode;
    params.QueryFinishedDelegate = (FQueryFinishedData)QueryFinishedDelegate;
    ProcessEvent(func, &params);
    QueryFinishedDelegate = params.QueryFinishedDelegate;
}
void ABase_Character::ReleaseFocusFromScriptedBehavior(FName InIdentifyingName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.ReleaseFocusFromScriptedBehavior"));
    struct Params_ReleaseFocusFromScriptedBehavior {
        FName InIdentifyingName; // 0x0
    }; // Size: 0x8
    Params_ReleaseFocusFromScriptedBehavior params{};
    params.InIdentifyingName = (FName)InIdentifyingName;
    ProcessEvent(func, &params);
}
bool ABase_Character::Nevermind() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.Nevermind"));
    struct Params_Nevermind {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_Nevermind params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABase_Character::IsTargetableByAi() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.IsTargetableByAi"));
    struct Params_IsTargetableByAi {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsTargetableByAi params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ASocialReasoning* ABase_Character::GetSocialReasoning() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.GetSocialReasoning"));
    struct Params_GetSocialReasoning {
        ASocialReasoning* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSocialReasoning params{};
    ProcessEvent(func, &params);
    return (ASocialReasoning*)params.ReturnValue;
}
bool ABase_Character::Goodbye() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.Goodbye"));
    struct Params_Goodbye {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_Goodbye params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UObjectStateInfo* ABase_Character::GetObjectStateInfo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.GetObjectStateInfo"));
    struct Params_GetObjectStateInfo {
        UObjectStateInfo* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetObjectStateInfo params{};
    ProcessEvent(func, &params);
    return (UObjectStateInfo*)params.ReturnValue;
}
UCharacterStateInfo* ABase_Character::GetCharacterStateInfo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.GetCharacterStateInfo"));
    struct Params_GetCharacterStateInfo {
        UCharacterStateInfo* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCharacterStateInfo params{};
    ProcessEvent(func, &params);
    return (UCharacterStateInfo*)params.ReturnValue;
}
void ABase_Character::FinishSettingTargetableByAiState(EStandardManagedPriority Priority, UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.FinishSettingTargetableByAiState"));
    struct Params_FinishSettingTargetableByAiState {
        EStandardManagedPriority Priority; // 0x0
        char pad_1[0x7];
        UObject* Provider; // 0x8
    }; // Size: 0x10
    Params_FinishSettingTargetableByAiState params{};
    params.Priority = (EStandardManagedPriority)Priority;
    params.Provider = (UObject*)Provider;
    ProcessEvent(func, &params);
}
void ABase_Character::FinishSettingMaxHeightValue(EStandardManagedPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.FinishSettingMaxHeightValue"));
    struct Params_FinishSettingMaxHeightValue {
        EStandardManagedPriority Priority; // 0x0
        char pad_1[0x7];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_FinishSettingMaxHeightValue params{};
    params.Priority = (EStandardManagedPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
void ABase_Character::FinishSettingMaxHeightEnabledValue(EStandardManagedPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.FinishSettingMaxHeightEnabledValue"));
    struct Params_FinishSettingMaxHeightEnabledValue {
        EStandardManagedPriority Priority; // 0x0
        char pad_1[0x7];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_FinishSettingMaxHeightEnabledValue params{};
    params.Priority = (EStandardManagedPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
void ABase_Character::FinishSettingLODOverride(UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.FinishSettingLODOverride"));
    struct Params_FinishSettingLODOverride {
        UObject* Provider; // 0x0
    }; // Size: 0x8
    Params_FinishSettingLODOverride params{};
    params.Provider = (UObject*)Provider;
    ProcessEvent(func, &params);
}
void ABase_Character::ExcuseMe() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.ExcuseMe"));
    struct Params_ExcuseMe {
    }; // Size: 0x0
    Params_ExcuseMe params{};
    ProcessEvent(func, &params);
}
void ABase_Character::Converse(FSocialResponse& SocialResponse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.Converse"));
    struct Params_Converse {
        FSocialResponse SocialResponse; // 0x0
    }; // Size: 0x38
    Params_Converse params{};
    params.SocialResponse = (FSocialResponse)SocialResponse;
    ProcessEvent(func, &params);
    SocialResponse = params.SocialResponse;
}
void ABase_Character::CaptureFocusForScriptedBehavior(FName InIdentifyingName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Base_Character.CaptureFocusForScriptedBehavior"));
    struct Params_CaptureFocusForScriptedBehavior {
        FName InIdentifyingName; // 0x0
    }; // Size: 0x8
    Params_CaptureFocusForScriptedBehavior params{};
    params.InIdentifyingName = (FName)InIdentifyingName;
    ProcessEvent(func, &params);
}
