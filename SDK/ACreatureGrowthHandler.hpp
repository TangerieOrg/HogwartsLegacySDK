#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class ACreatureGrowthHandler : public AActor {
public:
    AActor* TargetCreatureActor; // 0x248
    AActor* NewCreatureActor; // 0x250
    FName NewCreatureTypeID; // 0x258
    float NewCreatureScaleVariation; // 0x260
    char pad_264[0x1c];
    static ACreatureGrowthHandler* StaticClass();
    void TickFX(float DeltaSeconds);
    void StartFX();
    void ShowNewCreature();
    void OnNewCreatureReady();
    bool IsNewCreatureReady();
    void Finish();
}; // Size: 0x280
#pragma pack(pop)
