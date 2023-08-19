#include "UObject.hpp"
#include "UWorldFXCascadeInstanceParametersBase.hpp"
UWorldFXCascadeInstanceParametersBase* UWorldFXCascadeInstanceParametersBase::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXCascadeInstanceParametersBase");
    return (UWorldFXCascadeInstanceParametersBase*)res;
}
