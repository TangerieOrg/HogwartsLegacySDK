#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UObject.hpp"
class UUDSActivityManager;
#pragma pack(push, 1)
class UUDSIntentManager : public UObject {
public:
    UUDSActivityManager* UDSActivityManager; // 0x28
    char pad_30[0x90];
    static UUDSIntentManager* StaticClass();
    void HandleUDSFastTravelFinished();
    void HandleOnCurtainsRaised();
    void HandleNavigationPathUpdated(TArray<FVector> NewPath);
    void HandleMissionOnCurtainsRaised();
}; // Size: 0xc0
#pragma pack(pop)
