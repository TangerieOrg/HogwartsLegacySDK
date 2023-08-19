#include "UAblAbilityTaskScratchPad.hpp"
#include "UablNiagaraPlayEffectTaskScratchPad.hpp"
UablNiagaraPlayEffectTaskScratchPad* UablNiagaraPlayEffectTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablNiagaraPlayEffectTaskScratchPad");
    return (UablNiagaraPlayEffectTaskScratchPad*)res;
}
