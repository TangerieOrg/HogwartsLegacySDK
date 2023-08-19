#include "FBasicParticleData.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UNiagaraParticleCallbackHandler.hpp"
#include "UNiagaraSystem.hpp"
UNiagaraParticleCallbackHandler* UNiagaraParticleCallbackHandler::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraParticleCallbackHandler");
    return (UNiagaraParticleCallbackHandler*)res;
}
void UNiagaraParticleCallbackHandler::ReceiveParticleData(TArray<FBasicParticleData>& Data, UNiagaraSystem* NiagaraSystem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData"));
    struct Params_ReceiveParticleData {
        TArray<FBasicParticleData> Data; // 0x0
        UNiagaraSystem* NiagaraSystem; // 0x10
    }; // Size: 0x18
    Params_ReceiveParticleData params{};
    params.Data = (TArray<FBasicParticleData>)Data;
    params.NiagaraSystem = (UNiagaraSystem*)NiagaraSystem;
    ProcessEvent(func, &params);
    Data = params.Data;
}
