#pragma once
#include <cstdint>
#include "UBaseArchitectComponent.hpp"
#pragma pack(push, 1)
class UStationArchitectComponent : public UBaseArchitectComponent {
public:
    TArray<void*> HardSceneRigAssets; // 0x1a0
    static UStationArchitectComponent* StaticClass();
}; // Size: 0x1b0
#pragma pack(pop)
