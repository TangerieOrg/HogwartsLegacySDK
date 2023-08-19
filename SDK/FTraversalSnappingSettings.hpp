#pragma once
#include <cstdint>
#include "FTraversalModeSnappingSettings.hpp"
#pragma pack(push, 1)
struct FTraversalSnappingSettings {
    FTraversalModeSnappingSettings ModeSnappingSettings[16]; // 0x0
    FTraversalModeSnappingSettings JumpVaultSnappingSettings; // 0xc0
    FTraversalModeSnappingSettings AutoTraversalSnappingSettings; // 0xcc
}; // Size: 0xd8
#pragma pack(pop)
