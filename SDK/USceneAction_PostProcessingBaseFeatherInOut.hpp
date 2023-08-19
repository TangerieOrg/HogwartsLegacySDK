#pragma once
#include <cstdint>
#include "USceneAction_PostProcessingBase.hpp"
#pragma pack(push, 1)
class USceneAction_PostProcessingBaseFeatherInOut : public USceneAction_PostProcessingBase {
public:
    float FeatherInTime; // 0x90
    float FeatherOutTime; // 0x94
    static USceneAction_PostProcessingBaseFeatherInOut* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
