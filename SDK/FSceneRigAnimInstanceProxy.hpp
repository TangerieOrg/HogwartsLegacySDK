#pragma once
#include <cstdint>
#include "FAnimInstanceProxy_RetrieveActorTransform.hpp"
#pragma pack(push, 1)
struct FSceneRigAnimInstanceProxy : public FAnimInstanceProxy_RetrieveActorTransform {
    char pad_770[0x2e0];
}; // Size: 0xa50
#pragma pack(pop)
