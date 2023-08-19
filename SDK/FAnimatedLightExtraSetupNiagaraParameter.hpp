#pragma once
#include <cstdint>
#include "FAnimatedLightExtraParameter.hpp"
class UNiagaraComponent;
#pragma pack(push, 1)
struct FAnimatedLightExtraSetupNiagaraParameter : public FAnimatedLightExtraParameter {
    UNiagaraComponent* NiagaraComponent; // 0x10
}; // Size: 0x18
#pragma pack(pop)
