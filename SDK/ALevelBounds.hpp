#pragma once
#include <cstdint>
#include "AActor.hpp"
class UBoxComponent;
#pragma pack(push, 1)
class ALevelBounds : public AActor {
public:
    UBoxComponent* BoxComponent; // 0x248
    bool bAutoUpdateBounds; // 0x250
    char pad_251[0x7];
    static ALevelBounds* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
