#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMaterialSwapSphereSelectionType : uint8_t {
    UseComponentLocation = 0,
    UseCameraLocation = 1,
    UseManualLocation = 2,
    EMaterialSwapSphereSelectionType_MAX = 3,
};
#pragma pack(pop)
