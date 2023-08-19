#include "FWorldFXCascadeSystemParam.hpp"
#include "UWorldFXCascadeInstanceParametersBase.hpp"
#include "UWorldFXCascadeInstanceParametersFlat.hpp"
UWorldFXCascadeInstanceParametersFlat* UWorldFXCascadeInstanceParametersFlat::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXCascadeInstanceParametersFlat");
    return (UWorldFXCascadeInstanceParametersFlat*)res;
}
