#pragma once
#include <cstdint>
#include "EEndPlayReason\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "USpellImpactComponent.hpp"
class ABP_Shell_Accio_C;
#pragma pack(push, 1)
class UBP_AccioImpact_C : public USpellImpactComponent {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    float AccioForce; // 0xd0
    char pad_d4[0x4];
    TArray<ABP_Shell_Accio_C*> ShellActor; // 0xd8
    static UBP_AccioImpact_C* StaticClass();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void ExecuteUbergraph_BP_AccioImpact(int32_t EntryPoint, int32_t Temp_int_Array_Index_Variable);
}; // Size: 0xe8
#pragma pack(pop)
