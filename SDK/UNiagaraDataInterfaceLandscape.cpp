#include "AActor.hpp"
#include "ENDILandscape_SourceMode.hpp"
#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceLandscape.hpp"
#include "UPhysicalMaterial.hpp"
UNiagaraDataInterfaceLandscape* UNiagaraDataInterfaceLandscape::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceLandscape");
    return (UNiagaraDataInterfaceLandscape*)res;
}
