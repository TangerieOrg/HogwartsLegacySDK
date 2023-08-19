#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FCustomButtonWidget.hpp"
#pragma pack(push, 1)
class ATileSpawnPointCollector : public AActor {
public:
    FCustomButtonWidget UpdateSpawnLocationsDBButton; // 0x248
    char pad_278[0x2b0];
    static ATileSpawnPointCollector* StaticClass();
}; // Size: 0x528
#pragma pack(pop)
