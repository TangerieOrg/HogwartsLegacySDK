#pragma once
#include <cstdint>
#include "AActor.hpp"
class UOdcCanvasTextComponent;
class UDebugPanelComponent;
class ULineBatchComponent;
#pragma pack(push, 1)
class AOdcDebugDrawActor : public AActor {
public:
    UOdcCanvasTextComponent* CanvasTextComponent; // 0x248
    ULineBatchComponent* LineBatchComponent; // 0x250
    UDebugPanelComponent* DebugPanel; // 0x258
    char pad_260[0x20];
    static AOdcDebugDrawActor* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
