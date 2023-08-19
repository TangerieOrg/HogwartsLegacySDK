#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_CaveInElement.hpp"
#include "FVector.hpp"
class UAkComponent;
class USceneComponent;
class ABP_spiderweb_C;
class ATriggerVolume;
#pragma pack(push, 1)
class ABP_CaveInEvent_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UAkComponent* Ak_BP_CaveInEvent; // 0x250
    USceneComponent* DefaultSceneRoot; // 0x258
    TArray<FSTR_CaveInElement> EventElements; // 0x260
    bool bUpdateTransforms; // 0x270
    bool bUseWorldTrigger; // 0x271
    bool bUseWebTrigger; // 0x272
    char pad_273[0x5];
    ABP_spiderweb_C* WebTrigger; // 0x278
    ATriggerVolume* WorldTriggerBox; // 0x280
    static ABP_CaveInEvent_C* StaticClass();
    void UserConstructionScript0();
    void SwitchOff(AActor* SwitchActor);
    void ProcessEvent();
    void ReceiveBeginPlay0();
    void WebOnFire(FVector Location);
    void OnActorBeginOverlap_Event_0(AActor* OverlappedActor, AActor* OtherActor);
    void SwitchOn(AActor* SwitchActor);
    void ExecuteUbergraph_BP_CaveInEvent(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x288
#pragma pack(pop)
