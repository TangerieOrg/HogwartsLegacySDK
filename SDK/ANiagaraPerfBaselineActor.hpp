#pragma once
#include <cstdint>
#include "AActor.hpp"
class UNiagaraBaselineController;
class UTextRenderComponent;
#pragma pack(push, 1)
class ANiagaraPerfBaselineActor : public AActor {
public:
    UNiagaraBaselineController* Controller; // 0x248
    UTextRenderComponent* Label; // 0x250
    static ANiagaraPerfBaselineActor* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
