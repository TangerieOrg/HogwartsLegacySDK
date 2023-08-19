#include "AActor.hpp"
#include "ABP_AccioRing_C.hpp"
#include "ASpellTool.hpp"
#include "EEndPlayReason\Type.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UObjectStateComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "USpellToolRecord.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTimelineComponent.hpp"
void ABP_AccioRing_C::UserConstructionScript0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_AccioRing.BP_AccioRing_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
ABP_AccioRing_C* ABP_AccioRing_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/SupportBP/BP_AccioRing.BP_AccioRing_C");
    return (ABP_AccioRing_C*)res;
}
void ABP_AccioRing_C::OnReset() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_AccioRing.BP_AccioRing_C.OnReset"));
    struct Params_OnReset {
    }; // Size: 0x0
    Params_OnReset params{};
    ProcessEvent(func, &params);
}
void ABP_AccioRing_C::Turn_Off_Auto_Targeting() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_AccioRing.BP_AccioRing_C.Turn Off Auto Targeting"));
    struct Params_Turn_Off_Auto_Targeting {
    }; // Size: 0x0
    Params_Turn_Off_Auto_Targeting params{};
    ProcessEvent(func, &params);
}
void ABP_AccioRing_C::Release() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_AccioRing.BP_AccioRing_C.Release"));
    struct Params_Release {
    }; // Size: 0x0
    Params_Release params{};
    ProcessEvent(func, &params);
}
FName ABP_AccioRing_C::GetMainBone() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_AccioRing.BP_AccioRing_C.GetMainBone"));
    struct Params_GetMainBone {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMainBone params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void ABP_AccioRing_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_AccioRing.BP_AccioRing_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
UPrimitiveComponent* ABP_AccioRing_C::GetMainPrimitive() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_AccioRing.BP_AccioRing_C.GetMainPrimitive"));
    struct Params_GetMainPrimitive {
        UPrimitiveComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMainPrimitive params{};
    ProcessEvent(func, &params);
    return (UPrimitiveComponent*)params.ReturnValue;
}
void ABP_AccioRing_C::Timeline_0__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_AccioRing.BP_AccioRing_C.Timeline_0__UpdateFunc"));
    struct Params_Timeline_0__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_0__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_AccioRing_C::Timeline_0__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_AccioRing.BP_AccioRing_C.Timeline_0__FinishedFunc"));
    struct Params_Timeline_0__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_0__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_AccioRing_C::OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_AccioRing.BP_AccioRing_C.OnHitBySpell"));
    struct Params_OnHitBySpell {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        USpellToolRecord* SpellToolRecord; // 0x10
        FName SpellType; // 0x18
        FHitResult Hit; // 0x20
        FVector ImpactDirection; // 0xa8
    }; // Size: 0xb4
    Params_OnHitBySpell params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Hit = (FHitResult)Hit;
    params.ImpactDirection = (FVector)ImpactDirection;
    ProcessEvent(func, &params);
    Hit = params.Hit;
    ImpactDirection = params.ImpactDirection;
}
void ABP_AccioRing_C::Timeline_0__Loop__EventFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_AccioRing.BP_AccioRing_C.Timeline_0__Loop__EventFunc"));
    struct Params_Timeline_0__Loop__EventFunc {
    }; // Size: 0x0
    Params_Timeline_0__Loop__EventFunc params{};
    ProcessEvent(func, &params);
}
void ABP_AccioRing_C::SetupSfx(UAkComponent* AkComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_AccioRing.BP_AccioRing_C.SetupSfx"));
    struct Params_SetupSfx {
        UAkComponent* AkComponent; // 0x0
    }; // Size: 0x8
    Params_SetupSfx params{};
    params.AkComponent = (UAkComponent*)AkComponent;
    ProcessEvent(func, &params);
}
void ABP_AccioRing_C::OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_AccioRing.BP_AccioRing_C.OnAffectedBySpell"));
    struct Params_OnAffectedBySpell {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        TArray<UInteractionArchitectAsset*> DataAssets; // 0x10
        USpellToolRecord* SpellToolRecord; // 0x20
        FName SpellType; // 0x28
        FGameplayTagContainer Impact; // 0x30
        FHitResult Hit; // 0x50
        FVector ImpactDirection; // 0xd8
    }; // Size: 0xe4
    Params_OnAffectedBySpell params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.DataAssets = (TArray<UInteractionArchitectAsset*>)DataAssets;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Impact = (FGameplayTagContainer)Impact;
    params.Hit = (FHitResult)Hit;
    params.ImpactDirection = (FVector)ImpactDirection;
    ProcessEvent(func, &params);
    DataAssets = params.DataAssets;
    Hit = params.Hit;
    ImpactDirection = params.ImpactDirection;
}
void ABP_AccioRing_C::OnSpellIneffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_AccioRing.BP_AccioRing_C.OnSpellIneffective"));
    struct Params_OnSpellIneffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellIneffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_AccioRing_C::OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_AccioRing.BP_AccioRing_C.OnAffectedBySpellEnd"));
    struct Params_OnAffectedBySpellEnd {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        USpellToolRecord* SpellToolRecord; // 0x10
        FName SpellType; // 0x18
        FGameplayTagContainer Impact; // 0x20
    }; // Size: 0x40
    Params_OnAffectedBySpellEnd params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Impact = (FGameplayTagContainer)Impact;
    ProcessEvent(func, &params);
}
void ABP_AccioRing_C::OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_AccioRing.BP_AccioRing_C.OnOverlappedBySpell"));
    struct Params_OnOverlappedBySpell {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        USpellToolRecord* SpellToolRecord; // 0x10
        FName SpellType; // 0x18
        FGameplayTagContainer Impact; // 0x20
        FVector MunitionLocation; // 0x40
    }; // Size: 0x4c
    Params_OnOverlappedBySpell params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Impact = (FGameplayTagContainer)Impact;
    params.MunitionLocation = (FVector)MunitionLocation;
    ProcessEvent(func, &params);
    MunitionLocation = params.MunitionLocation;
}
void ABP_AccioRing_C::OnSpellEffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_AccioRing.BP_AccioRing_C.OnSpellEffective"));
    struct Params_OnSpellEffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellEffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_AccioRing_C::OnSpellTooWeak(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_AccioRing.BP_AccioRing_C.OnSpellTooWeak"));
    struct Params_OnSpellTooWeak {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellTooWeak params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_AccioRing_C::Pull() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_AccioRing.BP_AccioRing_C.Pull"));
    struct Params_Pull {
    }; // Size: 0x0
    Params_Pull params{};
    ProcessEvent(func, &params);
}
void ABP_AccioRing_C::ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_AccioRing.BP_AccioRing_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_AccioRing_C::ExecuteUbergraph_BP_AccioRing(int32_t EntryPoint, EEndPlayReason::Type K2Node_Event_EndPlayReason, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, UAkComponent* K2Node_Event_AkComponent, ASpellTool* K2Node_Event_SpellTool_3, AActor* K2Node_Event_Instigator_6, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets, USpellToolRecord* K2Node_Event_SpellToolRecord_3, FName K2Node_Event_SpellType_3, FGameplayTagContainer K2Node_Event_Impact_2, FHitResult K2Node_Event_Hit_1, FVector K2Node_Event_ImpactDirection_1, ASpellTool* K2Node_Event_SpellTool_2, AActor* K2Node_Event_Instigator_5, USpellToolRecord* K2Node_Event_SpellToolRecord_2, FName K2Node_Event_SpellType_2, FGameplayTagContainer K2Node_Event_Impact_1, ASpellTool* K2Node_Event_SpellTool_1, AActor* K2Node_Event_Instigator_4, USpellToolRecord* K2Node_Event_SpellToolRecord_1, FName K2Node_Event_SpellType_1, FHitResult K2Node_Event_Hit, FVector K2Node_Event_ImpactDirection, ASpellTool* K2Node_Event_SpellTool, AActor* K2Node_Event_Instigator_3, USpellToolRecord* K2Node_Event_SpellToolRecord, FName K2Node_Event_SpellType, FGameplayTagContainer K2Node_Event_Impact, FVector K2Node_Event_MunitionLocation, AActor* K2Node_Event_Instigator_2, AActor* K2Node_Event_Instigator_1, AActor* K2Node_Event_Instigator, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool Temp_bool_IsClosed_Variable_1) {}
