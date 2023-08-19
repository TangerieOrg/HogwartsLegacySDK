#pragma once
#include <cstdint>
#include "FActorComponentInstanceData.hpp"
#pragma pack(push, 1)
struct FSceneComponentInstanceData : public FActorComponentInstanceData {
    char pad_68[0x50];
}; // Size: 0xb8
#pragma pack(pop)
