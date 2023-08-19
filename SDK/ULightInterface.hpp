#pragma once
#include <cstdint>
#include "UInterface.hpp"
class AActor;
#pragma pack(push, 1)
class ULightInterface : public UInterface {
public:
    static ULightInterface* StaticClass();
    void OnExitedNearby();
    void OnExitedLightProximity(AActor* LumosBP);
    void OnExitedLight(AActor* LumosBP, bool bPlayerOwned);
    void OnEnteredNearby(AActor* LumosBP);
    void OnEnteredLightProximity(AActor* LumosBP);
    void OnEnteredLight(AActor* LumosBP, bool bPlayerOwned);
    bool DisableLightRaytrace();
    bool DisableLightInteraction();
}; // Size: 0x28
#pragma pack(pop)
