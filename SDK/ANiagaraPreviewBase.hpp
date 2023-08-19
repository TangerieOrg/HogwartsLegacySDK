#pragma once
#include <cstdint>
#include "AActor.hpp"
class UNiagaraSystem;
#pragma pack(push, 1)
class ANiagaraPreviewBase : public AActor {
public:
    static ANiagaraPreviewBase* StaticClass();
    void SetSystem(UNiagaraSystem* InSystem);
    void SetLabelText();
}; // Size: 0x248
#pragma pack(pop)
