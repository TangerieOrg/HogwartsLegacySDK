#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UAnimMetaData.hpp"
#pragma pack(push, 1)
class UAnimMetaDataNPCStrafe : public UAnimMetaData {
public:
    FRuntimeFloatCurve BlendInputToHipRotationCurve; // 0x28
    static UAnimMetaDataNPCStrafe* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
