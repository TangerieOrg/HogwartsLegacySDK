#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UInterface.hpp"
class AActor;
#pragma pack(push, 1)
class UWetInterface : public UInterface {
public:
    static UWetInterface* StaticClass();
    bool StartWetness(AActor* Instigator, float Amount, FVector Location);
    void OnFailedToWet();
    void OnDry(AActor* Instigator);
    void OnDecreaseWetness(float decreaseAmount);
    void OnAttemptToApplyWetness(float Amount, FVector Location);
    bool IncreaseWetness(AActor* Instigator, float increaseAmount, FVector Location);
}; // Size: 0x28
#pragma pack(pop)
