#include "AActor.hpp"
#include "ACharacter.hpp"
#include "AInventoryItemTool.hpp"
#include "AMunitionType_Base.hpp"
#include "ATool.hpp"
#include "EHeadTrackingState\Type.hpp"
#include "ELeftArmState\Type.hpp"
#include "ERightArmState\Type.hpp"
#include "FInventoryResult.hpp"
#include "FItemProperties.hpp"
#include "FName_GameLogicVarBool.hpp"
#include "FSelectableName.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UInventoryItemToolRecord.hpp"
void AInventoryItemTool::UnequipTool() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.UnequipTool"));
    struct Params_UnequipTool {
    }; // Size: 0x0
    Params_UnequipTool params{};
    ProcessEvent(func, &params);
}
AInventoryItemTool* AInventoryItemTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InventoryItemTool");
    return (AInventoryItemTool*)res;
}
void AInventoryItemTool::SetSpeedBasedOnDistance(AMunitionType_Base* Munition, float Time, float MinSpeed, float MaxSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.SetSpeedBasedOnDistance"));
    struct Params_SetSpeedBasedOnDistance {
        AMunitionType_Base* Munition; // 0x0
        float Time; // 0x8
        float MinSpeed; // 0xc
        float MaxSpeed; // 0x10
    }; // Size: 0x14
    Params_SetSpeedBasedOnDistance params{};
    params.Munition = (AMunitionType_Base*)Munition;
    params.Time = (float)Time;
    params.MinSpeed = (float)MinSpeed;
    params.MaxSpeed = (float)MaxSpeed;
    ProcessEvent(func, &params);
}
void AInventoryItemTool::OnItemConsumed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.OnItemConsumed"));
    struct Params_OnItemConsumed {
    }; // Size: 0x0
    Params_OnItemConsumed params{};
    ProcessEvent(func, &params);
}
void AInventoryItemTool::UseItem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.UseItem"));
    struct Params_UseItem {
    }; // Size: 0x0
    Params_UseItem params{};
    ProcessEvent(func, &params);
}
AMunitionType_Base* AInventoryItemTool::SpawnMunition(UClass* MunitionClass, FVector SourceLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.SpawnMunition"));
    struct Params_SpawnMunition {
        UClass* MunitionClass; // 0x0
        FVector SourceLocation; // 0x8
        char pad_14[0x4];
        AMunitionType_Base* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_SpawnMunition params{};
    params.MunitionClass = (UClass*)MunitionClass;
    params.SourceLocation = (FVector)SourceLocation;
    ProcessEvent(func, &params);
    return (AMunitionType_Base*)params.ReturnValue;
}
void AInventoryItemTool::TimeOutTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.TimeOutTimerExpired"));
    struct Params_TimeOutTimerExpired {
    }; // Size: 0x0
    Params_TimeOutTimerExpired params{};
    ProcessEvent(func, &params);
}
void AInventoryItemTool::StartUnequipTimer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.StartUnequipTimer"));
    struct Params_StartUnequipTimer {
    }; // Size: 0x0
    Params_StartUnequipTimer params{};
    ProcessEvent(func, &params);
}
void AInventoryItemTool::SpawnInventoryObject(bool bFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.SpawnInventoryObject"));
    struct Params_SpawnInventoryObject {
        bool bFlag; // 0x0
    }; // Size: 0x1
    Params_SpawnInventoryObject params{};
    params.bFlag = (bool)bFlag;
    ProcessEvent(func, &params);
}
void AInventoryItemTool::OnHidden(bool bFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.OnHidden"));
    struct Params_OnHidden {
        bool bFlag; // 0x0
    }; // Size: 0x1
    Params_OnHidden params{};
    params.bFlag = (bool)bFlag;
    ProcessEvent(func, &params);
}
void AInventoryItemTool::OnDeactivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.OnDeactivate"));
    struct Params_OnDeactivate {
    }; // Size: 0x0
    Params_OnDeactivate params{};
    ProcessEvent(func, &params);
}
void AInventoryItemTool::OnCustomAnimation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.OnCustomAnimation"));
    struct Params_OnCustomAnimation {
    }; // Size: 0x0
    Params_OnCustomAnimation params{};
    ProcessEvent(func, &params);
}
void AInventoryItemTool::OnActivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.OnActivate"));
    struct Params_OnActivate {
    }; // Size: 0x0
    Params_OnActivate params{};
    ProcessEvent(func, &params);
}
bool AInventoryItemTool::ItemHasCustomAnimation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.ItemHasCustomAnimation"));
    struct Params_ItemHasCustomAnimation {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ItemHasCustomAnimation params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AInventoryItemTool::ItemEvent(FName EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.ItemEvent"));
    struct Params_ItemEvent {
        FName EventName; // 0x0
    }; // Size: 0x8
    Params_ItemEvent params{};
    params.EventName = (FName)EventName;
    ProcessEvent(func, &params);
}
ELeftArmState::Type AInventoryItemTool::GetLeftArmState(FName Mechanic) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.GetLeftArmState"));
    struct Params_GetLeftArmState {
        FName Mechanic; // 0x0
        ELeftArmState::Type ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetLeftArmState params{};
    params.Mechanic = (FName)Mechanic;
    ProcessEvent(func, &params);
    return (ELeftArmState::Type)params.ReturnValue;
}
UInventoryItemToolRecord* AInventoryItemTool::GetInventoryItemToolRecord() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.GetInventoryItemToolRecord"));
    struct Params_GetInventoryItemToolRecord {
        UInventoryItemToolRecord* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetInventoryItemToolRecord params{};
    ProcessEvent(func, &params);
    return (UInventoryItemToolRecord*)params.ReturnValue;
}
ACharacter* AInventoryItemTool::GetCharacter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.GetCharacter"));
    struct Params_GetCharacter {
        ACharacter* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCharacter params{};
    ProcessEvent(func, &params);
    return (ACharacter*)params.ReturnValue;
}
FVector AInventoryItemTool::ComputeVelocityToTarget(AActor* ProjectileActor, float Time, float MinSpeed, float MaxSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.ComputeVelocityToTarget"));
    struct Params_ComputeVelocityToTarget {
        AActor* ProjectileActor; // 0x0
        float Time; // 0x8
        float MinSpeed; // 0xc
        float MaxSpeed; // 0x10
        FVector ReturnValue; // 0x14
    }; // Size: 0x20
    Params_ComputeVelocityToTarget params{};
    params.ProjectileActor = (AActor*)ProjectileActor;
    params.Time = (float)Time;
    params.MinSpeed = (float)MinSpeed;
    params.MaxSpeed = (float)MaxSpeed;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void AInventoryItemTool::FullBodyItemUsageCompleted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.FullBodyItemUsageCompleted"));
    struct Params_FullBodyItemUsageCompleted {
    }; // Size: 0x0
    Params_FullBodyItemUsageCompleted params{};
    ProcessEvent(func, &params);
}
void AInventoryItemTool::EndItemUsage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.EndItemUsage"));
    struct Params_EndItemUsage {
    }; // Size: 0x0
    Params_EndItemUsage params{};
    ProcessEvent(func, &params);
}
void AInventoryItemTool::CancelUnequipTimer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.CancelUnequipTimer"));
    struct Params_CancelUnequipTimer {
    }; // Size: 0x0
    Params_CancelUnequipTimer params{};
    ProcessEvent(func, &params);
}
void AInventoryItemTool::EndItemSelection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.EndItemSelection"));
    struct Params_EndItemSelection {
    }; // Size: 0x0
    Params_EndItemSelection params{};
    ProcessEvent(func, &params);
}
bool AInventoryItemTool::ConsumeItem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.ConsumeItem"));
    struct Params_ConsumeItem {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ConsumeItem params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AInventoryItemTool::BeginItemUsage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemTool.BeginItemUsage"));
    struct Params_BeginItemUsage {
    }; // Size: 0x0
    Params_BeginItemUsage params{};
    ProcessEvent(func, &params);
}
