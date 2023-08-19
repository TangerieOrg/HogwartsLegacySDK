#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class ACrumblePiecesManager : public AActor {
public:
    static ACrumblePiecesManager* StaticClass();
    void TryToRepairAll(AActor* TargetActor);
}; // Size: 0x248
#pragma pack(pop)
