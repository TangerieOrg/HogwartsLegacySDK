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
class AVFX_BP_Dugbog_Finisher_Fail_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UNiagaraComponent* Smoke; // 0x250
    UDecalComponent* Decal; // 0x258
    UNiagaraComponent* LightningStrike; // 0x260
    USceneComponent* DefaultSceneRoot; // 0x268
    float Timeline_2_NewTrack_0_EA406E564210D92FBE83029A5F1D0A56; // 0x270
    float Timeline_2_NewTrack_2_EA406E564210D92FBE83029A5F1D0A56; // 0x274
    ETimelineDirection::Type Timeline_2__Direction_EA406E564210D92FBE83029A5F1D0A56; // 0x278
    char pad_279[0x7];
    UTimelineComponent* Timeline_2; // 0x280
    float Timeline_1_NewTrack_0_1E7BAF014A2F54385AAB43B592AA8067; // 0x288
    ETimelineDirection::Type Timeline_1__Direction_1E7BAF014A2F54385AAB43B592AA8067; // 0x28c
    char pad_28d[0x3];
    UTimelineComponent* Timeline_1; // 0x290
    float Timeline_0_NewTrack_0_CF93F7DC45C5491E64F94397088CE298; // 0x298
    ETimelineDirection::Type Timeline_0__Direction_CF93F7DC45C5491E64F94397088CE298; // 0x29c
    char pad_29d[0x3];
    UTimelineComponent* Timeline_0; // 0x2a0
    UMaterialInstanceDynamic* Decal_Mat; // 0x2a8
    static AVFX_BP_Dugbog_Finisher_Fail_C* StaticClass();
    void UserConstructionScript0(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_VFX_BP_Dugbog_Finisher_Fail(int32_t EntryPoint);
}; // Size: 0x2b0
#pragma pack(pop)
