#pragma once
#include <cstdint>
#include "EFacialAnimType.hpp"
#include "UT4_AnimationSharingStateProcessor.hpp"
class UEnum;
class AActor;
#pragma pack(push, 1)
class UBP_AnmShrProc_ThreeIdles_C : public UT4_AnimationSharingStateProcessor {
public:
    static UBP_AnmShrProc_ThreeIdles_C* StaticClass();
    EFacialAnimType GetFacialAnimType0(uint8_t InCurrentState, uint8_t CallFunc_GetValidValue_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void GetUsesEyeMouthAnims0(uint8_t InCurrentState, bool& bOutUsesEyeAnims, bool& bOutUsesMouthAnims);
    UEnum* GetAnimationStateEnum();
    void ProcessActorState(int32_t& OutState, AActor* InActor, uint8_t CurrentState, uint8_t OnDemandState, bool& bShouldProcess, int32_t CallFunc_UpdateT4State_OutState, bool CallFunc_UpdateT4State_bShouldProcess);
}; // Size: 0x60
#pragma pack(pop)
