#include "AActor.hpp"
#include "ABP_Breakable_Persistent_C.hpp"
#include "ABP_HM_Neep_Wood_Fence_G_C.hpp"
#include "FGameplayTagContainer.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UGeometryCollectionComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "URepairComponent.hpp"
void ABP_HM_Neep_Wood_Fence_G_C::OnFailedToBeDamaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/Interactables/BP_HM_Neep_Wood_Fence_G.BP_HM_Neep_Wood_Fence_G_C.OnFailedToBeDamaged"));
    struct Params_OnFailedToBeDamaged {
        float DamageAmount; // 0x0
        FVector HitLocation; // 0x4
        FVector HitDirection; // 0x10
        char pad_1c[0x4];
        UPrimitiveComponent* PrimComp; // 0x20
        FGameplayTagContainer MunitionTagContainer; // 0x28
        AActor* Instigator; // 0x48
        FVector Velocity; // 0x50
    }; // Size: 0x5c
    Params_OnFailedToBeDamaged params{};
    params.DamageAmount = (float)DamageAmount;
    params.HitLocation = (FVector)HitLocation;
    params.HitDirection = (FVector)HitDirection;
    params.PrimComp = (UPrimitiveComponent*)PrimComp;
    params.MunitionTagContainer = (FGameplayTagContainer)MunitionTagContainer;
    params.Instigator = (AActor*)Instigator;
    params.Velocity = (FVector)Velocity;
    ProcessEvent(func, &params);
}
ABP_HM_Neep_Wood_Fence_G_C* ABP_HM_Neep_Wood_Fence_G_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogsmeade/Blueprints/Interactables/BP_HM_Neep_Wood_Fence_G.BP_HM_Neep_Wood_Fence_G_C");
    return (ABP_HM_Neep_Wood_Fence_G_C*)res;
}
void ABP_HM_Neep_Wood_Fence_G_C::OnAttemptToHeal() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/Interactables/BP_HM_Neep_Wood_Fence_G.BP_HM_Neep_Wood_Fence_G_C.OnAttemptToHeal"));
    struct Params_OnAttemptToHeal {
    }; // Size: 0x0
    Params_OnAttemptToHeal params{};
    ProcessEvent(func, &params);
}
bool ABP_HM_Neep_Wood_Fence_G_C::Damaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/Interactables/BP_HM_Neep_Wood_Fence_G.BP_HM_Neep_Wood_Fence_G_C.Damaged"));
    struct Params_Damaged {
        float DamageAmount; // 0x0
        FVector HitLocation; // 0x4
        FVector HitDirection; // 0x10
        char pad_1c[0x4];
        UPrimitiveComponent* PrimComp; // 0x20
        FGameplayTagContainer MunitionTagContainer; // 0x28
        AActor* Instigator; // 0x48
        FVector Velocity; // 0x50
        bool ReturnValue; // 0x5c
    }; // Size: 0x5d
    Params_Damaged params{};
    params.DamageAmount = (float)DamageAmount;
    params.HitLocation = (FVector)HitLocation;
    params.HitDirection = (FVector)HitDirection;
    params.PrimComp = (UPrimitiveComponent*)PrimComp;
    params.MunitionTagContainer = (FGameplayTagContainer)MunitionTagContainer;
    params.Instigator = (AActor*)Instigator;
    params.Velocity = (FVector)Velocity;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_HM_Neep_Wood_Fence_G_C::OnFailedToBeDestroyed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/Interactables/BP_HM_Neep_Wood_Fence_G.BP_HM_Neep_Wood_Fence_G_C.OnFailedToBeDestroyed"));
    struct Params_OnFailedToBeDestroyed {
    }; // Size: 0x0
    Params_OnFailedToBeDestroyed params{};
    ProcessEvent(func, &params);
}
bool ABP_HM_Neep_Wood_Fence_G_C::Destroyed(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/Interactables/BP_HM_Neep_Wood_Fence_G.BP_HM_Neep_Wood_Fence_G_C.Destroyed"));
    struct Params_Destroyed {
        float DamageAmount; // 0x0
        char pad_4[0x4];
        AActor* Instigator; // 0x8
        FGameplayTagContainer MunitionTagContainer; // 0x10
        FVector Velocity; // 0x30
        bool ReturnValue; // 0x3c
        char pad_3d[0x3];
        FVector CallFunc_K2_GetComponentLocation_ReturnValue; // 0x40
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x4c
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x58
    }; // Size: 0x5c
    Params_Destroyed params{};
    params.DamageAmount = (float)DamageAmount;
    params.Instigator = (AActor*)Instigator;
    params.MunitionTagContainer = (FGameplayTagContainer)MunitionTagContainer;
    params.Velocity = (FVector)Velocity;
    params.CallFunc_K2_GetComponentLocation_ReturnValue = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_HM_Neep_Wood_Fence_G_C::NearDeathKneeling(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/Interactables/BP_HM_Neep_Wood_Fence_G.BP_HM_Neep_Wood_Fence_G_C.NearDeathKneeling"));
    struct Params_NearDeathKneeling {
        float DamageAmount; // 0x0
        char pad_4[0x4];
        AActor* Instigator; // 0x8
        FGameplayTagContainer MunitionTagContainer; // 0x10
        FVector Velocity; // 0x30
        bool ReturnValue; // 0x3c
    }; // Size: 0x3d
    Params_NearDeathKneeling params{};
    params.DamageAmount = (float)DamageAmount;
    params.Instigator = (AActor*)Instigator;
    params.MunitionTagContainer = (FGameplayTagContainer)MunitionTagContainer;
    params.Velocity = (FVector)Velocity;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_HM_Neep_Wood_Fence_G_C::OnAttemptToRepair() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/Interactables/BP_HM_Neep_Wood_Fence_G.BP_HM_Neep_Wood_Fence_G_C.OnAttemptToRepair"));
    struct Params_OnAttemptToRepair {
    }; // Size: 0x0
    Params_OnAttemptToRepair params{};
    ProcessEvent(func, &params);
}
void ABP_HM_Neep_Wood_Fence_G_C::OnBeginRepairing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/Interactables/BP_HM_Neep_Wood_Fence_G.BP_HM_Neep_Wood_Fence_G_C.OnBeginRepairing"));
    struct Params_OnBeginRepairing {
    }; // Size: 0x0
    Params_OnBeginRepairing params{};
    ProcessEvent(func, &params);
}
void ABP_HM_Neep_Wood_Fence_G_C::OnCriticalHealthReached() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/Interactables/BP_HM_Neep_Wood_Fence_G.BP_HM_Neep_Wood_Fence_G_C.OnCriticalHealthReached"));
    struct Params_OnCriticalHealthReached {
    }; // Size: 0x0
    Params_OnCriticalHealthReached params{};
    ProcessEvent(func, &params);
}
void ABP_HM_Neep_Wood_Fence_G_C::OnDoneRepairing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/Interactables/BP_HM_Neep_Wood_Fence_G.BP_HM_Neep_Wood_Fence_G_C.OnDoneRepairing"));
    struct Params_OnDoneRepairing {
    }; // Size: 0x0
    Params_OnDoneRepairing params{};
    ProcessEvent(func, &params);
}
void ABP_HM_Neep_Wood_Fence_G_C::OnFailedToBeHealed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/Interactables/BP_HM_Neep_Wood_Fence_G.BP_HM_Neep_Wood_Fence_G_C.OnFailedToBeHealed"));
    struct Params_OnFailedToBeHealed {
    }; // Size: 0x0
    Params_OnFailedToBeHealed params{};
    ProcessEvent(func, &params);
}
void ABP_HM_Neep_Wood_Fence_G_C::OnGeometryCollectionCompletelyBroken(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/Interactables/BP_HM_Neep_Wood_Fence_G.BP_HM_Neep_Wood_Fence_G_C.OnGeometryCollectionCompletelyBroken"));
    struct Params_OnGeometryCollectionCompletelyBroken {
        URepairComponent* RepairComponent; // 0x0
        UGeometryCollectionComponent* GeometryCollectionComponent; // 0x8
        float impulseStr; // 0x10
        float Radius; // 0x14
        FVector HitLocation; // 0x18
        FVector HitDirection; // 0x24
    }; // Size: 0x30
    Params_OnGeometryCollectionCompletelyBroken params{};
    params.RepairComponent = (URepairComponent*)RepairComponent;
    params.GeometryCollectionComponent = (UGeometryCollectionComponent*)GeometryCollectionComponent;
    params.impulseStr = (float)impulseStr;
    params.Radius = (float)Radius;
    params.HitLocation = (FVector)HitLocation;
    params.HitDirection = (FVector)HitDirection;
    ProcessEvent(func, &params);
}
void ABP_HM_Neep_Wood_Fence_G_C::OnGeometryCollectionDamaged(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/Interactables/BP_HM_Neep_Wood_Fence_G.BP_HM_Neep_Wood_Fence_G_C.OnGeometryCollectionDamaged"));
    struct Params_OnGeometryCollectionDamaged {
        URepairComponent* RepairComponent; // 0x0
        UGeometryCollectionComponent* GeometryCollectionComponent; // 0x8
        float impulseStr; // 0x10
        float Radius; // 0x14
        FVector HitLocation; // 0x18
        FVector HitDirection; // 0x24
    }; // Size: 0x30
    Params_OnGeometryCollectionDamaged params{};
    params.RepairComponent = (URepairComponent*)RepairComponent;
    params.GeometryCollectionComponent = (UGeometryCollectionComponent*)GeometryCollectionComponent;
    params.impulseStr = (float)impulseStr;
    params.Radius = (float)Radius;
    params.HitLocation = (FVector)HitLocation;
    params.HitDirection = (FVector)HitDirection;
    ProcessEvent(func, &params);
}
void ABP_HM_Neep_Wood_Fence_G_C::OnGeometryCollectionSpawned(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection, bool bCompletelyBroken) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/Interactables/BP_HM_Neep_Wood_Fence_G.BP_HM_Neep_Wood_Fence_G_C.OnGeometryCollectionSpawned"));
    struct Params_OnGeometryCollectionSpawned {
        URepairComponent* RepairComponent; // 0x0
        UGeometryCollectionComponent* GeometryCollectionComponent; // 0x8
        float impulseStr; // 0x10
        float Radius; // 0x14
        FVector HitLocation; // 0x18
        FVector HitDirection; // 0x24
        bool bCompletelyBroken; // 0x30
    }; // Size: 0x31
    Params_OnGeometryCollectionSpawned params{};
    params.RepairComponent = (URepairComponent*)RepairComponent;
    params.GeometryCollectionComponent = (UGeometryCollectionComponent*)GeometryCollectionComponent;
    params.impulseStr = (float)impulseStr;
    params.Radius = (float)Radius;
    params.HitLocation = (FVector)HitLocation;
    params.HitDirection = (FVector)HitDirection;
    params.bCompletelyBroken = (bool)bCompletelyBroken;
    ProcessEvent(func, &params);
}
void ABP_HM_Neep_Wood_Fence_G_C::OnHealed(float healAmount, UPrimitiveComponent* PrimComp) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/Interactables/BP_HM_Neep_Wood_Fence_G.BP_HM_Neep_Wood_Fence_G_C.OnHealed"));
    struct Params_OnHealed {
        float healAmount; // 0x0
        char pad_4[0x4];
        UPrimitiveComponent* PrimComp; // 0x8
    }; // Size: 0x10
    Params_OnHealed params{};
    params.healAmount = (float)healAmount;
    params.PrimComp = (UPrimitiveComponent*)PrimComp;
    ProcessEvent(func, &params);
}
void ABP_HM_Neep_Wood_Fence_G_C::ExecuteUbergraph_BP_HM_Neep_Wood_Fence_G(int32_t EntryPoint, float K2Node_Event_healAmount, UPrimitiveComponent* K2Node_Event_primComp, float K2Node_Event_damageAmount, FVector K2Node_Event_hitLocation_3, FVector K2Node_Event_hitDirection_3, UPrimitiveComponent* K2Node_Event_primComp_1, FGameplayTagContainer K2Node_Event_MunitionTagContainer, AActor* K2Node_Event_Instigator, FVector K2Node_Event_Velocity, URepairComponent* K2Node_Event_RepairComponent_2, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_2, float K2Node_Event_impulseStr_2, float K2Node_Event_Radius_2, FVector K2Node_Event_hitLocation_2, FVector K2Node_Event_hitDirection_2, URepairComponent* K2Node_Event_RepairComponent_1, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_1, float K2Node_Event_impulseStr_1, float K2Node_Event_Radius_1, FVector K2Node_Event_hitLocation_1, FVector K2Node_Event_hitDirection_1, URepairComponent* K2Node_Event_RepairComponent, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent, float K2Node_Event_impulseStr, float K2Node_Event_Radius, FVector K2Node_Event_hitLocation, FVector K2Node_Event_hitDirection, bool K2Node_Event_bCompletelyBroken) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/Interactables/BP_HM_Neep_Wood_Fence_G.BP_HM_Neep_Wood_Fence_G_C.ExecuteUbergraph_BP_HM_Neep_Wood_Fence_G"));
    struct Params_ExecuteUbergraph_BP_HM_Neep_Wood_Fence_G {
        int32_t EntryPoint; // 0x0
        float K2Node_Event_healAmount; // 0x4
        UPrimitiveComponent* K2Node_Event_primComp; // 0x8
        float K2Node_Event_damageAmount; // 0x10
        FVector K2Node_Event_hitLocation_3; // 0x14
        FVector K2Node_Event_hitDirection_3; // 0x20
        char pad_2c[0x4];
        UPrimitiveComponent* K2Node_Event_primComp_1; // 0x30
        FGameplayTagContainer K2Node_Event_MunitionTagContainer; // 0x38
        AActor* K2Node_Event_Instigator; // 0x58
        FVector K2Node_Event_Velocity; // 0x60
        char pad_6c[0x4];
        URepairComponent* K2Node_Event_RepairComponent_2; // 0x70
        UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_2; // 0x78
        float K2Node_Event_impulseStr_2; // 0x80
        float K2Node_Event_Radius_2; // 0x84
        FVector K2Node_Event_hitLocation_2; // 0x88
        FVector K2Node_Event_hitDirection_2; // 0x94
        URepairComponent* K2Node_Event_RepairComponent_1; // 0xa0
        UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_1; // 0xa8
        float K2Node_Event_impulseStr_1; // 0xb0
        float K2Node_Event_Radius_1; // 0xb4
        FVector K2Node_Event_hitLocation_1; // 0xb8
        FVector K2Node_Event_hitDirection_1; // 0xc4
        URepairComponent* K2Node_Event_RepairComponent; // 0xd0
        UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent; // 0xd8
        float K2Node_Event_impulseStr; // 0xe0
        float K2Node_Event_Radius; // 0xe4
        FVector K2Node_Event_hitLocation; // 0xe8
        FVector K2Node_Event_hitDirection; // 0xf4
        bool K2Node_Event_bCompletelyBroken; // 0x100
    }; // Size: 0x101
    Params_ExecuteUbergraph_BP_HM_Neep_Wood_Fence_G params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_healAmount = (float)K2Node_Event_healAmount;
    params.K2Node_Event_primComp = (UPrimitiveComponent*)K2Node_Event_primComp;
    params.K2Node_Event_damageAmount = (float)K2Node_Event_damageAmount;
    params.K2Node_Event_hitLocation_3 = (FVector)K2Node_Event_hitLocation_3;
    params.K2Node_Event_hitDirection_3 = (FVector)K2Node_Event_hitDirection_3;
    params.K2Node_Event_primComp_1 = (UPrimitiveComponent*)K2Node_Event_primComp_1;
    params.K2Node_Event_MunitionTagContainer = (FGameplayTagContainer)K2Node_Event_MunitionTagContainer;
    params.K2Node_Event_Instigator = (AActor*)K2Node_Event_Instigator;
    params.K2Node_Event_Velocity = (FVector)K2Node_Event_Velocity;
    params.K2Node_Event_RepairComponent_2 = (URepairComponent*)K2Node_Event_RepairComponent_2;
    params.K2Node_Event_GeometryCollectionComponent_2 = (UGeometryCollectionComponent*)K2Node_Event_GeometryCollectionComponent_2;
    params.K2Node_Event_impulseStr_2 = (float)K2Node_Event_impulseStr_2;
    params.K2Node_Event_Radius_2 = (float)K2Node_Event_Radius_2;
    params.K2Node_Event_hitLocation_2 = (FVector)K2Node_Event_hitLocation_2;
    params.K2Node_Event_hitDirection_2 = (FVector)K2Node_Event_hitDirection_2;
    params.K2Node_Event_RepairComponent_1 = (URepairComponent*)K2Node_Event_RepairComponent_1;
    params.K2Node_Event_GeometryCollectionComponent_1 = (UGeometryCollectionComponent*)K2Node_Event_GeometryCollectionComponent_1;
    params.K2Node_Event_impulseStr_1 = (float)K2Node_Event_impulseStr_1;
    params.K2Node_Event_Radius_1 = (float)K2Node_Event_Radius_1;
    params.K2Node_Event_hitLocation_1 = (FVector)K2Node_Event_hitLocation_1;
    params.K2Node_Event_hitDirection_1 = (FVector)K2Node_Event_hitDirection_1;
    params.K2Node_Event_RepairComponent = (URepairComponent*)K2Node_Event_RepairComponent;
    params.K2Node_Event_GeometryCollectionComponent = (UGeometryCollectionComponent*)K2Node_Event_GeometryCollectionComponent;
    params.K2Node_Event_impulseStr = (float)K2Node_Event_impulseStr;
    params.K2Node_Event_Radius = (float)K2Node_Event_Radius;
    params.K2Node_Event_hitLocation = (FVector)K2Node_Event_hitLocation;
    params.K2Node_Event_hitDirection = (FVector)K2Node_Event_hitDirection;
    params.K2Node_Event_bCompletelyBroken = (bool)K2Node_Event_bCompletelyBroken;
    ProcessEvent(func, &params);
}
