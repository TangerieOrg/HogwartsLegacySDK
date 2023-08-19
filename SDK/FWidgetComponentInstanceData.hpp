#pragma once
#include <cstdint>
#include "FSceneComponentInstanceData.hpp"
#pragma pack(push, 1)
struct FWidgetComponentInstanceData : public FSceneComponentInstanceData {
    char pad_b8[0x10];
}; // Size: 0xc8
#pragma pack(pop)
