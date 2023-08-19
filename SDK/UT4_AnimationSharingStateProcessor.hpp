#pragma once
#include <cstdint>
#include "EFacialAnimType.hpp"
#include "UAnimationSharingStateProcessor.hpp"
class AActor;
#pragma pack(push, 1)
class UT4_AnimationSharingStateProcessor : public UAnimationSharingStateProcessor {
public:
    char pad_50[0x10];
    static UT4_AnimationSharingStateProcessor* StaticClass();
    void UpdateT4State(int32_t& OutState, AActor* InActor, uint8_t CurrentState, uint8_t OnDemandState, bool& bShouldProcess);
    void ProcessActorState_Implementation(int32_t& OutState, AActor* InActor, uint8_t CurrentState, uint8_t OnDemandState, bool& bShouldProcess);
    void GetUsesEyeMouthAnims(uint8_t InCurrentState, bool& bOutUsesEyeAnims, bool& bOutUsesMouthAnims);
    EFacialAnimType GetFacialAnimType(uint8_t InCurrentState);
}; // Size: 0x60
#pragma pack(pop)
