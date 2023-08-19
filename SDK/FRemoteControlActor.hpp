#pragma once
#include <cstdint>
#include "FRemoteControlEntity.hpp"
#include "FSoftObjectPath.hpp"
#pragma pack(push, 1)
struct FRemoteControlActor : public FRemoteControlEntity {
    FSoftObjectPath Path; // 0x98
}; // Size: 0xb0
#pragma pack(pop)
