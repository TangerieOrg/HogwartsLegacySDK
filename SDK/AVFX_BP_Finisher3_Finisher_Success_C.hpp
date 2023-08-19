#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UNiagaraComponent;
class USceneComponent;
class UDecalComponent;
class UMaterialInstanceDynamic;
class UTimelineComponent;
#pragma pack(push, 1)
class AVFX_BP_Finisher3_Finisher_Success_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UNiagaraComponent* Smoke; // 0x250
    UDecalComponent* Decal; // 0x258
    UNiagaraComponent* Explode; // 0x260
    UNiagaraComponent* LightningStrike; // 0x268
    USceneComponent* DefaultSceneRoot; // 0x270
    float Timeline_2_NewTrack_2_9F76AB2A4CBCD987B2A2089B47893628; // 0x278
    ETimelineDirection::Type Timeline_2__Direction_9F76AB2A4CBCD987B2A2089B47893628; // 0x27c
    char pad_27d[0x3];
    UTimelineComponent* Timeline_2; // 0x280
    float Timeline_1_NewTrack_0_D9E90DE24FD5225626FC1FAD0F04D89B; // 0x288
    ETimelineDirection::Type Timeline_1__Direction_D9E90DE24FD5225626FC1FAD0F04D89B; // 0x28c
    char pad_28d[0x3];
    UTimelineComponent* Timeline_1; // 0x290
    float Timeline_0_NewTrack_0_7C8BE7014617D48FED32278D5BB5CD93; // 0x298
    ETimelineDirection::Type Timeline_0__Direction_7C8BE7014617D48FED32278D5BB5CD93; // 0x29c
    char pad_29d[0x3];
    UTimelineComponent* Timeline_0; // 0x2a0
    UMaterialInstanceDynamic* Decal_Mat; // 0x2a8
    static AVFX_BP_Finisher3_Finisher_Success_C* StaticClass();
    void UserConstructionScript0(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_VFX_BP_Finisher3_Finisher_Success(int32_t EntryPoint);
}; // Size: 0x2b0
#pragma pack(pop)
