#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceAccessibilityColorRemap.hpp"
UNiagaraDataInterfaceAccessibilityColorRemap* UNiagaraDataInterfaceAccessibilityColorRemap::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NiagaraDataInterfaceAccessibilityColorRemap");
    return (UNiagaraDataInterfaceAccessibilityColorRemap*)res;
}
