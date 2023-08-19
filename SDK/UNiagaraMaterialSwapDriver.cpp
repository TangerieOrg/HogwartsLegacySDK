#include "FMaterialSwapParameters.hpp"
#include "UNiagaraMaterialDriver.hpp"
#include "UNiagaraMaterialSwapDriver.hpp"
UNiagaraMaterialSwapDriver* UNiagaraMaterialSwapDriver::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.NiagaraMaterialSwapDriver");
    return (UNiagaraMaterialSwapDriver*)res;
}
