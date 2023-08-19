#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "FSoftObjectPath.hpp"
#pragma pack(push, 1)
struct FSocketPreview {
    FGameplayTag SocketDescriptorTag; // 0x0
    FSoftObjectPath PreviewActor; // 0x8
}; // Size: 0x20
#pragma pack(pop)
