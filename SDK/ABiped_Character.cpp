#include "AActor.hpp"
#include "ABase_Character.hpp"
#include "ABiped_Character.hpp"
#include "AMunitionType_Base.hpp"
#include "APickupTool.hpp"
#include "ASpellTool.hpp"
#include "ATool.hpp"
#include "AWandTool.hpp"
#include "EAdditiveBodyState\Type.hpp"
#include "EClimbingLedgeState\Type.hpp"
#include "EDynamicForceFeedbackAction\Type.hpp"
#include "EFullBodyState\Type.hpp"
#include "EHoverDroneControlMode\Type.hpp"
#include "EJumpingType\Type.hpp"
#include "EParryState\Type.hpp"
#include "EPartialBodyState\Type.hpp"
#include "ERightArmPriority\Type.hpp"
#include "ERightArmState\Type.hpp"
#include "EStairsState\Type.hpp"
#include "ETargetID\Type.hpp"
#include "ETargetSpeedMode\Type.hpp"
#include "ETargetType\Type.hpp"
#include "FGameplayProperty_Float.hpp"
#include "FHitResult.hpp"
#include "FInventoryResult.hpp"
#include "FSpellLoadOutData.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UAnimationComponent.hpp"
#include "UBTCustomComponent.hpp"
#include "UBipedStateComponent.hpp"
#include "UBlackboardComponent.hpp"
#include "UClass.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UContextFilterComponent.hpp"
#include "UFacialComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPrimitiveComponent.hpp"
#include "URPGAbilityComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USpellToolRecord.hpp"
#include "UToolSetComponent.hpp"
void ABiped_Character::OnDisillusionmentEnd__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.Biped_Character.OnDisillusionmentEnd__DelegateSignature"));
    struct Params_OnDisillusionmentEnd__DelegateSignature {
    }; // Size: 0x0
    Params_OnDisillusionmentEnd__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABiped_Character::OnEquippedChanged(ATool* ActivatedTool, ATool* DeactivatedTool) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.OnEquippedChanged"));
    struct Params_OnEquippedChanged {
        ATool* ActivatedTool; // 0x0
        ATool* DeactivatedTool; // 0x8
    }; // Size: 0x10
    Params_OnEquippedChanged params{};
    params.ActivatedTool = (ATool*)ActivatedTool;
    params.DeactivatedTool = (ATool*)DeactivatedTool;
    ProcessEvent(func, &params);
}
void ABiped_Character::UnEquipWand() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.UnEquipWand"));
    struct Params_UnEquipWand {
    }; // Size: 0x0
    Params_UnEquipWand params{};
    ProcessEvent(func, &params);
}
ABiped_Character* ABiped_Character::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Biped_Character");
    return (ABiped_Character*)res;
}
void ABiped_Character::SetRightArmState(ERightArmState::Type InState, ERightArmPriority::Type InPriority, bool bBroadcastChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.SetRightArmState"));
    struct Params_SetRightArmState {
        ERightArmState::Type InState; // 0x0
        ERightArmPriority::Type InPriority; // 0x1
        bool bBroadcastChange; // 0x2
    }; // Size: 0x3
    Params_SetRightArmState params{};
    params.InState = (ERightArmState::Type)InState;
    params.InPriority = (ERightArmPriority::Type)InPriority;
    params.bBroadcastChange = (bool)bBroadcastChange;
    ProcessEvent(func, &params);
}
void ABiped_Character::SetTargetDestination(FVector i_targetDestination) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.SetTargetDestination"));
    struct Params_SetTargetDestination {
        FVector i_targetDestination; // 0x0
    }; // Size: 0xc
    Params_SetTargetDestination params{};
    params.i_targetDestination = (FVector)i_targetDestination;
    ProcessEvent(func, &params);
}
void ABiped_Character::ZeroKinematicIntegratorAngularVelocity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.ZeroKinematicIntegratorAngularVelocity"));
    struct Params_ZeroKinematicIntegratorAngularVelocity {
    }; // Size: 0x0
    Params_ZeroKinematicIntegratorAngularVelocity params{};
    ProcessEvent(func, &params);
}
bool ABiped_Character::DetectFallIntoWater() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.DetectFallIntoWater"));
    struct Params_DetectFallIntoWater {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DetectFallIntoWater params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABiped_Character::GetParryState(EParryState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetParryState"));
    struct Params_GetParryState {
        EParryState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetParryState params{};
    params.OutState = (EParryState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void ABiped_Character::ZeroKinematicIntegratorLinearVelocity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.ZeroKinematicIntegratorLinearVelocity"));
    struct Params_ZeroKinematicIntegratorLinearVelocity {
    }; // Size: 0x0
    Params_ZeroKinematicIntegratorLinearVelocity params{};
    ProcessEvent(func, &params);
}
void ABiped_Character::StartCrouching(UObject* Provider, ETargetSpeedMode::Type SpeedMode, ETargetSpeedMode::Type SpeedModifier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.StartCrouching"));
    struct Params_StartCrouching {
        UObject* Provider; // 0x0
        ETargetSpeedMode::Type SpeedMode; // 0x8
        ETargetSpeedMode::Type SpeedModifier; // 0x9
    }; // Size: 0xa
    Params_StartCrouching params{};
    params.Provider = (UObject*)Provider;
    params.SpeedMode = (ETargetSpeedMode::Type)SpeedMode;
    params.SpeedModifier = (ETargetSpeedMode::Type)SpeedModifier;
    ProcessEvent(func, &params);
}
void ABiped_Character::GetSpellCastHandle(int32_t& OutSpellCastHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetSpellCastHandle"));
    struct Params_GetSpellCastHandle {
        int32_t OutSpellCastHandle; // 0x0
    }; // Size: 0x4
    Params_GetSpellCastHandle params{};
    params.OutSpellCastHandle = (int32_t)OutSpellCastHandle;
    ProcessEvent(func, &params);
    OutSpellCastHandle = params.OutSpellCastHandle;
}
void ABiped_Character::SetFullBodyState(EFullBodyState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.SetFullBodyState"));
    struct Params_SetFullBodyState {
        EFullBodyState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetFullBodyState params{};
    params.InState = (EFullBodyState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
float ABiped_Character::GetHealth() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetHealth"));
    struct Params_GetHealth {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetHealth params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ABiped_Character::StairsStateHasChanged(EStairsState::Type InLastStairsState, EStairsState::Type InNewStairsState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.StairsStateHasChanged"));
    struct Params_StairsStateHasChanged {
        EStairsState::Type InLastStairsState; // 0x0
        EStairsState::Type InNewStairsState; // 0x1
    }; // Size: 0x2
    Params_StairsStateHasChanged params{};
    params.InLastStairsState = (EStairsState::Type)InLastStairsState;
    params.InNewStairsState = (EStairsState::Type)InNewStairsState;
    ProcessEvent(func, &params);
}
void ABiped_Character::SetFinisherOptimalRatio(float OptimalRatio, EDynamicForceFeedbackAction::Type FeedbackAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.SetFinisherOptimalRatio"));
    struct Params_SetFinisherOptimalRatio {
        float OptimalRatio; // 0x0
        EDynamicForceFeedbackAction::Type FeedbackAction; // 0x4
    }; // Size: 0x5
    Params_SetFinisherOptimalRatio params{};
    params.OptimalRatio = (float)OptimalRatio;
    params.FeedbackAction = (EDynamicForceFeedbackAction::Type)FeedbackAction;
    ProcessEvent(func, &params);
}
void ABiped_Character::SetTargetDirection(FVector i_targetDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.SetTargetDirection"));
    struct Params_SetTargetDirection {
        FVector i_targetDirection; // 0x0
    }; // Size: 0xc
    Params_SetTargetDirection params{};
    params.i_targetDirection = (FVector)i_targetDirection;
    ProcessEvent(func, &params);
}
bool ABiped_Character::GetFinishers(TArray<USpellToolRecord*>& ToolRecordArray) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetFinishers"));
    struct Params_GetFinishers {
        TArray<USpellToolRecord*> ToolRecordArray; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetFinishers params{};
    params.ToolRecordArray = (TArray<USpellToolRecord*>)ToolRecordArray;
    ProcessEvent(func, &params);
    ToolRecordArray = params.ToolRecordArray;
    return (bool)params.ReturnValue;
}
void ABiped_Character::SetTargetComponent(UPrimitiveComponent* i_pTargetComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.SetTargetComponent"));
    struct Params_SetTargetComponent {
        UPrimitiveComponent* i_pTargetComponent; // 0x0
    }; // Size: 0x8
    Params_SetTargetComponent params{};
    params.i_pTargetComponent = (UPrimitiveComponent*)i_pTargetComponent;
    ProcessEvent(func, &params);
}
void ABiped_Character::SetTargetBoneName(FName i_targetBoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.SetTargetBoneName"));
    struct Params_SetTargetBoneName {
        FName i_targetBoneName; // 0x0
    }; // Size: 0x8
    Params_SetTargetBoneName params{};
    params.i_targetBoneName = (FName)i_targetBoneName;
    ProcessEvent(func, &params);
}
void ABiped_Character::SetSpellCastHandle(int32_t InSpellCastHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.SetSpellCastHandle"));
    struct Params_SetSpellCastHandle {
        int32_t InSpellCastHandle; // 0x0
    }; // Size: 0x4
    Params_SetSpellCastHandle params{};
    params.InSpellCastHandle = (int32_t)InSpellCastHandle;
    ProcessEvent(func, &params);
}
void ABiped_Character::SetSpell(int32_t Group, int32_t Index, USpellToolRecord* Spell) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.SetSpell"));
    struct Params_SetSpell {
        int32_t Group; // 0x0
        int32_t Index; // 0x4
        USpellToolRecord* Spell; // 0x8
    }; // Size: 0x10
    Params_SetSpell params{};
    params.Group = (int32_t)Group;
    params.Index = (int32_t)Index;
    params.Spell = (USpellToolRecord*)Spell;
    ProcessEvent(func, &params);
}
void ABiped_Character::OnAccioEnd__DelegateSignature(AActor* Target) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.Biped_Character.OnAccioEnd__DelegateSignature"));
    struct Params_OnAccioEnd__DelegateSignature {
        AActor* Target; // 0x0
    }; // Size: 0x8
    Params_OnAccioEnd__DelegateSignature params{};
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
float ABiped_Character::ComputeAngleToDesiredDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.ComputeAngleToDesiredDirection"));
    struct Params_ComputeAngleToDesiredDirection {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_ComputeAngleToDesiredDirection params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ABiped_Character::SetRayCastActor(AActor* i_pRayCastActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.SetRayCastActor"));
    struct Params_SetRayCastActor {
        AActor* i_pRayCastActor; // 0x0
    }; // Size: 0x8
    Params_SetRayCastActor params{};
    params.i_pRayCastActor = (AActor*)i_pRayCastActor;
    ProcessEvent(func, &params);
}
void ABiped_Character::SetPickupTool(APickupTool* InPickupTool) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.SetPickupTool"));
    struct Params_SetPickupTool {
        APickupTool* InPickupTool; // 0x0
    }; // Size: 0x8
    Params_SetPickupTool params{};
    params.InPickupTool = (APickupTool*)InPickupTool;
    ProcessEvent(func, &params);
}
void ABiped_Character::SetPartialBodyState(EPartialBodyState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.SetPartialBodyState"));
    struct Params_SetPartialBodyState {
        EPartialBodyState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetPartialBodyState params{};
    params.InState = (EPartialBodyState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void ABiped_Character::SetFullBodyStateLast(EFullBodyState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.SetFullBodyStateLast"));
    struct Params_SetFullBodyStateLast {
        EFullBodyState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetFullBodyStateLast params{};
    params.InState = (EFullBodyState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void ABiped_Character::SetParryState(EParryState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.SetParryState"));
    struct Params_SetParryState {
        EParryState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetParryState params{};
    params.InState = (EParryState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void ABiped_Character::GetPartialBodyState(EPartialBodyState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetPartialBodyState"));
    struct Params_GetPartialBodyState {
        EPartialBodyState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetPartialBodyState params{};
    params.OutState = (EPartialBodyState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void ABiped_Character::OnSpellCast__DelegateSignature(AActor* Target, FVector Location, ASpellTool* Spell, FName SpellType, AMunitionType_Base* Munition) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.Biped_Character.OnSpellCast__DelegateSignature"));
    struct Params_OnSpellCast__DelegateSignature {
        AActor* Target; // 0x0
        FVector Location; // 0x8
        char pad_14[0x4];
        ASpellTool* Spell; // 0x18
        FName SpellType; // 0x20
        AMunitionType_Base* Munition; // 0x28
    }; // Size: 0x30
    Params_OnSpellCast__DelegateSignature params{};
    params.Target = (AActor*)Target;
    params.Location = (FVector)Location;
    params.Spell = (ASpellTool*)Spell;
    params.SpellType = (FName)SpellType;
    params.Munition = (AMunitionType_Base*)Munition;
    ProcessEvent(func, &params);
}
bool ABiped_Character::IsCurrentLedgeAnOverhang() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.IsCurrentLedgeAnOverhang"));
    struct Params_IsCurrentLedgeAnOverhang {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCurrentLedgeAnOverhang params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABiped_Character::SetFinisher(int32_t Index, USpellToolRecord* Spell) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.SetFinisher"));
    struct Params_SetFinisher {
        int32_t Index; // 0x0
        char pad_4[0x4];
        USpellToolRecord* Spell; // 0x8
    }; // Size: 0x10
    Params_SetFinisher params{};
    params.Index = (int32_t)Index;
    params.Spell = (USpellToolRecord*)Spell;
    ProcessEvent(func, &params);
}
void ABiped_Character::SetCombatReadyMode(bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.SetCombatReadyMode"));
    struct Params_SetCombatReadyMode {
        bool Flag; // 0x0
    }; // Size: 0x1
    Params_SetCombatReadyMode params{};
    params.Flag = (bool)Flag;
    ProcessEvent(func, &params);
}
APickupTool* ABiped_Character::GetPickupTool() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetPickupTool"));
    struct Params_GetPickupTool {
        APickupTool* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPickupTool params{};
    ProcessEvent(func, &params);
    return (APickupTool*)params.ReturnValue;
}
void ABiped_Character::SetAdditiveBodyState(EAdditiveBodyState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.SetAdditiveBodyState"));
    struct Params_SetAdditiveBodyState {
        EAdditiveBodyState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetAdditiveBodyState params{};
    params.InState = (EAdditiveBodyState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
FName ABiped_Character::ParkourJump(FName DefaultNode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.ParkourJump"));
    struct Params_ParkourJump {
        FName DefaultNode; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_ParkourJump params{};
    params.DefaultNode = (FName)DefaultNode;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void ABiped_Character::OnProtegoStart__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.Biped_Character.OnProtegoStart__DelegateSignature"));
    struct Params_OnProtegoStart__DelegateSignature {
    }; // Size: 0x0
    Params_OnProtegoStart__DelegateSignature params{};
    ProcessEvent(func, &params);
}
FVector ABiped_Character::GetTargetDestination() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetTargetDestination"));
    struct Params_GetTargetDestination {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetTargetDestination params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void ABiped_Character::OnProtegoEnd__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.Biped_Character.OnProtegoEnd__DelegateSignature"));
    struct Params_OnProtegoEnd__DelegateSignature {
    }; // Size: 0x0
    Params_OnProtegoEnd__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABiped_Character::OnProtegoDeflected__DelegateSignature(ASpellTool* Spell) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.Biped_Character.OnProtegoDeflected__DelegateSignature"));
    struct Params_OnProtegoDeflected__DelegateSignature {
        ASpellTool* Spell; // 0x0
    }; // Size: 0x8
    Params_OnProtegoDeflected__DelegateSignature params{};
    params.Spell = (ASpellTool*)Spell;
    ProcessEvent(func, &params);
}
void ABiped_Character::OnLumosStart__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.Biped_Character.OnLumosStart__DelegateSignature"));
    struct Params_OnLumosStart__DelegateSignature {
    }; // Size: 0x0
    Params_OnLumosStart__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABiped_Character::OnLumosEnd__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.Biped_Character.OnLumosEnd__DelegateSignature"));
    struct Params_OnLumosEnd__DelegateSignature {
    }; // Size: 0x0
    Params_OnLumosEnd__DelegateSignature params{};
    ProcessEvent(func, &params);
}
FVector ABiped_Character::GetToTargetDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetToTargetDirection"));
    struct Params_GetToTargetDirection {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetToTargetDirection params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void ABiped_Character::OnHoverDroneControlModeChanged(EHoverDroneControlMode::Type NewMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.OnHoverDroneControlModeChanged"));
    struct Params_OnHoverDroneControlModeChanged {
        EHoverDroneControlMode::Type NewMode; // 0x0
    }; // Size: 0x1
    Params_OnHoverDroneControlModeChanged params{};
    params.NewMode = (EHoverDroneControlMode::Type)NewMode;
    ProcessEvent(func, &params);
}
void ABiped_Character::OnDisillusionmentStart__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.Biped_Character.OnDisillusionmentStart__DelegateSignature"));
    struct Params_OnDisillusionmentStart__DelegateSignature {
    }; // Size: 0x0
    Params_OnDisillusionmentStart__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABiped_Character::OnAccioStart__DelegateSignature(AActor* Target, FVector Location) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.Biped_Character.OnAccioStart__DelegateSignature"));
    struct Params_OnAccioStart__DelegateSignature {
        AActor* Target; // 0x0
        FVector Location; // 0x8
    }; // Size: 0x14
    Params_OnAccioStart__DelegateSignature params{};
    params.Target = (AActor*)Target;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
}
float ABiped_Character::GetPutdownToolHeight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetPutdownToolHeight"));
    struct Params_GetPutdownToolHeight {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPutdownToolHeight params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ABiped_Character::Landed(FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.Landed"));
    struct Params_Landed {
        FHitResult Hit; // 0x0
    }; // Size: 0x88
    Params_Landed params{};
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
bool ABiped_Character::IsWandEquipped() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.IsWandEquipped"));
    struct Params_IsWandEquipped {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsWandEquipped params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABiped_Character::IsDead() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.IsDead"));
    struct Params_IsDead {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDead params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName ABiped_Character::GetTargetBoneName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetTargetBoneName"));
    struct Params_GetTargetBoneName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTargetBoneName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool ABiped_Character::IsBlockedByWall() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.IsBlockedByWall"));
    struct Params_IsBlockedByWall {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsBlockedByWall params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float ABiped_Character::GetPickupToolHeight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetPickupToolHeight"));
    struct Params_GetPickupToolHeight {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPickupToolHeight params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
AWandTool* ABiped_Character::GetWand() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetWand"));
    struct Params_GetWand {
        AWandTool* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetWand params{};
    ProcessEvent(func, &params);
    return (AWandTool*)params.ReturnValue;
}
ERightArmState::Type ABiped_Character::GetRightArmState(ERightArmPriority::Type InPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetRightArmState"));
    struct Params_GetRightArmState {
        ERightArmPriority::Type InPriority; // 0x0
        ERightArmState::Type ReturnValue; // 0x1
    }; // Size: 0x2
    Params_GetRightArmState params{};
    params.InPriority = (ERightArmPriority::Type)InPriority;
    ProcessEvent(func, &params);
    return (ERightArmState::Type)params.ReturnValue;
}
FVector ABiped_Character::GetTargetDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetTargetDirection"));
    struct Params_GetTargetDirection {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetTargetDirection params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
AActor* ABiped_Character::GetRayCastActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetRayCastActor"));
    struct Params_GetRayCastActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetRayCastActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
UPrimitiveComponent* ABiped_Character::GetTargetComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetTargetComponent"));
    struct Params_GetTargetComponent {
        UPrimitiveComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTargetComponent params{};
    ProcessEvent(func, &params);
    return (UPrimitiveComponent*)params.ReturnValue;
}
bool ABiped_Character::GetSpellsByGroup(int32_t Group, TArray<USpellToolRecord*>& ToolRecordArray) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetSpellsByGroup"));
    struct Params_GetSpellsByGroup {
        int32_t Group; // 0x0
        char pad_4[0x4];
        TArray<USpellToolRecord*> ToolRecordArray; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_GetSpellsByGroup params{};
    params.Group = (int32_t)Group;
    params.ToolRecordArray = (TArray<USpellToolRecord*>)ToolRecordArray;
    ProcessEvent(func, &params);
    ToolRecordArray = params.ToolRecordArray;
    return (bool)params.ReturnValue;
}
USkeletalMeshComponent* ABiped_Character::GetSkeletalMesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetSkeletalMesh"));
    struct Params_GetSkeletalMesh {
        USkeletalMeshComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSkeletalMesh params{};
    ProcessEvent(func, &params);
    return (USkeletalMeshComponent*)params.ReturnValue;
}
FTransform ABiped_Character::GetOriginalLedgeTransform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetOriginalLedgeTransform"));
    struct Params_GetOriginalLedgeTransform {
        FTransform ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetOriginalLedgeTransform params{};
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
AActor* ABiped_Character::GetLockedOnActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetLockedOnActor"));
    struct Params_GetLockedOnActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLockedOnActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
FInventoryResult ABiped_Character::GetInventoryResult() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetInventoryResult"));
    struct Params_GetInventoryResult {
        FInventoryResult ReturnValue; // 0x0
    }; // Size: 0x88
    Params_GetInventoryResult params{};
    ProcessEvent(func, &params);
    return (FInventoryResult)params.ReturnValue;
}
bool ABiped_Character::AdjustHealth(float change, bool bDontKill) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.AdjustHealth"));
    struct Params_AdjustHealth {
        float change; // 0x0
        bool bDontKill; // 0x4
        bool ReturnValue; // 0x5
    }; // Size: 0x6
    Params_AdjustHealth params{};
    params.change = (float)change;
    params.bDontKill = (bool)bDontKill;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AActor* ABiped_Character::GetHighlitActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetHighlitActor"));
    struct Params_GetHighlitActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetHighlitActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void ABiped_Character::GetFullBodyStateLast(EFullBodyState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetFullBodyStateLast"));
    struct Params_GetFullBodyStateLast {
        EFullBodyState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetFullBodyStateLast params{};
    params.OutState = (EFullBodyState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void ABiped_Character::GetFullBodyState(EFullBodyState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetFullBodyState"));
    struct Params_GetFullBodyState {
        EFullBodyState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetFullBodyState params{};
    params.OutState = (EFullBodyState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
FName ABiped_Character::GetCharacterID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetCharacterID"));
    struct Params_GetCharacterID {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCharacterID params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
AActor* ABiped_Character::GetBestLockOnActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetBestLockOnActor"));
    struct Params_GetBestLockOnActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBestLockOnActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
AActor* ABiped_Character::GetBestAutoTargetActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetBestAutoTargetActor"));
    struct Params_GetBestAutoTargetActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBestAutoTargetActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
FVector ABiped_Character::GetAutoTargetUpDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetAutoTargetUpDirection"));
    struct Params_GetAutoTargetUpDirection {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetAutoTargetUpDirection params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector ABiped_Character::GetAutoTargetFocusDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetAutoTargetFocusDirection"));
    struct Params_GetAutoTargetFocusDirection {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetAutoTargetFocusDirection params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void ABiped_Character::GetAdditiveBodyState(EAdditiveBodyState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.GetAdditiveBodyState"));
    struct Params_GetAdditiveBodyState {
        EAdditiveBodyState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetAdditiveBodyState params{};
    params.OutState = (EAdditiveBodyState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void ABiped_Character::FinishCrouching(UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.FinishCrouching"));
    struct Params_FinishCrouching {
        UObject* Provider; // 0x0
    }; // Size: 0x8
    Params_FinishCrouching params{};
    params.Provider = (UObject*)Provider;
    ProcessEvent(func, &params);
}
void ABiped_Character::FacingTargetsListIsNowEmpty(ETargetType::Type LastTargetType, ETargetID::Type LastTargetID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.FacingTargetsListIsNowEmpty"));
    struct Params_FacingTargetsListIsNowEmpty {
        ETargetType::Type LastTargetType; // 0x0
        ETargetID::Type LastTargetID; // 0x1
    }; // Size: 0x2
    Params_FacingTargetsListIsNowEmpty params{};
    params.LastTargetType = (ETargetType::Type)LastTargetType;
    params.LastTargetID = (ETargetID::Type)LastTargetID;
    ProcessEvent(func, &params);
}
void ABiped_Character::FacingNotifyOfNewBestTarget(ETargetType::Type NewTargetType, ETargetID::Type NewTargetID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.FacingNotifyOfNewBestTarget"));
    struct Params_FacingNotifyOfNewBestTarget {
        ETargetType::Type NewTargetType; // 0x0
        ETargetID::Type NewTargetID; // 0x1
    }; // Size: 0x2
    Params_FacingNotifyOfNewBestTarget params{};
    params.NewTargetType = (ETargetType::Type)NewTargetType;
    params.NewTargetID = (ETargetID::Type)NewTargetID;
    ProcessEvent(func, &params);
}
void ABiped_Character::EquipWand() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.EquipWand"));
    struct Params_EquipWand {
    }; // Size: 0x0
    Params_EquipWand params{};
    ProcessEvent(func, &params);
}
void ABiped_Character::EnablePawnInteraction(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.EnablePawnInteraction"));
    struct Params_EnablePawnInteraction {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_EnablePawnInteraction params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
bool ABiped_Character::DetectDiveIntoWater() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.DetectDiveIntoWater"));
    struct Params_DetectDiveIntoWater {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DetectDiveIntoWater params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABiped_Character::ComputeAttack(AActor*& TargetActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.ComputeAttack"));
    struct Params_ComputeAttack {
        AActor* TargetActor; // 0x0
    }; // Size: 0x8
    Params_ComputeAttack params{};
    params.TargetActor = (AActor*)TargetActor;
    ProcessEvent(func, &params);
    TargetActor = params.TargetActor;
}
void ABiped_Character::ClimbLedgeStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.ClimbLedgeStart"));
    struct Params_ClimbLedgeStart {
    }; // Size: 0x0
    Params_ClimbLedgeStart params{};
    ProcessEvent(func, &params);
}
void ABiped_Character::ClimbLedgeEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.ClimbLedgeEnd"));
    struct Params_ClimbLedgeEnd {
    }; // Size: 0x0
    Params_ClimbLedgeEnd params{};
    ProcessEvent(func, &params);
}
void ABiped_Character::CleanUpFinisherSpell() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.CleanUpFinisherSpell"));
    struct Params_CleanUpFinisherSpell {
    }; // Size: 0x0
    Params_CleanUpFinisherSpell params{};
    ProcessEvent(func, &params);
}
bool ABiped_Character::CanLandOnLedge() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.CanLandOnLedge"));
    struct Params_CanLandOnLedge {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanLandOnLedge params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABiped_Character::CancelCurrentSpell(bool RemoveDisillusionment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.CancelCurrentSpell"));
    struct Params_CancelCurrentSpell {
        bool RemoveDisillusionment; // 0x0
    }; // Size: 0x1
    Params_CancelCurrentSpell params{};
    params.RemoveDisillusionment = (bool)RemoveDisillusionment;
    ProcessEvent(func, &params);
}
void ABiped_Character::CalculateLedgePullUpState(EClimbingLedgeState::Type& OutState, EJumpingType::Type& OutType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.CalculateLedgePullUpState"));
    struct Params_CalculateLedgePullUpState {
        EClimbingLedgeState::Type OutState; // 0x0
        EJumpingType::Type OutType; // 0x1
    }; // Size: 0x2
    Params_CalculateLedgePullUpState params{};
    params.OutState = (EClimbingLedgeState::Type)OutState;
    params.OutType = (EJumpingType::Type)OutType;
    ProcessEvent(func, &params);
    OutType = params.OutType;
    OutState = params.OutState;
}
void ABiped_Character::CalculateClimbingLedgeState(EClimbingLedgeState::Type& OutState, EJumpingType::Type& OutType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Biped_Character.CalculateClimbingLedgeState"));
    struct Params_CalculateClimbingLedgeState {
        EClimbingLedgeState::Type OutState; // 0x0
        EJumpingType::Type OutType; // 0x1
    }; // Size: 0x2
    Params_CalculateClimbingLedgeState params{};
    params.OutState = (EClimbingLedgeState::Type)OutState;
    params.OutType = (EJumpingType::Type)OutType;
    ProcessEvent(func, &params);
    OutState = params.OutState;
    OutType = params.OutType;
}
