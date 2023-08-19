#pragma once
#include <cstdint>
#include "FSceneRigParameterBinding_FString.hpp"
#pragma pack(push, 1)
struct FActionParameter_FString {
    FSceneRigParameterBinding_FString BoundParameter; // 0x0
    FString DefaultValue; // 0x8
}; // Size: 0x18
#pragma pack(pop)
