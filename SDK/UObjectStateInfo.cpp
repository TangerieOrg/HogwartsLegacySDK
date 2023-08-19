#include "AActor.hpp"
#include "EBossStates.hpp"
#include "EFlammableEnum.hpp"
#include "EImpactTypes.hpp"
#include "EMarkupType.hpp"
#include "ENoiseSize.hpp"
#include "EObjectSizeClass.hpp"
#include "EUIHealthBarType.hpp"
#include "EWidgetType.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FMunitionImpactData.hpp"
#include "FSavedMaterialsForMesh.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UAkAudioEvent.hpp"
#include "UAkComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UGeometryCollection.hpp"
#include "UMaterialPropertyData.hpp"
#include "UObject.hpp"
#include "UObjectStateDataContainerBase.hpp"
#include "UObjectStateInfo.hpp"
#include "UObjectStateInfoData.hpp"
#include "UOdcObstacleComponent.hpp"
#include "UParticleSystem.hpp"
#include "UPhoenixPhysicalMaterial.hpp"
#include "UPrimitiveComponent.hpp"
#include "URepairInfo.hpp"
#include "UStaticMesh.hpp"
#include "UVelocityTrackerComponent.hpp"
UObjectStateInfo* UObjectStateInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ObjectStateInfo");
    return (UObjectStateInfo*)res;
}
void UObjectStateInfo::SetMinOptimumAvatarDistance(float Distance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetMinOptimumAvatarDistance"));
    struct Params_SetMinOptimumAvatarDistance {
        float Distance; // 0x0
    }; // Size: 0x4
    Params_SetMinOptimumAvatarDistance params{};
    params.Distance = (float)Distance;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::IsARagdoll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsARagdoll"));
    struct Params_IsARagdoll {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsARagdoll params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsBlocking() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsBlocking"));
    struct Params_IsBlocking {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsBlocking params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::SetSizeClass(EObjectSizeClass NewSizeClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetSizeClass"));
    struct Params_SetSizeClass {
        EObjectSizeClass NewSizeClass; // 0x0
    }; // Size: 0x1
    Params_SetSizeClass params{};
    params.NewSizeClass = (EObjectSizeClass)NewSizeClass;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::WillRevealThruWalls() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.WillRevealThruWalls"));
    struct Params_WillRevealThruWalls {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_WillRevealThruWalls params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::WillNearDeathKneel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.WillNearDeathKneel"));
    struct Params_WillNearDeathKneel {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_WillNearDeathKneel params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::SetCurrentlyTargeted(bool CurrentlyTargeted) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetCurrentlyTargeted"));
    struct Params_SetCurrentlyTargeted {
        bool CurrentlyTargeted; // 0x0
    }; // Size: 0x1
    Params_SetCurrentlyTargeted params{};
    params.CurrentlyTargeted = (bool)CurrentlyTargeted;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::WasOnFireWhenKilled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.WasOnFireWhenKilled"));
    struct Params_WasOnFireWhenKilled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_WasOnFireWhenKilled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::SetDazed(bool bInDazed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetDazed"));
    struct Params_SetDazed {
        bool bInDazed; // 0x0
    }; // Size: 0x1
    Params_SetDazed params{};
    params.bInDazed = (bool)bInDazed;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::GetNeverAffectNavmesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetNeverAffectNavmesh"));
    struct Params_GetNeverAffectNavmesh {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetNeverAffectNavmesh params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::SetForceNotBroken(bool bNotBroken) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetForceNotBroken"));
    struct Params_SetForceNotBroken {
        bool bNotBroken; // 0x0
    }; // Size: 0x1
    Params_SetForceNotBroken params{};
    params.bNotBroken = (bool)bNotBroken;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::RemoveImmuneUnlessCritical(FGameplayTagContainer& InImpactTagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.RemoveImmuneUnlessCritical"));
    struct Params_RemoveImmuneUnlessCritical {
        FGameplayTagContainer InImpactTagContainer; // 0x0
    }; // Size: 0x20
    Params_RemoveImmuneUnlessCritical params{};
    params.InImpactTagContainer = (FGameplayTagContainer)InImpactTagContainer;
    ProcessEvent(func, &params);
    InImpactTagContainer = params.InImpactTagContainer;
}
void UObjectStateInfo::UpdateUsability() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.UpdateUsability"));
    struct Params_UpdateUsability {
    }; // Size: 0x0
    Params_UpdateUsability params{};
    ProcessEvent(func, &params);
}
void UObjectStateInfo::SetHealthBarType(EUIHealthBarType InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetHealthBarType"));
    struct Params_SetHealthBarType {
        EUIHealthBarType InType; // 0x0
    }; // Size: 0x1
    Params_SetHealthBarType params{};
    params.InType = (EUIHealthBarType)InType;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::Unlock(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.Unlock"));
    struct Params_Unlock {
        float Value; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_Unlock params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::UpdateActivation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.UpdateActivation"));
    struct Params_UpdateActivation {
    }; // Size: 0x0
    Params_UpdateActivation params{};
    ProcessEvent(func, &params);
}
void UObjectStateInfo::SetImpulseIgnoreTime(float Time) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetImpulseIgnoreTime"));
    struct Params_SetImpulseIgnoreTime {
        float Time; // 0x0
    }; // Size: 0x4
    Params_SetImpulseIgnoreTime params{};
    params.Time = (float)Time;
    ProcessEvent(func, &params);
}
AActor* UObjectStateInfo::DropLootContainer(FVector InLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.DropLootContainer"));
    struct Params_DropLootContainer {
        FVector InLocation; // 0x0
        char pad_c[0x4];
        AActor* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_DropLootContainer params{};
    params.InLocation = (FVector)InLocation;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
float UObjectStateInfo::GetMinOptimumAvatarDistance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetMinOptimumAvatarDistance"));
    struct Params_GetMinOptimumAvatarDistance {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMinOptimumAvatarDistance params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UObjectStateInfo::TreatAsCharacterForDamage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.TreatAsCharacterForDamage"));
    struct Params_TreatAsCharacterForDamage {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_TreatAsCharacterForDamage params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsOnFire() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsOnFire"));
    struct Params_IsOnFire {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsOnFire params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::SetDamagable(bool Damagable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetDamagable"));
    struct Params_SetDamagable {
        bool Damagable; // 0x0
    }; // Size: 0x1
    Params_SetDamagable params{};
    params.Damagable = (bool)Damagable;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::GetKilledWithAvadaKedavra() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetKilledWithAvadaKedavra"));
    struct Params_GetKilledWithAvadaKedavra {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetKilledWithAvadaKedavra params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::Thaw() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.Thaw"));
    struct Params_Thaw {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_Thaw params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::DisableFallDamage(bool bDisable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.DisableFallDamage"));
    struct Params_DisableFallDamage {
        bool bDisable; // 0x0
    }; // Size: 0x1
    Params_DisableFallDamage params{};
    params.bDisable = (bool)bDisable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UObjectStateInfo::SetExplode(bool bInExplode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetExplode"));
    struct Params_SetExplode {
        bool bInExplode; // 0x0
    }; // Size: 0x1
    Params_SetExplode params{};
    params.bInExplode = (bool)bInExplode;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::OnRepair__DelegateSignature(AActor* RepairedActor) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.ObjectStateInfo.OnRepair__DelegateSignature"));
    struct Params_OnRepair__DelegateSignature {
        AActor* RepairedActor; // 0x0
    }; // Size: 0x8
    Params_OnRepair__DelegateSignature params{};
    params.RepairedActor = (AActor*)RepairedActor;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::TakeDamageFromCharacterCollisions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.TakeDamageFromCharacterCollisions"));
    struct Params_TakeDamageFromCharacterCollisions {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_TakeDamageFromCharacterCollisions params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::ShouldCreateCrimescene(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.ShouldCreateCrimescene"));
    struct Params_ShouldCreateCrimescene {
        AActor* Instigator; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ShouldCreateCrimescene params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::SetupSfx(UAkComponent* AkComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetupSfx"));
    struct Params_SetupSfx {
        UAkComponent* AkComponent; // 0x0
    }; // Size: 0x8
    Params_SetupSfx params{};
    params.AkComponent = (UAkComponent*)AkComponent;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::IsAnOppugnoTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsAnOppugnoTarget"));
    struct Params_IsAnOppugnoTarget {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAnOppugnoTarget params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsAProfessor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsAProfessor"));
    struct Params_IsAProfessor {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAProfessor params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::SetRepairInPlace(bool bInPlace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetRepairInPlace"));
    struct Params_SetRepairInPlace {
        bool bInPlace; // 0x0
    }; // Size: 0x1
    Params_SetRepairInPlace params{};
    params.bInPlace = (bool)bInPlace;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::IsAwake() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsAwake"));
    struct Params_IsAwake {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAwake params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::SetUnusable(float RestoreUsabilityTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetUnusable"));
    struct Params_SetUnusable {
        float RestoreUsabilityTime; // 0x0
    }; // Size: 0x4
    Params_SetUnusable params{};
    params.RestoreUsabilityTime = (float)RestoreUsabilityTime;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::SetForceBroken(bool bBroken) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetForceBroken"));
    struct Params_SetForceBroken {
        bool bBroken; // 0x0
    }; // Size: 0x1
    Params_SetForceBroken params{};
    params.bBroken = (bool)bBroken;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::IsAGoblin() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsAGoblin"));
    struct Params_IsAGoblin {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAGoblin params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsBeingAffectedBySpells() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsBeingAffectedBySpells"));
    struct Params_IsBeingAffectedBySpells {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsBeingAffectedBySpells params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::SetSpecialTargetPerceptionActive(bool bActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetSpecialTargetPerceptionActive"));
    struct Params_SetSpecialTargetPerceptionActive {
        bool bActive; // 0x0
    }; // Size: 0x1
    Params_SetSpecialTargetPerceptionActive params{};
    params.bActive = (bool)bActive;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::AddImmuneUnlessCritical(FGameplayTagContainer& InImpactTagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.AddImmuneUnlessCritical"));
    struct Params_AddImmuneUnlessCritical {
        FGameplayTagContainer InImpactTagContainer; // 0x0
    }; // Size: 0x20
    Params_AddImmuneUnlessCritical params{};
    params.InImpactTagContainer = (FGameplayTagContainer)InImpactTagContainer;
    ProcessEvent(func, &params);
    InImpactTagContainer = params.InImpactTagContainer;
}
void UObjectStateInfo::SetTransformable(bool bTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetTransformable"));
    struct Params_SetTransformable {
        bool bTransform; // 0x0
    }; // Size: 0x1
    Params_SetTransformable params{};
    params.bTransform = (bool)bTransform;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::IsACreature() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsACreature"));
    struct Params_IsACreature {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsACreature params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::SetMarkupValue(EMarkupType MarkupType, float InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetMarkupValue"));
    struct Params_SetMarkupValue {
        EMarkupType MarkupType; // 0x0
        char pad_1[0x3];
        float InValue; // 0x4
    }; // Size: 0x8
    Params_SetMarkupValue params{};
    params.MarkupType = (EMarkupType)MarkupType;
    params.InValue = (float)InValue;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::SetPersistence(bool InPersistence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetPersistence"));
    struct Params_SetPersistence {
        bool InPersistence; // 0x0
    }; // Size: 0x1
    Params_SetPersistence params{};
    params.InPersistence = (bool)InPersistence;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::IsSimulatingPhysics() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsSimulatingPhysics"));
    struct Params_IsSimulatingPhysics {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSimulatingPhysics params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::SetTargetable(bool bTargetable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetTargetable"));
    struct Params_SetTargetable {
        bool bTargetable; // 0x0
    }; // Size: 0x1
    Params_SetTargetable params{};
    params.bTargetable = (bool)bTargetable;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::EndAffectingSpells__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.ObjectStateInfo.EndAffectingSpells__DelegateSignature"));
    struct Params_EndAffectingSpells__DelegateSignature {
    }; // Size: 0x0
    Params_EndAffectingSpells__DelegateSignature params{};
    ProcessEvent(func, &params);
}
float UObjectStateInfo::GetCharredDamageMultiplier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetCharredDamageMultiplier"));
    struct Params_GetCharredDamageMultiplier {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCharredDamageMultiplier params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UObjectStateInfo::SetMaxOptimumAvatarDistance(float Distance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetMaxOptimumAvatarDistance"));
    struct Params_SetMaxOptimumAvatarDistance {
        float Distance; // 0x0
    }; // Size: 0x4
    Params_SetMaxOptimumAvatarDistance params{};
    params.Distance = (float)Distance;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::IsArrestoMomentumed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsArrestoMomentumed"));
    struct Params_IsArrestoMomentumed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsArrestoMomentumed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::SetShowTargetUI(bool ShowUI) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetShowTargetUI"));
    struct Params_SetShowTargetUI {
        bool ShowUI; // 0x0
    }; // Size: 0x1
    Params_SetShowTargetUI params{};
    params.ShowUI = (bool)ShowUI;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::SetSendTargetPriority(uint8_t Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetSendTargetPriority"));
    struct Params_SetSendTargetPriority {
        uint8_t Priority; // 0x0
    }; // Size: 0x1
    Params_SetSendTargetPriority params{};
    params.Priority = (uint8_t)Priority;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::SetInWater(bool inWater, AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetInWater"));
    struct Params_SetInWater {
        bool inWater; // 0x0
        char pad_1[0x7];
        AActor* Instigator; // 0x8
    }; // Size: 0x10
    Params_SetInWater params{};
    params.inWater = (bool)inWater;
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::IsTargetableWhenBroken() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsTargetableWhenBroken"));
    struct Params_IsTargetableWhenBroken {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsTargetableWhenBroken params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::SetRepairable(bool Repairable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetRepairable"));
    struct Params_SetRepairable {
        bool Repairable; // 0x0
    }; // Size: 0x1
    Params_SetRepairable params{};
    params.Repairable = (bool)Repairable;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::RestoreUsability(bool repeat) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.RestoreUsability"));
    struct Params_RestoreUsability {
        bool repeat; // 0x0
    }; // Size: 0x1
    Params_RestoreUsability params{};
    params.repeat = (bool)repeat;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::SetProtectedFromDamageAndSpells(bool bInProtected, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetProtectedFromDamageAndSpells"));
    struct Params_SetProtectedFromDamageAndSpells {
        bool bInProtected; // 0x0
        char pad_1[0x7];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_SetProtectedFromDamageAndSpells params{};
    params.bInProtected = (bool)bInProtected;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::IsANamedCharacter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsANamedCharacter"));
    struct Params_IsANamedCharacter {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsANamedCharacter params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::SetPercentCharred(float PercentCharred) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetPercentCharred"));
    struct Params_SetPercentCharred {
        float PercentCharred; // 0x0
    }; // Size: 0x4
    Params_SetPercentCharred params{};
    params.PercentCharred = (float)PercentCharred;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::SetCanBecomeMovable(bool bCanBecomeMovable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetCanBecomeMovable"));
    struct Params_SetCanBecomeMovable {
        bool bCanBecomeMovable; // 0x0
    }; // Size: 0x1
    Params_SetCanBecomeMovable params{};
    params.bCanBecomeMovable = (bool)bCanBecomeMovable;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::SetMinDamageThreshold(float Threshold) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetMinDamageThreshold"));
    struct Params_SetMinDamageThreshold {
        float Threshold; // 0x0
    }; // Size: 0x4
    Params_SetMinDamageThreshold params{};
    params.Threshold = (float)Threshold;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::CanBeRepaired() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.CanBeRepaired"));
    struct Params_CanBeRepaired {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanBeRepaired params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsObstacleDisabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsObstacleDisabled"));
    struct Params_IsObstacleDisabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsObstacleDisabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::SetMaterialSwapped(bool bInMaterialSwapped) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetMaterialSwapped"));
    struct Params_SetMaterialSwapped {
        bool bInMaterialSwapped; // 0x0
    }; // Size: 0x1
    Params_SetMaterialSwapped params{};
    params.bInMaterialSwapped = (bool)bInMaterialSwapped;
    ProcessEvent(func, &params);
}
float UObjectStateInfo::GetHealth() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetHealth"));
    struct Params_GetHealth {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetHealth params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UObjectStateInfo::SetDestroyedBase(UStaticMesh* Base) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetDestroyedBase"));
    struct Params_SetDestroyedBase {
        UStaticMesh* Base; // 0x0
    }; // Size: 0x8
    Params_SetDestroyedBase params{};
    params.Base = (UStaticMesh*)Base;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::SetLocked() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetLocked"));
    struct Params_SetLocked {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_SetLocked params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::SetJuggernaut(bool bInJuggernaut) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetJuggernaut"));
    struct Params_SetJuggernaut {
        bool bInJuggernaut; // 0x0
    }; // Size: 0x1
    Params_SetJuggernaut params{};
    params.bInJuggernaut = (bool)bInJuggernaut;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::IsCursed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsCursed"));
    struct Params_IsCursed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCursed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::SetIsABoss(bool bInIsABoss) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetIsABoss"));
    struct Params_SetIsABoss {
        bool bInIsABoss; // 0x0
    }; // Size: 0x1
    Params_SetIsABoss params{};
    params.bInIsABoss = (bool)bInIsABoss;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::RestoreMaterial() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.RestoreMaterial"));
    struct Params_RestoreMaterial {
    }; // Size: 0x0
    Params_RestoreMaterial params{};
    ProcessEvent(func, &params);
}
void UObjectStateInfo::SetInWaterVolume(bool inWater) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetInWaterVolume"));
    struct Params_SetInWaterVolume {
        bool inWater; // 0x0
    }; // Size: 0x1
    Params_SetInWaterVolume params{};
    params.inWater = (bool)inWater;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::SetInvulnerableToDamage(bool Invulnerable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetInvulnerableToDamage"));
    struct Params_SetInvulnerableToDamage {
        bool Invulnerable; // 0x0
    }; // Size: 0x1
    Params_SetInvulnerableToDamage params{};
    params.Invulnerable = (bool)Invulnerable;
    ProcessEvent(func, &params);
}
FName UObjectStateInfo::GetDbId() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetDbId"));
    struct Params_GetDbId {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDbId params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UObjectStateInfo::SetInvulnerable(float InInvulnerableTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetInvulnerable"));
    struct Params_SetInvulnerable {
        float InInvulnerableTime; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_SetInvulnerable params{};
    params.InInvulnerableTime = (float)InInvulnerableTime;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::RemoveAllImmunity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.RemoveAllImmunity"));
    struct Params_RemoveAllImmunity {
    }; // Size: 0x0
    Params_RemoveAllImmunity params{};
    ProcessEvent(func, &params);
}
void UObjectStateInfo::SetImmuneToEverythingExcept(FGameplayTagContainer& InImpactTagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetImmuneToEverythingExcept"));
    struct Params_SetImmuneToEverythingExcept {
        FGameplayTagContainer InImpactTagContainer; // 0x0
    }; // Size: 0x20
    Params_SetImmuneToEverythingExcept params{};
    params.InImpactTagContainer = (FGameplayTagContainer)InImpactTagContainer;
    ProcessEvent(func, &params);
    InImpactTagContainer = params.InImpactTagContainer;
}
void UObjectStateInfo::CheckObstacleSetup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.CheckObstacleSetup"));
    struct Params_CheckObstacleSetup {
    }; // Size: 0x0
    Params_CheckObstacleSetup params{};
    ProcessEvent(func, &params);
}
void UObjectStateInfo::ForceBreak(float InScale, bool InRestoreBroken) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.ForceBreak"));
    struct Params_ForceBreak {
        float InScale; // 0x0
        bool InRestoreBroken; // 0x4
    }; // Size: 0x5
    Params_ForceBreak params{};
    params.InScale = (float)InScale;
    params.InRestoreBroken = (bool)InRestoreBroken;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::SetImmuneToSpells(bool bImmune) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetImmuneToSpells"));
    struct Params_SetImmuneToSpells {
        bool bImmune; // 0x0
    }; // Size: 0x1
    Params_SetImmuneToSpells params{};
    params.bImmune = (bool)bImmune;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::IgnoreActorHitEvents() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IgnoreActorHitEvents"));
    struct Params_IgnoreActorHitEvents {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IgnoreActorHitEvents params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsCombatCursed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsCombatCursed"));
    struct Params_IsCombatCursed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCombatCursed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::SetHighlightWhenBroken(bool bHighlightWhenBroken) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetHighlightWhenBroken"));
    struct Params_SetHighlightWhenBroken {
        bool bHighlightWhenBroken; // 0x0
    }; // Size: 0x1
    Params_SetHighlightWhenBroken params{};
    params.bHighlightWhenBroken = (bool)bHighlightWhenBroken;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::HasBecomeMovable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.HasBecomeMovable"));
    struct Params_HasBecomeMovable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasBecomeMovable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::SetHidden(bool bHidden) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetHidden"));
    struct Params_SetHidden {
        bool bHidden; // 0x0
    }; // Size: 0x1
    Params_SetHidden params{};
    params.bHidden = (bool)bHidden;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::OnCurtainRaised() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.OnCurtainRaised"));
    struct Params_OnCurtainRaised {
    }; // Size: 0x0
    Params_OnCurtainRaised params{};
    ProcessEvent(func, &params);
}
void UObjectStateInfo::SetFlammable(EFlammableEnum InFlammable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetFlammable"));
    struct Params_SetFlammable {
        EFlammableEnum InFlammable; // 0x0
    }; // Size: 0x1
    Params_SetFlammable params{};
    params.InFlammable = (EFlammableEnum)InFlammable;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::SetHealth(float Amount, bool bIndicateHUD) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetHealth"));
    struct Params_SetHealth {
        float Amount; // 0x0
        bool bIndicateHUD; // 0x4
        bool ReturnValue; // 0x5
    }; // Size: 0x6
    Params_SetHealth params{};
    params.Amount = (float)Amount;
    params.bIndicateHUD = (bool)bIndicateHUD;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::SetEquipped(bool bInEquipped) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetEquipped"));
    struct Params_SetEquipped {
        bool bInEquipped; // 0x0
    }; // Size: 0x1
    Params_SetEquipped params{};
    params.bInEquipped = (bool)bInEquipped;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::SetFragile(bool Fragile) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetFragile"));
    struct Params_SetFragile {
        bool Fragile; // 0x0
    }; // Size: 0x1
    Params_SetFragile params{};
    params.Fragile = (bool)Fragile;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::SetDieInWater(bool DieInWater) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetDieInWater"));
    struct Params_SetDieInWater {
        bool DieInWater; // 0x0
    }; // Size: 0x1
    Params_SetDieInWater params{};
    params.DieInWater = (bool)DieInWater;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::IsInvulnerableToDamage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsInvulnerableToDamage"));
    struct Params_IsInvulnerableToDamage {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInvulnerableToDamage params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::SetDestructibleMeshByName(FString DestuctibleMeshName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetDestructibleMeshByName"));
    struct Params_SetDestructibleMeshByName {
        FString DestuctibleMeshName; // 0x0
    }; // Size: 0x10
    Params_SetDestructibleMeshByName params{};
    params.DestuctibleMeshName = (FString)DestuctibleMeshName;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::SetDestructibleGeometryCollection(UGeometryCollection* DestructibleGeometryCollection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetDestructibleGeometryCollection"));
    struct Params_SetDestructibleGeometryCollection {
        UGeometryCollection* DestructibleGeometryCollection; // 0x0
    }; // Size: 0x8
    Params_SetDestructibleGeometryCollection params{};
    params.DestructibleGeometryCollection = (UGeometryCollection*)DestructibleGeometryCollection;
    ProcessEvent(func, &params);
}
uint8_t UObjectStateInfo::GetSendTargetPriority() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetSendTargetPriority"));
    struct Params_GetSendTargetPriority {
        uint8_t ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetSendTargetPriority params{};
    ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
void UObjectStateInfo::SetDestroyedBaseByName(FString BaseName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetDestroyedBaseByName"));
    struct Params_SetDestroyedBaseByName {
        FString BaseName; // 0x0
    }; // Size: 0x10
    Params_SetDestroyedBaseByName params{};
    params.BaseName = (FString)BaseName;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::ActorStopSimulatingPhysics(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.ActorStopSimulatingPhysics"));
    struct Params_ActorStopSimulatingPhysics {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_ActorStopSimulatingPhysics params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UObjectStateInfo::IsBrokenOrPartiallyBroken() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsBrokenOrPartiallyBroken"));
    struct Params_IsBrokenOrPartiallyBroken {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsBrokenOrPartiallyBroken params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::SetCanHighlight(bool bCanHighlight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetCanHighlight"));
    struct Params_SetCanHighlight {
        bool bCanHighlight; // 0x0
    }; // Size: 0x1
    Params_SetCanHighlight params{};
    params.bCanHighlight = (bool)bCanHighlight;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::Reset(bool bOriginalLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.Reset"));
    struct Params_Reset {
        bool bOriginalLocation; // 0x0
    }; // Size: 0x1
    Params_Reset params{};
    params.bOriginalLocation = (bool)bOriginalLocation;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::SetBlocking(bool bInBlocking) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetBlocking"));
    struct Params_SetBlocking {
        bool bInBlocking; // 0x0
    }; // Size: 0x1
    Params_SetBlocking params{};
    params.bInBlocking = (bool)bInBlocking;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::SetBaseHealth(float Health) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.SetBaseHealth"));
    struct Params_SetBaseHealth {
        float Health; // 0x0
    }; // Size: 0x4
    Params_SetBaseHealth params{};
    params.Health = (float)Health;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::IsTransformable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsTransformable"));
    struct Params_IsTransformable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsTransformable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::RepairChildren() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.RepairChildren"));
    struct Params_RepairChildren {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_RepairChildren params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::Repair(AActor* RepairInstigator, int32_t Item, bool Aoe, bool InOriginalLocation, bool InAutoComplete) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.Repair"));
    struct Params_Repair {
        AActor* RepairInstigator; // 0x0
        int32_t Item; // 0x8
        bool Aoe; // 0xc
        bool InOriginalLocation; // 0xd
        bool InAutoComplete; // 0xe
    }; // Size: 0xf
    Params_Repair params{};
    params.RepairInstigator = (AActor*)RepairInstigator;
    params.Item = (int32_t)Item;
    params.Aoe = (bool)Aoe;
    params.InOriginalLocation = (bool)InOriginalLocation;
    params.InAutoComplete = (bool)InAutoComplete;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::RemoveMagicEffects(TArray<UClass*>& EffectTypeList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.RemoveMagicEffects"));
    struct Params_RemoveMagicEffects {
        TArray<UClass*> EffectTypeList; // 0x0
    }; // Size: 0x10
    Params_RemoveMagicEffects params{};
    params.EffectTypeList = (TArray<UClass*>)EffectTypeList;
    ProcessEvent(func, &params);
    EffectTypeList = params.EffectTypeList;
}
void UObjectStateInfo::RemoveMagic() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.RemoveMagic"));
    struct Params_RemoveMagic {
    }; // Size: 0x0
    Params_RemoveMagic params{};
    ProcessEvent(func, &params);
}
void UObjectStateInfo::RemoveImmunity(FGameplayTagContainer& InImpactTagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.RemoveImmunity"));
    struct Params_RemoveImmunity {
        FGameplayTagContainer InImpactTagContainer; // 0x0
    }; // Size: 0x20
    Params_RemoveImmunity params{};
    params.InImpactTagContainer = (FGameplayTagContainer)InImpactTagContainer;
    ProcessEvent(func, &params);
    InImpactTagContainer = params.InImpactTagContainer;
}
void UObjectStateInfo::RemoveDeathFx() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.RemoveDeathFx"));
    struct Params_RemoveDeathFx {
    }; // Size: 0x0
    Params_RemoveDeathFx params{};
    ProcessEvent(func, &params);
}
void UObjectStateInfo::RemoveAllStateEffects() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.RemoveAllStateEffects"));
    struct Params_RemoveAllStateEffects {
    }; // Size: 0x0
    Params_RemoveAllStateEffects params{};
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::EndAffectingSpells() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.EndAffectingSpells"));
    struct Params_EndAffectingSpells {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EndAffectingSpells params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::RemoveAllImmuneUnlessCritical() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.RemoveAllImmuneUnlessCritical"));
    struct Params_RemoveAllImmuneUnlessCritical {
    }; // Size: 0x0
    Params_RemoveAllImmuneUnlessCritical params{};
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::IsResurrecting() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsResurrecting"));
    struct Params_IsResurrecting {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsResurrecting params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::RemoveActorMagicEffects(AActor* InActor, TArray<UClass*>& EffectTypeList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.RemoveActorMagicEffects"));
    struct Params_RemoveActorMagicEffects {
        AActor* InActor; // 0x0
        TArray<UClass*> EffectTypeList; // 0x8
    }; // Size: 0x18
    Params_RemoveActorMagicEffects params{};
    params.InActor = (AActor*)InActor;
    params.EffectTypeList = (TArray<UClass*>)EffectTypeList;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    EffectTypeList = params.EffectTypeList;
}
bool UObjectStateInfo::IsWaterproof() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsWaterproof"));
    struct Params_IsWaterproof {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsWaterproof params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::OnRemoved__DelegateSignature(AActor* DestroyedActor) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.ObjectStateInfo.OnRemoved__DelegateSignature"));
    struct Params_OnRemoved__DelegateSignature {
        AActor* DestroyedActor; // 0x0
    }; // Size: 0x8
    Params_OnRemoved__DelegateSignature params{};
    params.DestroyedActor = (AActor*)DestroyedActor;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::OnMunitionImpactDamage(UObject* i_caller, FMunitionImpactData& miData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.OnMunitionImpactDamage"));
    struct Params_OnMunitionImpactDamage {
        UObject* i_caller; // 0x0
        FMunitionImpactData miData; // 0x8
    }; // Size: 0xf8
    Params_OnMunitionImpactDamage params{};
    params.i_caller = (UObject*)i_caller;
    params.miData = (FMunitionImpactData)miData;
    ProcessEvent(func, &params);
    miData = params.miData;
}
UPhoenixPhysicalMaterial* UObjectStateInfo::GetComponentPhoenixPhysicalMaterial(UPrimitiveComponent* InPrimComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetComponentPhoenixPhysicalMaterial"));
    struct Params_GetComponentPhoenixPhysicalMaterial {
        UPrimitiveComponent* InPrimComponent; // 0x0
        UPhoenixPhysicalMaterial* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetComponentPhoenixPhysicalMaterial params{};
    params.InPrimComponent = (UPrimitiveComponent*)InPrimComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UPhoenixPhysicalMaterial*)params.ReturnValue;
}
void UObjectStateInfo::OnHealthChanged__DelegateSignature(AActor* Target, float InHealthChange, bool bIndicateHUD) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.ObjectStateInfo.OnHealthChanged__DelegateSignature"));
    struct Params_OnHealthChanged__DelegateSignature {
        AActor* Target; // 0x0
        float InHealthChange; // 0x8
        bool bIndicateHUD; // 0xc
    }; // Size: 0xd
    Params_OnHealthChanged__DelegateSignature params{};
    params.Target = (AActor*)Target;
    params.InHealthChange = (float)InHealthChange;
    params.bIndicateHUD = (bool)bIndicateHUD;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::IsInWater() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsInWater"));
    struct Params_IsInWater {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInWater params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::OnDestruct__DelegateSignature(AActor* DestroyedActor) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.ObjectStateInfo.OnDestruct__DelegateSignature"));
    struct Params_OnDestruct__DelegateSignature {
        AActor* DestroyedActor; // 0x0
    }; // Size: 0x8
    Params_OnDestruct__DelegateSignature params{};
    params.DestroyedActor = (AActor*)DestroyedActor;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::OnEspiskeyHealing__DelegateSignature(AActor* Instigator, float InHealthChange, AActor* Target) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.ObjectStateInfo.OnEspiskeyHealing__DelegateSignature"));
    struct Params_OnEspiskeyHealing__DelegateSignature {
        AActor* Instigator; // 0x0
        float InHealthChange; // 0x8
        char pad_c[0x4];
        AActor* Target; // 0x10
    }; // Size: 0x18
    Params_OnEspiskeyHealing__DelegateSignature params{};
    params.Instigator = (AActor*)Instigator;
    params.InHealthChange = (float)InHealthChange;
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.OnActorHit"));
    struct Params_OnActorHit {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
        FVector NormalImpulse; // 0x10
        FHitResult Hit; // 0x1c
    }; // Size: 0xa4
    Params_OnActorHit params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
float UObjectStateInfo::GetFireDamageFloor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetFireDamageFloor"));
    struct Params_GetFireDamageFloor {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFireDamageFloor params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UObjectStateInfo::OnActorDamaged__DelegateSignature(AActor* Target, AActor* Instigator, float Damage, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.ObjectStateInfo.OnActorDamaged__DelegateSignature"));
    struct Params_OnActorDamaged__DelegateSignature {
        AActor* Target; // 0x0
        AActor* Instigator; // 0x8
        float Damage; // 0x10
        FHitResult Hit; // 0x14
    }; // Size: 0x9c
    Params_OnActorDamaged__DelegateSignature params{};
    params.Target = (AActor*)Target;
    params.Instigator = (AActor*)Instigator;
    params.Damage = (float)Damage;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
void UObjectStateInfo::NotifyCriticalHit() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.NotifyCriticalHit"));
    struct Params_NotifyCriticalHit {
    }; // Size: 0x0
    Params_NotifyCriticalHit params{};
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::IsUsableWhenRepaired() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsUsableWhenRepaired"));
    struct Params_IsUsableWhenRepaired {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsUsableWhenRepaired params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsUsable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsUsable"));
    struct Params_IsUsable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsUsable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsTargetable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsTargetable"));
    struct Params_IsTargetable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsTargetable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsUnusable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsUnusable"));
    struct Params_IsUnusable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsUnusable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsSpecialTargetPerceptionActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsSpecialTargetPerceptionActive"));
    struct Params_IsSpecialTargetPerceptionActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSpecialTargetPerceptionActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsRevelioResource() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsRevelioResource"));
    struct Params_IsRevelioResource {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsRevelioResource params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsRepairInPlace() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsRepairInPlace"));
    struct Params_IsRepairInPlace {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsRepairInPlace params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsRepairing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsRepairing"));
    struct Params_IsRepairing {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsRepairing params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName UObjectStateInfo::GetDbSubtypeID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetDbSubtypeID"));
    struct Params_GetDbSubtypeID {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDbSubtypeID params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UObjectStateInfo::IsMaterialSwapped() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsMaterialSwapped"));
    struct Params_IsMaterialSwapped {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsMaterialSwapped params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsRepairable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsRepairable"));
    struct Params_IsRepairable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsRepairable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsProtectedFromDeath() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsProtectedFromDeath"));
    struct Params_IsProtectedFromDeath {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsProtectedFromDeath params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsFreezable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsFreezable"));
    struct Params_IsFreezable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFreezable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsProtectedFromDamageAndSpells() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsProtectedFromDamageAndSpells"));
    struct Params_IsProtectedFromDamageAndSpells {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsProtectedFromDamageAndSpells params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsProtectedCompanion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsProtectedCompanion"));
    struct Params_IsProtectedCompanion {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsProtectedCompanion params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsDead() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsDead"));
    struct Params_IsDead {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDead params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsPointOnFire(FVector& Point, bool LimitToRing) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsPointOnFire"));
    struct Params_IsPointOnFire {
        FVector Point; // 0x0
        bool LimitToRing; // 0xc
        bool ReturnValue; // 0xd
    }; // Size: 0xe
    Params_IsPointOnFire params{};
    params.Point = (FVector)Point;
    params.LimitToRing = (bool)LimitToRing;
    ProcessEvent(func, &params);
    Point = params.Point;
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsPetrified() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsPetrified"));
    struct Params_IsPetrified {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPetrified params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsPartiallyBroken() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsPartiallyBroken"));
    struct Params_IsPartiallyBroken {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPartiallyBroken params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UObjectStateInfo::GetTodaysPlayerGainedSoCapCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetTodaysPlayerGainedSoCapCount"));
    struct Params_GetTodaysPlayerGainedSoCapCount {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTodaysPlayerGainedSoCapCount params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UObjectStateInfo::IsCrucioed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsCrucioed"));
    struct Params_IsCrucioed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCrucioed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsObjectTypeWater() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsObjectTypeWater"));
    struct Params_IsObjectTypeWater {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsObjectTypeWater params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsObjectTypePlant() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsObjectTypePlant"));
    struct Params_IsObjectTypePlant {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsObjectTypePlant params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsFrozen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsFrozen"));
    struct Params_IsFrozen {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFrozen params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsObjectTypeInanimate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsObjectTypeInanimate"));
    struct Params_IsObjectTypeInanimate {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsObjectTypeInanimate params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsObjectTypeAnimate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsObjectTypeAnimate"));
    struct Params_IsObjectTypeAnimate {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsObjectTypeAnimate params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsNoDamageBreakable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsNoDamageBreakable"));
    struct Params_IsNoDamageBreakable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsNoDamageBreakable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsNearDeathKneeling() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsNearDeathKneeling"));
    struct Params_IsNearDeathKneeling {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsNearDeathKneeling params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsMovable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsMovable"));
    struct Params_IsMovable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsMovable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UObjectStateInfo::GetPlayerConsecutiveEnemyHits() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetPlayerConsecutiveEnemyHits"));
    struct Params_GetPlayerConsecutiveEnemyHits {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlayerConsecutiveEnemyHits params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UObjectStateInfo::IsMounted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsMounted"));
    struct Params_IsMounted {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsMounted params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsLocked() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsLocked"));
    struct Params_IsLocked {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLocked params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsADugbog() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsADugbog"));
    struct Params_IsADugbog {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsADugbog params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsLevitating() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsLevitating"));
    struct Params_IsLevitating {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLevitating params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AActor* UObjectStateInfo::GetActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetActor"));
    struct Params_GetActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
bool UObjectStateInfo::IsInWaterVolume() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsInWaterVolume"));
    struct Params_IsInWaterVolume {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInWaterVolume params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UObjectStateInfo::GetActorMass(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetActorMass"));
    struct Params_GetActorMass {
        AActor* InActor; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetActorMass params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UObjectStateInfo::IsInvulnerable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsInvulnerable"));
    struct Params_IsInvulnerable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInvulnerable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsInteractive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsInteractive"));
    struct Params_IsInteractive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInteractive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UObjectStateInfo::GetCompanionLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetCompanionLevel"));
    struct Params_GetCompanionLevel {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCompanionLevel params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UObjectStateInfo::IsInNeedOfRepair() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsInNeedOfRepair"));
    struct Params_IsInNeedOfRepair {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInNeedOfRepair params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsImperiousControlled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsImperiousControlled"));
    struct Params_IsImperiousControlled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsImperiousControlled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsImmuneToSpells() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsImmuneToSpells"));
    struct Params_IsImmuneToSpells {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsImmuneToSpells params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsImmuneToFireDamage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsImmuneToFireDamage"));
    struct Params_IsImmuneToFireDamage {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsImmuneToFireDamage params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsHealthZero() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsHealthZero"));
    struct Params_IsHealthZero {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsHealthZero params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsHidden() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsHidden"));
    struct Params_IsHidden {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsHidden params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsHealthCritical(bool bIgnorePendingDamage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsHealthCritical"));
    struct Params_IsHealthCritical {
        bool bIgnorePendingDamage; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsHealthCritical params{};
    params.bIgnorePendingDamage = (bool)bIgnorePendingDamage;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsFragile() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsFragile"));
    struct Params_IsFragile {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFragile params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsFlammable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsFlammable"));
    struct Params_IsFlammable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFlammable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsFightClubOpponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsFightClubOpponent"));
    struct Params_IsFightClubOpponent {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFightClubOpponent params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsFallDamageDisabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsFallDamageDisabled"));
    struct Params_IsFallDamageDisabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFallDamageDisabled params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsEquipped() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsEquipped"));
    struct Params_IsEquipped {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsEquipped params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsDisillusioned() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsDisillusioned"));
    struct Params_IsDisillusioned {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDisillusioned params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsDazed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsDazed"));
    struct Params_IsDazed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDazed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UObjectStateInfo::GetNormalHarvestCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetNormalHarvestCount"));
    struct Params_GetNormalHarvestCount {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNormalHarvestCount params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UObjectStateInfo::IsDamagableWhenFrozen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsDamagableWhenFrozen"));
    struct Params_IsDamagableWhenFrozen {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDamagableWhenFrozen params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::Deactivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.Deactivate"));
    struct Params_Deactivate {
    }; // Size: 0x0
    Params_Deactivate params{};
    ProcessEvent(func, &params);
}
void UObjectStateInfo::ForceAsleep() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.ForceAsleep"));
    struct Params_ForceAsleep {
    }; // Size: 0x0
    Params_ForceAsleep params{};
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::IsDamagableWhenCharred() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsDamagableWhenCharred"));
    struct Params_IsDamagableWhenCharred {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDamagableWhenCharred params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsDamagableInPieces() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsDamagableInPieces"));
    struct Params_IsDamagableInPieces {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDamagableInPieces params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsDamagable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsDamagable"));
    struct Params_IsDamagable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDamagable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsCuttable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsCuttable"));
    struct Params_IsCuttable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCuttable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::HasOnFireDoT() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.HasOnFireDoT"));
    struct Params_HasOnFireDoT {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasOnFireDoT params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsCommonBreakable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsCommonBreakable"));
    struct Params_IsCommonBreakable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCommonBreakable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsCharred() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsCharred"));
    struct Params_IsCharred {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCharred params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsCharacterOnGroundWithHitResult(AActor* InActor, FHitResult& OutHitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsCharacterOnGroundWithHitResult"));
    struct Params_IsCharacterOnGroundWithHitResult {
        AActor* InActor; // 0x0
        FHitResult OutHitResult; // 0x8
        bool ReturnValue; // 0x90
    }; // Size: 0x91
    Params_IsCharacterOnGroundWithHitResult params{};
    params.InActor = (AActor*)InActor;
    params.OutHitResult = (FHitResult)OutHitResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutHitResult = params.OutHitResult;
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsCharacterOnGround(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsCharacterOnGround"));
    struct Params_IsCharacterOnGround {
        AActor* InActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsCharacterOnGround params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UVelocityTrackerComponent* UObjectStateInfo::GetVelocityTracker() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetVelocityTracker"));
    struct Params_GetVelocityTracker {
        UVelocityTrackerComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetVelocityTracker params{};
    ProcessEvent(func, &params);
    return (UVelocityTrackerComponent*)params.ReturnValue;
}
bool UObjectStateInfo::IsBurning() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsBurning"));
    struct Params_IsBurning {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsBurning params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsBroken() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsBroken"));
    struct Params_IsBroken {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsBroken params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsAWolf() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsAWolf"));
    struct Params_IsAWolf {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAWolf params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::BecomeMovable(bool bBecomeMovable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.BecomeMovable"));
    struct Params_BecomeMovable {
        bool bBecomeMovable; // 0x0
    }; // Size: 0x1
    Params_BecomeMovable params{};
    params.bBecomeMovable = (bool)bBecomeMovable;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::IsAWizard() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsAWizard"));
    struct Params_IsAWizard {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAWizard params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::CreateNoise(ENoiseSize NoiseSize, FVector& NoiseLocation, AActor* NoiseInstigator, FGameplayTagContainer EventContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.CreateNoise"));
    struct Params_CreateNoise {
        ENoiseSize NoiseSize; // 0x0
        char pad_1[0x3];
        FVector NoiseLocation; // 0x4
        AActor* NoiseInstigator; // 0x10
        FGameplayTagContainer EventContainer; // 0x18
    }; // Size: 0x38
    Params_CreateNoise params{};
    params.NoiseSize = (ENoiseSize)NoiseSize;
    params.NoiseLocation = (FVector)NoiseLocation;
    params.NoiseInstigator = (AActor*)NoiseInstigator;
    params.EventContainer = (FGameplayTagContainer)EventContainer;
    ProcessEvent(func, &params);
    NoiseLocation = params.NoiseLocation;
}
bool UObjectStateInfo::IsATroll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsATroll"));
    struct Params_IsATroll {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsATroll params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName UObjectStateInfo::GetDbVoiceId() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetDbVoiceId"));
    struct Params_GetDbVoiceId {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDbVoiceId params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
float UObjectStateInfo::GetFrozenDamageMultiplier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetFrozenDamageMultiplier"));
    struct Params_GetFrozenDamageMultiplier {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFrozenDamageMultiplier params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UObjectStateInfo::IsATransformedCharacter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsATransformedCharacter"));
    struct Params_IsATransformedCharacter {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsATransformedCharacter params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsABiped() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsABiped"));
    struct Params_IsABiped {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsABiped params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsAStudent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsAStudent"));
    struct Params_IsAStudent {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAStudent params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsAStation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsAStation"));
    struct Params_IsAStation {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAStation params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsActorSimulatingPhysics(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsActorSimulatingPhysics"));
    struct Params_IsActorSimulatingPhysics {
        AActor* InActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsActorSimulatingPhysics params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsASpider() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsASpider"));
    struct Params_IsASpider {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsASpider params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsAProtectedCharacterWhichCannotDie() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsAProtectedCharacterWhichCannotDie"));
    struct Params_IsAProtectedCharacterWhichCannotDie {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAProtectedCharacterWhichCannotDie params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UObjectStateInfo::GetPlayerPottedPlants() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetPlayerPottedPlants"));
    struct Params_GetPlayerPottedPlants {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlayerPottedPlants params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UObjectStateInfo::IsAPortraitCharacter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsAPortraitCharacter"));
    struct Params_IsAPortraitCharacter {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAPortraitCharacter params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsAPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsAPlayer"));
    struct Params_IsAPlayer {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAPlayer params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsAPlant() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsAPlant"));
    struct Params_IsAPlant {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAPlant params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsAHouseElf() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsAHouseElf"));
    struct Params_IsAHouseElf {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAHouseElf params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsAnInferi() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsAnInferi"));
    struct Params_IsAnInferi {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAnInferi params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsAnEnvironment() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsAnEnvironment"));
    struct Params_IsAnEnvironment {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAnEnvironment params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsAnEnemy() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsAnEnemy"));
    struct Params_IsAnEnemy {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAnEnemy params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsAMount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsAMount"));
    struct Params_IsAMount {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAMount params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsAMagicalCreatureWhichCannotDie() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsAMagicalCreatureWhichCannotDie"));
    struct Params_IsAMagicalCreatureWhichCannotDie {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAMagicalCreatureWhichCannotDie params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsAlly(AActor* ActorPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsAlly"));
    struct Params_IsAlly {
        AActor* ActorPtr; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsAlly params{};
    params.ActorPtr = (AActor*)ActorPtr;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsALeader() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsALeader"));
    struct Params_IsALeader {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsALeader params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName UObjectStateInfo::GetDbPersistentId() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetDbPersistentId"));
    struct Params_GetDbPersistentId {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDbPersistentId params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UObjectStateInfo::IsAJuggernaut() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsAJuggernaut"));
    struct Params_IsAJuggernaut {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAJuggernaut params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsAHobo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsAHobo"));
    struct Params_IsAHobo {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAHobo params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsAGhost() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsAGhost"));
    struct Params_IsAGhost {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAGhost params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsADragon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsADragon"));
    struct Params_IsADragon {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsADragon params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsACompanion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsACompanion"));
    struct Params_IsACompanion {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsACompanion params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsADarkWizard() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsADarkWizard"));
    struct Params_IsADarkWizard {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsADarkWizard params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsActorLeviosoActive(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsActorLeviosoActive"));
    struct Params_IsActorLeviosoActive {
        AActor* InActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsActorLeviosoActive params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsACharacter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsACharacter"));
    struct Params_IsACharacter {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsACharacter params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IsACentaur() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsACentaur"));
    struct Params_IsACentaur {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsACentaur params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName UObjectStateInfo::GetDbGenderId() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetDbGenderId"));
    struct Params_GetDbGenderId {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDbGenderId params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UObjectStateInfo::IsABossCharacter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IsABossCharacter"));
    struct Params_IsABossCharacter {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsABossCharacter params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::InWaterChangedDelegate__DelegateSignature(UObjectStateInfo* ObjectStateInfo, bool bOldInWater) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.ObjectStateInfo.InWaterChangedDelegate__DelegateSignature"));
    struct Params_InWaterChangedDelegate__DelegateSignature {
        UObjectStateInfo* ObjectStateInfo; // 0x0
        bool bOldInWater; // 0x8
    }; // Size: 0x9
    Params_InWaterChangedDelegate__DelegateSignature params{};
    params.ObjectStateInfo = (UObjectStateInfo*)ObjectStateInfo;
    params.bOldInWater = (bool)bOldInWater;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::IgnoreMunitionImpactEvents() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IgnoreMunitionImpactEvents"));
    struct Params_IgnoreMunitionImpactEvents {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IgnoreMunitionImpactEvents params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::IgnoreLimitedCountRules() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.IgnoreLimitedCountRules"));
    struct Params_IgnoreLimitedCountRules {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IgnoreLimitedCountRules params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::HasStateEffect() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.HasStateEffect"));
    struct Params_HasStateEffect {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasStateEffect params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::HasAffectingSpells() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.HasAffectingSpells"));
    struct Params_HasAffectingSpells {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasAffectingSpells params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::GetDisplayDamage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetDisplayDamage"));
    struct Params_GetDisplayDamage {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDisplayDamage params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UObjectStateInfo::GetWetness() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetWetness"));
    struct Params_GetWetness {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetWetness params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UObjectStateInfo::GetUIHealthPercent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetUIHealthPercent"));
    struct Params_GetUIHealthPercent {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetUIHealthPercent params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FName UObjectStateInfo::GetType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetType"));
    struct Params_GetType {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetType params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
float UObjectStateInfo::GetLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetLevel"));
    struct Params_GetLevel {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLevel params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UObjectStateInfo::GetStudentsInInfirmary() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetStudentsInInfirmary"));
    struct Params_GetStudentsInInfirmary {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetStudentsInInfirmary params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UObjectStateInfo::CanHighlightWhenBroken() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.CanHighlightWhenBroken"));
    struct Params_CanHighlightWhenBroken {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanHighlightWhenBroken params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::GetStartAsleep() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetStartAsleep"));
    struct Params_GetStartAsleep {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetStartAsleep params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName UObjectStateInfo::GetDbLookId() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetDbLookId"));
    struct Params_GetDbLookId {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDbLookId params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
float UObjectStateInfo::GetSizeClassOnFireDestroyedDamage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetSizeClassOnFireDestroyedDamage"));
    struct Params_GetSizeClassOnFireDestroyedDamage {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSizeClassOnFireDestroyedDamage params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UClass* UObjectStateInfo::GetSizeClassOnFireDestroyedAOE() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetSizeClassOnFireDestroyedAOE"));
    struct Params_GetSizeClassOnFireDestroyedAOE {
        UClass* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSizeClassOnFireDestroyedAOE params{};
    ProcessEvent(func, &params);
    return (UClass*)params.ReturnValue;
}
float UObjectStateInfo::GetSizeClassFireDamageMultiplier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetSizeClassFireDamageMultiplier"));
    struct Params_GetSizeClassFireDamageMultiplier {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSizeClassFireDamageMultiplier params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
EObjectSizeClass UObjectStateInfo::GetSizeClass() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetSizeClass"));
    struct Params_GetSizeClass {
        EObjectSizeClass ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetSizeClass params{};
    ProcessEvent(func, &params);
    return (EObjectSizeClass)params.ReturnValue;
}
bool UObjectStateInfo::GetNavOverrideMobilityCheck() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetNavOverrideMobilityCheck"));
    struct Params_GetNavOverrideMobilityCheck {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetNavOverrideMobilityCheck params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::GetShowTargetUI() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetShowTargetUI"));
    struct Params_GetShowTargetUI {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowTargetUI params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UObjectStateInfo::GetRawCurrentHealth() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetRawCurrentHealth"));
    struct Params_GetRawCurrentHealth {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRawCurrentHealth params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UObjectStateInfo::GetRagdollInfo(FVector& Location, FVector& Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetRagdollInfo"));
    struct Params_GetRagdollInfo {
        FVector Location; // 0x0
        FVector Velocity; // 0xc
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_GetRagdollInfo params{};
    params.Location = (FVector)Location;
    params.Velocity = (FVector)Velocity;
    ProcessEvent(func, &params);
    Location = params.Location;
    Velocity = params.Velocity;
    return (bool)params.ReturnValue;
}
FName UObjectStateInfo::GetRagdollBoneName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetRagdollBoneName"));
    struct Params_GetRagdollBoneName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetRagdollBoneName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
float UObjectStateInfo::GetPlayerFriendsCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetPlayerFriendsCount"));
    struct Params_GetPlayerFriendsCount {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlayerFriendsCount params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UObjectStateInfo::GetPlayerEnemiesCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetPlayerEnemiesCount"));
    struct Params_GetPlayerEnemiesCount {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlayerEnemiesCount params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UObjectStateInfo::ActorStartSimulatingPhysics(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.ActorStartSimulatingPhysics"));
    struct Params_ActorStartSimulatingPhysics {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_ActorStartSimulatingPhysics params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
float UObjectStateInfo::GetPlayerCompletedFactSheets() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetPlayerCompletedFactSheets"));
    struct Params_GetPlayerCompletedFactSheets {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlayerCompletedFactSheets params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UObjectStateInfo::DisableObjectState(bool bInDisabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.DisableObjectState"));
    struct Params_DisableObjectState {
        bool bInDisabled; // 0x0
    }; // Size: 0x1
    Params_DisableObjectState params{};
    params.bInDisabled = (bool)bInDisabled;
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::GetPersistence() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetPersistence"));
    struct Params_GetPersistence {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPersistence params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UObjectStateInfo::GetPercentCharred() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetPercentCharred"));
    struct Params_GetPercentCharred {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPercentCharred params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UObjectStateInfoData* UObjectStateInfo::GetObjectStateInfoData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetObjectStateInfoData"));
    struct Params_GetObjectStateInfoData {
        UObjectStateInfoData* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetObjectStateInfoData params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UObjectStateInfoData*)params.ReturnValue;
}
bool UObjectStateInfo::DiesInWater() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.DiesInWater"));
    struct Params_DiesInWater {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DiesInWater params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::DisableDamageMods(bool bDisable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.DisableDamageMods"));
    struct Params_DisableDamageMods {
        bool bDisable; // 0x0
    }; // Size: 0x1
    Params_DisableDamageMods params{};
    params.bDisable = (bool)bDisable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
ENoiseSize UObjectStateInfo::GetObjectNoiseSize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetObjectNoiseSize"));
    struct Params_GetObjectNoiseSize {
        ENoiseSize ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetObjectNoiseSize params{};
    ProcessEvent(func, &params);
    return (ENoiseSize)params.ReturnValue;
}
void UObjectStateInfo::GetNonScaledActorBounds(AActor* InActor, bool bOnlyCollidingComponents, FVector& Origin, FVector& BoxExtent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetNonScaledActorBounds"));
    struct Params_GetNonScaledActorBounds {
        AActor* InActor; // 0x0
        bool bOnlyCollidingComponents; // 0x8
        char pad_9[0x3];
        FVector Origin; // 0xc
        FVector BoxExtent; // 0x18
    }; // Size: 0x24
    Params_GetNonScaledActorBounds params{};
    params.InActor = (AActor*)InActor;
    params.bOnlyCollidingComponents = (bool)bOnlyCollidingComponents;
    params.Origin = (FVector)Origin;
    params.BoxExtent = (FVector)BoxExtent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Origin = params.Origin;
    BoxExtent = params.BoxExtent;
}
bool UObjectStateInfo::GetCurrentlyTargeted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetCurrentlyTargeted"));
    struct Params_GetCurrentlyTargeted {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCurrentlyTargeted params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UObjectStateInfo::GetMinDamageThreshold() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetMinDamageThreshold"));
    struct Params_GetMinDamageThreshold {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMinDamageThreshold params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UObjectStateInfo::GetMaxOptimumAvatarDistance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetMaxOptimumAvatarDistance"));
    struct Params_GetMaxOptimumAvatarDistance {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxOptimumAvatarDistance params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UObjectStateInfo::GetMaxHealth() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetMaxHealth"));
    struct Params_GetMaxHealth {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxHealth params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UMaterialPropertyData* UObjectStateInfo::GetMaterialPropertyData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetMaterialPropertyData"));
    struct Params_GetMaterialPropertyData {
        UMaterialPropertyData* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMaterialPropertyData params{};
    ProcessEvent(func, &params);
    return (UMaterialPropertyData*)params.ReturnValue;
}
float UObjectStateInfo::GetMass() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetMass"));
    struct Params_GetMass {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMass params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UObjectStateInfo::GetMarkupValue(EMarkupType MarkupType, float& OutValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetMarkupValue"));
    struct Params_GetMarkupValue {
        EMarkupType MarkupType; // 0x0
        char pad_1[0x3];
        float OutValue; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetMarkupValue params{};
    params.MarkupType = (EMarkupType)MarkupType;
    params.OutValue = (float)OutValue;
    ProcessEvent(func, &params);
    OutValue = params.OutValue;
    return (bool)params.ReturnValue;
}
float UObjectStateInfo::GetLockValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetLockValue"));
    struct Params_GetLockValue {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLockValue params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UObjectStateInfo::GetLastDamageInReactionAdjustment() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetLastDamageInReactionAdjustment"));
    struct Params_GetLastDamageInReactionAdjustment {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetLastDamageInReactionAdjustment params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
EImpactTypes UObjectStateInfo::GetImpactType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetImpactType"));
    struct Params_GetImpactType {
        EImpactTypes ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetImpactType params{};
    ProcessEvent(func, &params);
    return (EImpactTypes)params.ReturnValue;
}
UAkAudioEvent* UObjectStateInfo::GetHitSfx() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetHitSfx"));
    struct Params_GetHitSfx {
        UAkAudioEvent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetHitSfx params{};
    ProcessEvent(func, &params);
    return (UAkAudioEvent*)params.ReturnValue;
}
float UObjectStateInfo::GetHealthPercentage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetHealthPercentage"));
    struct Params_GetHealthPercentage {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetHealthPercentage params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
EUIHealthBarType UObjectStateInfo::GetHealthBarType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetHealthBarType"));
    struct Params_GetHealthBarType {
        EUIHealthBarType ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetHealthBarType params{};
    ProcessEvent(func, &params);
    return (EUIHealthBarType)params.ReturnValue;
}
float UObjectStateInfo::GetFireDamagePerSecond() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetFireDamagePerSecond"));
    struct Params_GetFireDamagePerSecond {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFireDamagePerSecond params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UAkAudioEvent* UObjectStateInfo::GetFastSfx() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetFastSfx"));
    struct Params_GetFastSfx {
        UAkAudioEvent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetFastSfx params{};
    ProcessEvent(func, &params);
    return (UAkAudioEvent*)params.ReturnValue;
}
UStaticMesh* UObjectStateInfo::GetDestroyedBase() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetDestroyedBase"));
    struct Params_GetDestroyedBase {
        UStaticMesh* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDestroyedBase params{};
    ProcessEvent(func, &params);
    return (UStaticMesh*)params.ReturnValue;
}
FName UObjectStateInfo::GetDbTypeId() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetDbTypeId"));
    struct Params_GetDbTypeId {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDbTypeId params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName UObjectStateInfo::GetDbEmoteVoiceId() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetDbEmoteVoiceId"));
    struct Params_GetDbEmoteVoiceId {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDbEmoteVoiceId params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName UObjectStateInfo::GetDbClassId() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetDbClassId"));
    struct Params_GetDbClassId {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDbClassId params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
float UObjectStateInfo::GetCursedEnemyCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetCursedEnemyCount"));
    struct Params_GetCursedEnemyCount {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCursedEnemyCount params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UObjectStateInfo::GetCurrentItemEffectiveness() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetCurrentItemEffectiveness"));
    struct Params_GetCurrentItemEffectiveness {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentItemEffectiveness params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UObjectStateInfo::GetBrokenPieceLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetBrokenPieceLocation"));
    struct Params_GetBrokenPieceLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetBrokenPieceLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
EBossStates UObjectStateInfo::GetBossState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetBossState"));
    struct Params_GetBossState {
        EBossStates ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetBossState params{};
    ProcessEvent(func, &params);
    return (EBossStates)params.ReturnValue;
}
float UObjectStateInfo::GetBaseHealth() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetBaseHealth"));
    struct Params_GetBaseHealth {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetBaseHealth params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UPrimitiveComponent* UObjectStateInfo::GetActorMainPrimitiveComponent(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetActorMainPrimitiveComponent"));
    struct Params_GetActorMainPrimitiveComponent {
        AActor* InActor; // 0x0
        UPrimitiveComponent* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetActorMainPrimitiveComponent params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UPrimitiveComponent*)params.ReturnValue;
}
EImpactTypes UObjectStateInfo::GetActorImpactType(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.GetActorImpactType"));
    struct Params_GetActorImpactType {
        AActor* InActor; // 0x0
        EImpactTypes ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetActorImpactType params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EImpactTypes)params.ReturnValue;
}
void UObjectStateInfo::ExtendNearDeathKneel(float KneelTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.ExtendNearDeathKneel"));
    struct Params_ExtendNearDeathKneel {
        float KneelTime; // 0x0
    }; // Size: 0x4
    Params_ExtendNearDeathKneel params{};
    params.KneelTime = (float)KneelTime;
    ProcessEvent(func, &params);
}
AActor* UObjectStateInfo::DropCooldownPickup(FVector InLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.DropCooldownPickup"));
    struct Params_DropCooldownPickup {
        FVector InLocation; // 0x0
        char pad_c[0x4];
        AActor* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_DropCooldownPickup params{};
    params.InLocation = (FVector)InLocation;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
bool UObjectStateInfo::DoHealing(float Amount, AActor* InInstigator, UPrimitiveComponent* PrimComp, int32_t Item, bool bAoe, bool InOriginalLocation, bool InAutoComplete) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.DoHealing"));
    struct Params_DoHealing {
        float Amount; // 0x0
        char pad_4[0x4];
        AActor* InInstigator; // 0x8
        UPrimitiveComponent* PrimComp; // 0x10
        int32_t Item; // 0x18
        bool bAoe; // 0x1c
        bool InOriginalLocation; // 0x1d
        bool InAutoComplete; // 0x1e
        bool ReturnValue; // 0x1f
    }; // Size: 0x20
    Params_DoHealing params{};
    params.Amount = (float)Amount;
    params.InInstigator = (AActor*)InInstigator;
    params.PrimComp = (UPrimitiveComponent*)PrimComp;
    params.Item = (int32_t)Item;
    params.bAoe = (bool)bAoe;
    params.InOriginalLocation = (bool)InOriginalLocation;
    params.InAutoComplete = (bool)InAutoComplete;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::DoFireDamage(float Amount, AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.DoFireDamage"));
    struct Params_DoFireDamage {
        float Amount; // 0x0
        char pad_4[0x4];
        AActor* Instigator; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_DoFireDamage params{};
    params.Amount = (float)Amount;
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::DoesExplode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.DoesExplode"));
    struct Params_DoesExplode {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DoesExplode params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::DelayedRestoreUsability(float Delay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.DelayedRestoreUsability"));
    struct Params_DelayedRestoreUsability {
        float Delay; // 0x0
    }; // Size: 0x4
    Params_DelayedRestoreUsability params{};
    params.Delay = (float)Delay;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::DelayedRestoreBroken(float InTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.DelayedRestoreBroken"));
    struct Params_DelayedRestoreBroken {
        float InTime; // 0x0
    }; // Size: 0x4
    Params_DelayedRestoreBroken params{};
    params.InTime = (float)InTime;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::DelayedForceBreak(float InTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.DelayedForceBreak"));
    struct Params_DelayedForceBreak {
        float InTime; // 0x0
    }; // Size: 0x4
    Params_DelayedForceBreak params{};
    params.InTime = (float)InTime;
    ProcessEvent(func, &params);
}
void UObjectStateInfo::DelayDropLootContainer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.DelayDropLootContainer"));
    struct Params_DelayDropLootContainer {
    }; // Size: 0x0
    Params_DelayDropLootContainer params{};
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::DecreaseWetness(float Amount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.DecreaseWetness"));
    struct Params_DecreaseWetness {
        float Amount; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_DecreaseWetness params{};
    params.Amount = (float)Amount;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::DecreaseFire(float Amount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.DecreaseFire"));
    struct Params_DecreaseFire {
        float Amount; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_DecreaseFire params{};
    params.Amount = (float)Amount;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::ClearCooldownPickupTargets() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.ClearCooldownPickupTargets"));
    struct Params_ClearCooldownPickupTargets {
    }; // Size: 0x0
    Params_ClearCooldownPickupTargets params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UObjectStateInfo::DamageInPieces(float InImpulseStr, float InDamage, FVector& InHitLocation, FVector& InHitDirection, float InRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.DamageInPieces"));
    struct Params_DamageInPieces {
        float InImpulseStr; // 0x0
        float InDamage; // 0x4
        FVector InHitLocation; // 0x8
        FVector InHitDirection; // 0x14
        float InRadius; // 0x20
    }; // Size: 0x24
    Params_DamageInPieces params{};
    params.InImpulseStr = (float)InImpulseStr;
    params.InDamage = (float)InDamage;
    params.InHitLocation = (FVector)InHitLocation;
    params.InHitDirection = (FVector)InHitDirection;
    params.InRadius = (float)InRadius;
    ProcessEvent(func, &params);
    InHitLocation = params.InHitLocation;
    InHitDirection = params.InHitDirection;
}
void UObjectStateInfo::ClearInvulnerable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.ClearInvulnerable"));
    struct Params_ClearInvulnerable {
    }; // Size: 0x0
    Params_ClearInvulnerable params{};
    ProcessEvent(func, &params);
}
void UObjectStateInfo::ClearImmuneToEverythingExcept() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.ClearImmuneToEverythingExcept"));
    struct Params_ClearImmuneToEverythingExcept {
    }; // Size: 0x0
    Params_ClearImmuneToEverythingExcept params{};
    ProcessEvent(func, &params);
}
void UObjectStateInfo::ClearCurrentVelocity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.ClearCurrentVelocity"));
    struct Params_ClearCurrentVelocity {
    }; // Size: 0x0
    Params_ClearCurrentVelocity params{};
    ProcessEvent(func, &params);
}
bool UObjectStateInfo::CanHighlight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.CanHighlight"));
    struct Params_CanHighlight {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanHighlight params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UObjectStateInfo::CanBecomeMovable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.CanBecomeMovable"));
    struct Params_CanBecomeMovable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanBecomeMovable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::BreakStaticDestructibleMesh(float InImpulseStr, FVector& InHitLocation, FVector& InHitDirection, UParticleSystem* InDestroyEffects, float InEffectRadius, float InRadius, float AdditionalDestructionForce, float AngularForceMultiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.BreakStaticDestructibleMesh"));
    struct Params_BreakStaticDestructibleMesh {
        float InImpulseStr; // 0x0
        FVector InHitLocation; // 0x4
        FVector InHitDirection; // 0x10
        char pad_1c[0x4];
        UParticleSystem* InDestroyEffects; // 0x20
        float InEffectRadius; // 0x28
        float InRadius; // 0x2c
        float AdditionalDestructionForce; // 0x30
        float AngularForceMultiplier; // 0x34
    }; // Size: 0x38
    Params_BreakStaticDestructibleMesh params{};
    params.InImpulseStr = (float)InImpulseStr;
    params.InHitLocation = (FVector)InHitLocation;
    params.InHitDirection = (FVector)InHitDirection;
    params.InDestroyEffects = (UParticleSystem*)InDestroyEffects;
    params.InEffectRadius = (float)InEffectRadius;
    params.InRadius = (float)InRadius;
    params.AdditionalDestructionForce = (float)AdditionalDestructionForce;
    params.AngularForceMultiplier = (float)AngularForceMultiplier;
    ProcessEvent(func, &params);
    InHitLocation = params.InHitLocation;
    InHitDirection = params.InHitDirection;
}
bool UObjectStateInfo::AdjustHealth(float change, bool bIndicateHUD) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.AdjustHealth"));
    struct Params_AdjustHealth {
        float change; // 0x0
        bool bIndicateHUD; // 0x4
        bool ReturnValue; // 0x5
    }; // Size: 0x6
    Params_AdjustHealth params{};
    params.change = (float)change;
    params.bIndicateHUD = (bool)bIndicateHUD;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateInfo::AddImmunity(FGameplayTagContainer& InImpactTagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.AddImmunity"));
    struct Params_AddImmunity {
        FGameplayTagContainer InImpactTagContainer; // 0x0
    }; // Size: 0x20
    Params_AddImmunity params{};
    params.InImpactTagContainer = (FGameplayTagContainer)InImpactTagContainer;
    ProcessEvent(func, &params);
    InImpactTagContainer = params.InImpactTagContainer;
}
void UObjectStateInfo::AddCooldownPickupTarget(FVector& InTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.AddCooldownPickupTarget"));
    struct Params_AddCooldownPickupTarget {
        FVector InTarget; // 0x0
    }; // Size: 0xc
    Params_AddCooldownPickupTarget params{};
    params.InTarget = (FVector)InTarget;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InTarget = params.InTarget;
}
void UObjectStateInfo::ActorHitShake(float Damage, FVector& ImpactLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.ActorHitShake"));
    struct Params_ActorHitShake {
        float Damage; // 0x0
        FVector ImpactLocation; // 0x4
    }; // Size: 0x10
    Params_ActorHitShake params{};
    params.Damage = (float)Damage;
    params.ImpactLocation = (FVector)ImpactLocation;
    ProcessEvent(func, &params);
    ImpactLocation = params.ImpactLocation;
}
void UObjectStateInfo::Activate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInfo.Activate"));
    struct Params_Activate {
    }; // Size: 0x0
    Params_Activate params{};
    ProcessEvent(func, &params);
}
