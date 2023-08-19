#include "FWorldFXCascadeSystemParams.hpp"
#include "UWorldFXCascadeInstanceParametersBase.hpp"
#include "UWorldFXCascadeInstanceParametersGrouped.hpp"
UWorldFXCascadeInstanceParametersGrouped* UWorldFXCascadeInstanceParametersGrouped::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXCascadeInstanceParametersGrouped");
    return (UWorldFXCascadeInstanceParametersGrouped*)res;
}
