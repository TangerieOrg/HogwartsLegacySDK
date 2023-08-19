#pragma once
#include <cstdint>
#include "FDataTableRowHandle.hpp"
#include "UCloudsPresetParams.hpp"
#pragma pack(push, 1)
class UCloudsPresetParamsFromPreset : public UCloudsPresetParams {
public:
    FDataTableRowHandle Preset; // 0x28
    static UCloudsPresetParamsFromPreset* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
