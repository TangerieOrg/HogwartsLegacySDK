#include "AActor.hpp"
#include "ABP_OL_Vault_AvatarApproaching_C.hpp"
#include "ABiped_Player.hpp"
#include "ACharacter.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBoxComponent.hpp"
#include "UFunction.hpp"
#include "UMapSubSystem.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "USphereComponent.hpp"
void ABP_OL_Vault_AvatarApproaching_C::OnComponentBeginOverlap_Event_0(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Vaults/Blueprints/BP_OL_Vault_AvatarApproaching.BP_OL_Vault_AvatarApproaching_C.OnComponentBeginOverlap_Event_0"));
    struct Params_OnComponentBeginOverlap_Event_0 {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnComponentBeginOverlap_Event_0 params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
ABP_OL_Vault_AvatarApproaching_C* ABP_OL_Vault_AvatarApproaching_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Vaults/Blueprints/BP_OL_Vault_AvatarApproaching.BP_OL_Vault_AvatarApproaching_C");
    return (ABP_OL_Vault_AvatarApproaching_C*)res;
}
void ABP_OL_Vault_AvatarApproaching_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Vaults/Blueprints/BP_OL_Vault_AvatarApproaching.BP_OL_Vault_AvatarApproaching_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_OL_Vault_AvatarApproaching_C::CustomEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Vaults/Blueprints/BP_OL_Vault_AvatarApproaching.BP_OL_Vault_AvatarApproaching_C.CustomEvent"));
    struct Params_CustomEvent {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_CustomEvent params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_OL_Vault_AvatarApproaching_C::ExecuteUbergraph_BP_OL_Vault_AvatarApproaching(int32_t EntryPoint, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) {}
