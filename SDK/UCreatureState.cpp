#include "ECreatureNeed.hpp"
#include "ECreaturePregnancyState.hpp"
#include "FCreatureActivityThreshold.hpp"
#include "FDateTime.hpp"
#include "FTimespan.hpp"
#include "UCreatureDefinition.hpp"
#include "UCreatureState.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UCreatureState* UCreatureState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureState");
    return (UCreatureState*)res;
}
void UCreatureState::SetIsUncapturable(bool bInIsUncapturable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.SetIsUncapturable"));
    struct Params_SetIsUncapturable {
        bool bInIsUncapturable; // 0x0
    }; // Size: 0x1
    Params_SetIsUncapturable params{};
    params.bInIsUncapturable = (bool)bInIsUncapturable;
    ProcessEvent(func, &params);
}
float UCreatureState::GetByproductCooldownProgress() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetByproductCooldownProgress"));
    struct Params_GetByproductCooldownProgress {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetByproductCooldownProgress params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UCreatureState::SetCanReturnToWild(bool bInCanReturnToWild) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.SetCanReturnToWild"));
    struct Params_SetCanReturnToWild {
        bool bInCanReturnToWild; // 0x0
    }; // Size: 0x1
    Params_SetCanReturnToWild params{};
    params.bInCanReturnToWild = (bool)bInCanReturnToWild;
    ProcessEvent(func, &params);
}
bool UCreatureState::IsPregnant() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.IsPregnant"));
    struct Params_IsPregnant {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPregnant params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCreatureState::OnHarvestByproduct(FName CollectorID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.OnHarvestByproduct"));
    struct Params_OnHarvestByproduct {
        FName CollectorID; // 0x0
    }; // Size: 0x8
    Params_OnHarvestByproduct params{};
    params.CollectorID = (FName)CollectorID;
    ProcessEvent(func, &params);
}
float UCreatureState::GetHappinessCap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetHappinessCap"));
    struct Params_GetHappinessCap {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetHappinessCap params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UCreatureState::IsUnbornCreature() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.IsUnbornCreature"));
    struct Params_IsUnbornCreature {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsUnbornCreature params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCreatureState::IsNeedMet(ECreatureNeed CreatureNeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.IsNeedMet"));
    struct Params_IsNeedMet {
        ECreatureNeed CreatureNeed; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsNeedMet params{};
    params.CreatureNeed = (ECreatureNeed)CreatureNeed;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCreatureState::GetCreatureDisplayName(FString& OutName, bool& OutIsLocalizationKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetCreatureDisplayName"));
    struct Params_GetCreatureDisplayName {
        FString OutName; // 0x0
        bool OutIsLocalizationKey; // 0x10
    }; // Size: 0x11
    Params_GetCreatureDisplayName params{};
    params.OutName = (FString)OutName;
    params.OutIsLocalizationKey = (bool)OutIsLocalizationKey;
    ProcessEvent(func, &params);
    OutName = params.OutName;
    OutIsLocalizationKey = params.OutIsLocalizationKey;
}
ECreaturePregnancyState UCreatureState::GetPregnancyState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetPregnancyState"));
    struct Params_GetPregnancyState {
        ECreaturePregnancyState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPregnancyState params{};
    ProcessEvent(func, &params);
    return (ECreaturePregnancyState)params.ReturnValue;
}
bool UCreatureState::IsInSanctuary() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.IsInSanctuary"));
    struct Params_IsInSanctuary {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInSanctuary params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCreatureState::IsIncubating() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.IsIncubating"));
    struct Params_IsIncubating {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsIncubating params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCreatureState::IsInConflict() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.IsInConflict"));
    struct Params_IsInConflict {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInConflict params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName UCreatureState::GetTypeID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetTypeID"));
    struct Params_GetTypeID {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTypeID params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UCreatureState::IsHappyEnoughToPlayWithToy() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.IsHappyEnoughToPlayWithToy"));
    struct Params_IsHappyEnoughToPlayWithToy {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsHappyEnoughToPlayWithToy params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UCreatureState::GetHappiness() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetHappiness"));
    struct Params_GetHappiness {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetHappiness params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UCreatureState::IsEgg() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.IsEgg"));
    struct Params_IsEgg {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsEgg params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FTimespan UCreatureState::GetGestationTimeRemaining() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetGestationTimeRemaining"));
    struct Params_GetGestationTimeRemaining {
        FTimespan ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetGestationTimeRemaining params{};
    ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
bool UCreatureState::IsCreatureCaptured() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.IsCreatureCaptured"));
    struct Params_IsCreatureCaptured {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCreatureCaptured params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCreatureState::IsByproductOnCooldown() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.IsByproductOnCooldown"));
    struct Params_IsByproductOnCooldown {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsByproductOnCooldown params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UCreatureState::GetAdultIconString() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetAdultIconString"));
    struct Params_GetAdultIconString {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAdultIconString params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UCreatureState::IsAlbino() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.IsAlbino"));
    struct Params_IsAlbino {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAlbino params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UCreatureState* UCreatureState::GetUnbornChildState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetUnbornChildState"));
    struct Params_GetUnbornChildState {
        UCreatureState* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetUnbornChildState params{};
    ProcessEvent(func, &params);
    return (UCreatureState*)params.ReturnValue;
}
FTimespan UCreatureState::GetHatchingTimeRemaining() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetHatchingTimeRemaining"));
    struct Params_GetHatchingTimeRemaining {
        FTimespan ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetHatchingTimeRemaining params{};
    ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
void UCreatureState::GetTranslatedCreatureDisplayName() {}
int32_t UCreatureState::GetMotherUID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetMotherUID"));
    struct Params_GetMotherUID {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMotherUID params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FTimespan UCreatureState::GetTimeLeftToGrowUp() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetTimeLeftToGrowUp"));
    struct Params_GetTimeLeftToGrowUp {
        FTimespan ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTimeLeftToGrowUp params{};
    ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
float UCreatureState::GetScaleVariation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetScaleVariation"));
    struct Params_GetScaleVariation {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetScaleVariation params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UCreatureState::GetCreatureUID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetCreatureUID"));
    struct Params_GetCreatureUID {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCreatureUID params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UCreatureState::GetIsUncapturable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetIsUncapturable"));
    struct Params_GetIsUncapturable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsUncapturable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FDateTime UCreatureState::GetPregnancyStartDateTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetPregnancyStartDateTime"));
    struct Params_GetPregnancyStartDateTime {
        FDateTime ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPregnancyStartDateTime params{};
    ProcessEvent(func, &params);
    return (FDateTime)params.ReturnValue;
}
int32_t UCreatureState::GetPenUID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetPenUID"));
    struct Params_GetPenUID {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPenUID params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FString UCreatureState::GetCreatureName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetCreatureName"));
    struct Params_GetCreatureName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCreatureName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FName UCreatureState::GetNurturingSpaceID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetNurturingSpaceID"));
    struct Params_GetNurturingSpaceID {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetNurturingSpaceID params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UCreatureState::GetIsMount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetIsMount"));
    struct Params_GetIsMount {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsMount params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCreatureState::GetIsMale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetIsMale"));
    struct Params_GetIsMale {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsMale params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FDateTime UCreatureState::GetIncubationStartDateTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetIncubationStartDateTime"));
    struct Params_GetIncubationStartDateTime {
        FDateTime ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetIncubationStartDateTime params{};
    ProcessEvent(func, &params);
    return (FDateTime)params.ReturnValue;
}
bool UCreatureState::GetIsByproductReady() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetIsByproductReady"));
    struct Params_GetIsByproductReady {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsByproductReady params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCreatureState::GetIsByproductHarvestableByPlayer(FString& OutErrorKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetIsByproductHarvestableByPlayer"));
    struct Params_GetIsByproductHarvestableByPlayer {
        FString OutErrorKey; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetIsByproductHarvestableByPlayer params{};
    params.OutErrorKey = (FString)OutErrorKey;
    ProcessEvent(func, &params);
    OutErrorKey = params.OutErrorKey;
    return (bool)params.ReturnValue;
}
FString UCreatureState::GetIconString() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetIconString"));
    struct Params_GetIconString {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetIconString params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UCreatureState::GetCanReturnToWild() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetCanReturnToWild"));
    struct Params_GetCanReturnToWild {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCanReturnToWild params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UCreatureState::GetFatherUID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetFatherUID"));
    struct Params_GetFatherUID {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFatherUID params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UCreatureDefinition* UCreatureState::GetDefinition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetDefinition"));
    struct Params_GetDefinition {
        UCreatureDefinition* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDefinition params{};
    ProcessEvent(func, &params);
    return (UCreatureDefinition*)params.ReturnValue;
}
FName UCreatureState::GetColorVariation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetColorVariation"));
    struct Params_GetColorVariation {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetColorVariation params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UCreatureState::GetCanRename() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetCanRename"));
    struct Params_GetCanRename {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCanRename params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FTimespan UCreatureState::GetByproductCooldownTimeLeft() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetByproductCooldownTimeLeft"));
    struct Params_GetByproductCooldownTimeLeft {
        FTimespan ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetByproductCooldownTimeLeft params{};
    ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
int32_t UCreatureState::GetBreedingGeneration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetBreedingGeneration"));
    struct Params_GetBreedingGeneration {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetBreedingGeneration params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UCreatureState::CanCreatureBreed(FString& ErrorMessage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.CanCreatureBreed"));
    struct Params_CanCreatureBreed {
        FString ErrorMessage; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_CanCreatureBreed params{};
    params.ErrorMessage = (FString)ErrorMessage;
    ProcessEvent(func, &params);
    ErrorMessage = params.ErrorMessage;
    return (bool)params.ReturnValue;
}
FDateTime UCreatureState::GetBirthDateTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetBirthDateTime"));
    struct Params_GetBirthDateTime {
        FDateTime ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBirthDateTime params{};
    ProcessEvent(func, &params);
    return (FDateTime)params.ReturnValue;
}
bool UCreatureState::AreAllNeedsMet() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.AreAllNeedsMet"));
    struct Params_AreAllNeedsMet {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AreAllNeedsMet params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FCreatureActivityThreshold> UCreatureState::GetActivityThresholds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.GetActivityThresholds"));
    struct Params_GetActivityThresholds {
        TArray<FCreatureActivityThreshold> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetActivityThresholds params{};
    ProcessEvent(func, &params);
    return (TArray<FCreatureActivityThreshold>)params.ReturnValue;
}
bool UCreatureState::CanStartActivity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureState.CanStartActivity"));
    struct Params_CanStartActivity {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanStartActivity params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
