#include "AActor.hpp"
#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfacePhysicsAsset.hpp"
#include "UPhysicsAsset.hpp"
UNiagaraDataInterfacePhysicsAsset* UNiagaraDataInterfacePhysicsAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/HairStrandsCore.NiagaraDataInterfacePhysicsAsset");
    return (UNiagaraDataInterfacePhysicsAsset*)res;
}
