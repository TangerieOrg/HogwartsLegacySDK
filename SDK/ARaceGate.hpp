#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FVector.hpp"
class ARace;
#pragma pack(push, 1)
class ARaceGate : public AActor {
public:
    ARace* OwningRace; // 0x248
    char pad_250[0x8];
    static ARaceGate* StaticClass();
    void OnRaceFinished(bool bNewBestTime);
    void OnMissGate(bool& bSuccess);
    void OnHitGate(bool& bSuccess);
    void OnGateDeactivated();
    void OnGateActivated();
    bool IsGateActive();
    FVector GetSplineTrackOffset();
}; // Size: 0x258
#pragma pack(pop)
