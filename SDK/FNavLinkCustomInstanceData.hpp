#pragma once
#include <cstdint>
#include "FActorComponentInstanceData.hpp"
#pragma pack(push, 1)
struct FNavLinkCustomInstanceData : public FActorComponentInstanceData {
    uint32_t NavLinkUserId; // 0x68
    char pad_6c[0x4];
}; // Size: 0x70
#pragma pack(pop)
