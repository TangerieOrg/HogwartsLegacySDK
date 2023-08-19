#include "AActor.hpp"
#include "UGroomAsset.hpp"
#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceHairStrands.hpp"
UNiagaraDataInterfaceHairStrands* UNiagaraDataInterfaceHairStrands::StaticClass() {
    static auto res = find_uobject("Class /Script/HairStrandsCore.NiagaraDataInterfaceHairStrands");
    return (UNiagaraDataInterfaceHairStrands*)res;
}
