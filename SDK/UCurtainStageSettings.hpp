#pragma once
#include <cstdint>
#include "FCurtainStageEntry.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UCurtainStageSettings : public UObject {
public:
    TArray<FCurtainStageEntry> CurtainStages; // 0x28
    static UCurtainStageSettings* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
