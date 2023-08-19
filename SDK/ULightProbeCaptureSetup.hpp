#pragma once
#include <cstdint>
#include "FLightProbeCaptureSetupComputer.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class ULightProbeCaptureSetup : public UDataAsset {
public:
    FLightProbeCaptureSetupComputer Computer; // 0x30
    static ULightProbeCaptureSetup* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
