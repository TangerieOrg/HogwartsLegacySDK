#pragma once
#include <cstdint>
#include "ESanctuaryIdentity.hpp"
#include "FEphemerisComputer.hpp"
#include "FTimeController.hpp"
#include "UActorComponent.hpp"
class UObject;
#pragma pack(push, 1)
class USanctuaryLightingIdentityMasterComponent : public UActorComponent {
public:
    char pad_c8[0x70];
    ESanctuaryIdentity CurrentIdentity; // 0x138
    ESanctuaryIdentity PreviousIdentity; // 0x139
    char pad_13a[0xe];
    FTimeController TimeController; // 0x148
    FEphemerisComputer EphemerisComputer; // 0x1f8
    char pad_340[0x190];
    static USanctuaryLightingIdentityMasterComponent* StaticClass();
    void SetIdentity(ESanctuaryIdentity InNewIdentity, float InBlendDuration);
    ESanctuaryIdentity GetPreviousIdentity();
    static USanctuaryLightingIdentityMasterComponent* GetLightingIdentityMaster(UObject* WorldContextObject);
    float GetIdentityBlendWeight();
    ESanctuaryIdentity GetCurrentIdentity();
}; // Size: 0x4d0
#pragma pack(pop)
