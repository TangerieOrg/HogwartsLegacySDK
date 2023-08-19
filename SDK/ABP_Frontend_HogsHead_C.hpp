#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USkeletalMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Frontend_HogsHead_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    USkeletalMeshComponent* SK_HoggHead; // 0x250
    USceneComponent* DefaultSceneRoot; // 0x258
    static ABP_Frontend_HogsHead_C* StaticClass();
    void ReceiveBeginPlay0();
    void ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason);
    void ExecuteUbergraph_BP_Frontend_HogsHead(int32_t EntryPoint, EEndPlayReason::Type K2Node_Event_EndPlayReason, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x260
#pragma pack(pop)
