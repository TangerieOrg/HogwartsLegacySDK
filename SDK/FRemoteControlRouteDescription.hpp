#pragma once
#include <cstdint>
#include "ERemoteControlHttpVerbs.hpp"
#pragma pack(push, 1)
struct FRemoteControlRouteDescription {
    FString Path; // 0x0
    ERemoteControlHttpVerbs Verb; // 0x10
    char pad_12[0x6];
    FString Description; // 0x18
}; // Size: 0x28
#pragma pack(pop)
