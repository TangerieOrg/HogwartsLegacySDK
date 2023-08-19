#include "FNiagaraDebugHUDSettingsData.hpp"
#include "UNiagaraDebugHUDSettings.hpp"
#include "UObject.hpp"
UNiagaraDebugHUDSettings* UNiagaraDebugHUDSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDebugHUDSettings");
    return (UNiagaraDebugHUDSettings*)res;
}
