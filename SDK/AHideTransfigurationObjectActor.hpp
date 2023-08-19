#pragma once
#include <cstdint>
#include "AActor.hpp"
class UBoxComponent;
#pragma pack(push, 1)
class AHideTransfigurationObjectActor : public AActor {
public:
    UBoxComponent* BoxComponent; // 0x248
    char pad_250[0x20];
    static AHideTransfigurationObjectActor* StaticClass();
    void OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor);
}; // Size: 0x270
#pragma pack(pop)
