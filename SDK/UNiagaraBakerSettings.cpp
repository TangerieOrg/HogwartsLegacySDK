#include "ENiagaraBakerViewMode.hpp"
#include "FIntPoint.hpp"
#include "FNiagaraBakerTextureSettings.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UNiagaraBakerSettings.hpp"
#include "UObject.hpp"
UNiagaraBakerSettings* UNiagaraBakerSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraBakerSettings");
    return (UNiagaraBakerSettings*)res;
}
