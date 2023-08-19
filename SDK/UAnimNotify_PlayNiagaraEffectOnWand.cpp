#include "UAnimNotify_PlayNiagaraEffect.hpp"
#include "UAnimNotify_PlayNiagaraEffectOnWand.hpp"
UAnimNotify_PlayNiagaraEffectOnWand* UAnimNotify_PlayNiagaraEffectOnWand::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimNotify_PlayNiagaraEffectOnWand");
    return (UAnimNotify_PlayNiagaraEffectOnWand*)res;
}
