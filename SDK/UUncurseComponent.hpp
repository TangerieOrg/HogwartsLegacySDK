#pragma once
#include <cstdint>
#include "UStateEffectComponent.hpp"
class AActor;
#pragma pack(push, 1)
class UUncurseComponent : public UStateEffectComponent {
public:
    static UUncurseComponent* StaticClass();
    void AddToInstanceList(AActor* InInstigator, int32_t InMaxInstancesPerInstigator);
}; // Size: 0x190
#pragma pack(pop)
