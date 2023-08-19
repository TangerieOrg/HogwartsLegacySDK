#pragma once
#include <cstdint>
#include "FEventDateTime.hpp"
#include "FStatList.hpp"
#include "USceneComponent.hpp"
class USceneRig_Intrusion;
class ANPC_Character;
class AActor;
#pragma pack(push, 1)
class UIntrusionVolumeComponent : public USceneComponent {
public:
    char pad_220[0x8];
    FString ClosingTime; // 0x228
    char pad_238[0x30];
    USceneRig_Intrusion* IntrusionSceneRig; // 0x268
    FStatList Stat; // 0x270
    char pad_278[0x8];
    static UIntrusionVolumeComponent* StaticClass();
    FEventDateTime WhenWillPlayerBeDisallowed();
    FEventDateTime WhenWillPlayerBeAllowed();
    void PlayIntrusionSceneRig(ANPC_Character* InNPC);
    void OnIntrusionPerceptionDone(ANPC_Character* InNPC);
    void OnCaught();
    void OnActorEndOverlap(AActor* SelfActor, AActor* OtherActor);
    void OnActorBeginOverlap(AActor* SelfActor, AActor* OtherActor);
    static bool IsPlayerInIntrusionArea();
    bool IsPlayerAllowed();
    void EnableIntrusion(bool Enable);
}; // Size: 0x280
#pragma pack(pop)
