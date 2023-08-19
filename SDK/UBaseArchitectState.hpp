#pragma once
#include <cstdint>
#include "FBaseArchitectTransition.hpp"
#include "UDataAsset.hpp"
class UBaseArchitectAsset;
#pragma pack(push, 1)
class UBaseArchitectState : public UDataAsset {
public:
    UBaseArchitectAsset* StateAsset; // 0x30
    TArray<FBaseArchitectTransition> TransitionsTo; // 0x38
    static UBaseArchitectState* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
