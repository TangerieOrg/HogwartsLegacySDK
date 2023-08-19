#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UInterface.hpp"
class UIncendioComponent;
#pragma pack(push, 1)
class UFireInterface : public UInterface {
public:
    static UFireInterface* StaticClass();
    bool StartFire(float Amount, FVector Location);
    void OnFireExtinguished();
    void OnFailedToLight();
    void OnCompletelyCharred();
    void OnCaughtFire(UIncendioComponent* IncendioComponent);
    void OnAttemptToSetOnFire(FVector Location);
    bool IsPointOnFire(FVector Point, bool& OnFire);
    bool IncreaseFire(float increaseAmount, FVector Location);
    bool DecreaseFire(float decreaseAmount);
}; // Size: 0x28
#pragma pack(pop)
