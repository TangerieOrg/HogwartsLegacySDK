#pragma once
#include <cstdint>
#include "ACreatureNurturingVolumeBase.hpp"
#pragma pack(push, 1)
class ACreatureNurturingVolume : public ACreatureNurturingVolumeBase {
public:
    FName NurturingSpaceID; // 0x258
    static ACreatureNurturingVolume* StaticClass();
}; // Size: 0x260
#pragma pack(pop)
