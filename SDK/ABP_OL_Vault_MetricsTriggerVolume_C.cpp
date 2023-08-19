#include "AActor.hpp"
#include "ABP_OL_Vault_C.hpp"
#include "ABP_OL_Vault_MetricsTriggerVolume_C.hpp"
#include "ABiped_Player.hpp"
#include "ACharacter.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBoxComponent.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
ABP_OL_Vault_MetricsTriggerVolume_C* ABP_OL_Vault_MetricsTriggerVolume_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Vaults/Blueprints/BP_OL_Vault_MetricsTriggerVolume.BP_OL_Vault_MetricsTriggerVolume_C");
    return (ABP_OL_Vault_MetricsTriggerVolume_C*)res;
}
void ABP_OL_Vault_MetricsTriggerVolume_C::BndEvt__BP_OL_Vault_MetricsTriggerVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Vaults/Blueprints/BP_OL_Vault_MetricsTriggerVolume.BP_OL_Vault_MetricsTriggerVolume_C.BndEvt__BP_OL_Vault_MetricsTriggerVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__BP_OL_Vault_MetricsTriggerVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__BP_OL_Vault_MetricsTriggerVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_OL_Vault_MetricsTriggerVolume_C::ExecuteUbergraph_BP_OL_Vault_MetricsTriggerVolume(int32_t EntryPoint, AActor* CallFunc_GetParentActor_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, ABP_OL_Vault_C* K2Node_DynamicCast_AsBP_OL_Vault, bool K2Node_DynamicCast_bSuccess, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, FHitResult K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Vaults/Blueprints/BP_OL_Vault_MetricsTriggerVolume.BP_OL_Vault_MetricsTriggerVolume_C.ExecuteUbergraph_BP_OL_Vault_MetricsTriggerVolume"));
    struct Params_ExecuteUbergraph_BP_OL_Vault_MetricsTriggerVolume {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* CallFunc_GetParentActor_ReturnValue; // 0x8
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x10
        ABP_OL_Vault_C* K2Node_DynamicCast_AsBP_OL_Vault; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x7];
        ACharacter* CallFunc_GetPlayerCharacter_ReturnValue; // 0x28
        UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent; // 0x30
        AActor* K2Node_ComponentBoundEvent_OtherActor; // 0x38
        UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp; // 0x40
        int32_t K2Node_ComponentBoundEvent_OtherBodyIndex; // 0x48
        bool K2Node_ComponentBoundEvent_bFromSweep; // 0x4c
        char pad_4d[0x3];
        FHitResult K2Node_ComponentBoundEvent_SweepResult; // 0x50
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0xd8
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1; // 0xd9
        bool CallFunc_BooleanAND_ReturnValue; // 0xda
        bool CallFunc_BooleanOR_ReturnValue; // 0xdb
    }; // Size: 0xdc
    Params_ExecuteUbergraph_BP_OL_Vault_MetricsTriggerVolume params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetParentActor_ReturnValue = (AActor*)CallFunc_GetParentActor_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.K2Node_DynamicCast_AsBP_OL_Vault = (ABP_OL_Vault_C*)K2Node_DynamicCast_AsBP_OL_Vault;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetPlayerCharacter_ReturnValue = (ACharacter*)CallFunc_GetPlayerCharacter_ReturnValue;
    params.K2Node_ComponentBoundEvent_OverlappedComponent = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_OverlappedComponent;
    params.K2Node_ComponentBoundEvent_OtherActor = (AActor*)K2Node_ComponentBoundEvent_OtherActor;
    params.K2Node_ComponentBoundEvent_OtherComp = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_OtherComp;
    params.K2Node_ComponentBoundEvent_OtherBodyIndex = (int32_t)K2Node_ComponentBoundEvent_OtherBodyIndex;
    params.K2Node_ComponentBoundEvent_bFromSweep = (bool)K2Node_ComponentBoundEvent_bFromSweep;
    params.K2Node_ComponentBoundEvent_SweepResult = (FHitResult)K2Node_ComponentBoundEvent_SweepResult;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
}
