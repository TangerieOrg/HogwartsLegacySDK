#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDebugTypeEnum : uint8_t {
    ChaosNiagara_DebugType_NoDebug = 0,
    ChaosNiagara_DebugType_ColorBySolver = 1,
    ChaosNiagara_DebugType_ColorByParticleIndex = 2,
    ChaosNiagara_Max = 3,
};
#pragma pack(pop)
