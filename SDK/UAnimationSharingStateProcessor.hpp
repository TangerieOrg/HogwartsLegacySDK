#pragma once
#include <cstdint>
#include "UObject.hpp"
class AActor;
class UEnum;
#pragma pack(push, 1)
class UAnimationSharingStateProcessor : public UObject {
public:
    char pad_28[0x28];
    static UAnimationSharingStateProcessor* StaticClass();
    void ProcessActorState(int32_t& OutState, AActor* InActor, uint8_t CurrentState, uint8_t OnDemandState, bool& bShouldProcess);
    UEnum* GetAnimationStateEnum();
}; // Size: 0x50
#pragma pack(pop)
