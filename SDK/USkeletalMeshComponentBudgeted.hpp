#pragma once
#include <cstdint>
#include "USkeletalMeshComponent.hpp"
#pragma pack(push, 1)
class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent {
public:
    char pad_f30[0x20];
    uint8_t bAutoRegisterWithBudgetAllocator : 1; // 0xf50
    uint8_t bAutoCalculateSignificance : 1; // 0xf50
    uint8_t bShouldUseActorRenderedFlag : 1; // 0xf50
    uint8_t pad_bitfield_f50_3 : 5;
    char pad_f51[0xf];
    static USkeletalMeshComponentBudgeted* StaticClass();
    void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);
}; // Size: 0xf60
#pragma pack(pop)
