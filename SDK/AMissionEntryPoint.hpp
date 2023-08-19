#pragma once
#include <cstdint>
#include "ATriggerBox.hpp"
#include "FDbSingleColumnInfo.hpp"
class UMissionEntryPointEffectComponent;
class USceneComponent;
class UCognitionStimuliSourceComponent;
#pragma pack(push, 1)
class AMissionEntryPoint : public ATriggerBox {
public:
    char pad_250[0x8];
    FDbSingleColumnInfo m_missionID; // 0x258
    float m_ringRadius; // 0x2e0
    char pad_2e4[0x14];
    UMissionEntryPointEffectComponent* RingEffectComponent; // 0x2f8
    USceneComponent* CalloutLocator; // 0x300
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x308
    FName BeaconableObjectID; // 0x310
    char pad_318[0x60];
    static AMissionEntryPoint* StaticClass();
}; // Size: 0x378
#pragma pack(pop)
