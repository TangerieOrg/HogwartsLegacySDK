#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UBoxComponent;
class USphereComponent;
struct FHitResult;
class USceneComponent;
class UPrimitiveComponent;
class UMapSubSystem;
class ABiped_Player;
class ACharacter;
#pragma pack(push, 1)
class ABP_OL_Vault_AvatarApproaching_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UBoxComponent* AvatarInsideVault; // 0x250
    USphereComponent* AvatarApproachingVault; // 0x258
    USceneComponent* DefaultSceneRoot; // 0x260
    FString Vault; // 0x268
    static ABP_OL_Vault_AvatarApproaching_C* StaticClass();
    void ReceiveBeginPlay0();
    void OnComponentBeginOverlap_Event_0(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void CustomEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void ExecuteUbergraph_BP_OL_Vault_AvatarApproaching(int32_t EntryPoint, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable);
}; // Size: 0x278
#pragma pack(pop)
