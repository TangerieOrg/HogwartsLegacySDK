#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceCurlNoise.hpp"
UNiagaraDataInterfaceCurlNoise* UNiagaraDataInterfaceCurlNoise::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceCurlNoise");
    return (UNiagaraDataInterfaceCurlNoise*)res;
}
