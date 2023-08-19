#pragma once
#include <cstdint>
#include "FVector.hpp"
class UNetConnection;
class AActor;
#pragma pack(push, 1)
struct FNetViewer {
    UNetConnection* Connection; // 0x0
    AActor* InViewer; // 0x8
    AActor* ViewTarget; // 0x10
    FVector ViewLocation; // 0x18
    FVector ViewDir; // 0x24
}; // Size: 0x30
#pragma pack(pop)
