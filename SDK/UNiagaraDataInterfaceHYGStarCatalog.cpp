#include "FPixelStarRenderingParameters.hpp"
#include "FStarRenderingParameters.hpp"
#include "FStarScalabilityParameters.hpp"
#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceHYGStarCatalog.hpp"
#include "UStarCatalog.hpp"
UNiagaraDataInterfaceHYGStarCatalog* UNiagaraDataInterfaceHYGStarCatalog::StaticClass() {
    static auto res = find_uobject("Class /Script/NiagaraStarField.NiagaraDataInterfaceHYGStarCatalog");
    return (UNiagaraDataInterfaceHYGStarCatalog*)res;
}
