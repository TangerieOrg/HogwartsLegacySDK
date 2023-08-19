#pragma once
#include <cstdint>
#include "AStation.hpp"
class UCognitionStimuliSourceComponent;
#pragma pack(push, 1)
class ATransfigurationObjectStationBase : public AStation {
public:
    UCognitionStimuliSourceComponent* CogSourceComponent; // 0x368
    char pad_370[0x8];
    static ATransfigurationObjectStationBase* StaticClass();
}; // Size: 0x378
#pragma pack(pop)
