#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FObjectFadeParamsSpeedDuration.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USkeletalMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Cloak_Prop_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    USkeletalMeshComponent* SkeletalMesh; // 0x250
    USceneComponent* DefaultSceneRoot; // 0x258
    FObjectFadeParamsSpeedDuration Setup; // 0x260
    char pad_26c[0x4];
    static ABP_Cloak_Prop_C* StaticClass();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_Cloak_Prop(int32_t EntryPoint, bool CallFunc_ActorStartFade_ReturnValue);
}; // Size: 0x270
#pragma pack(pop)
