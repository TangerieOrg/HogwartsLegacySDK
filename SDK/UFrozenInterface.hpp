#pragma once
#include <cstdint>
#include "UInterface.hpp"
class AActor;
#pragma pack(push, 1)
class UFrozenInterface : public UInterface {
public:
    static UFrozenInterface* StaticClass();
    bool StartFreeze(AActor* Instigator, float Amount);
    void OnThaw(AActor* Instigator);
    void OnFailedToFreeze();
    void OnAttemptToFreeze();
}; // Size: 0x28
#pragma pack(pop)
