#include "UBeamTarget.hpp"
#include "USceneComponent.hpp"
UBeamTarget* UBeamTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BeamTarget");
    return (UBeamTarget*)res;
}
