#pragma once
#include <cstdint>
#include "UMapFXBase.hpp"
class UNiagaraComponent;
#pragma pack(push, 1)
class UMapFXChain : public UMapFXBase {
public:
    char pad_30[0x50];
    static UMapFXChain* StaticClass();
    void OnFinished(UNiagaraComponent* PSystem);
    void FXTimerCallback();
}; // Size: 0x80
#pragma pack(pop)
