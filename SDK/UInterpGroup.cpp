#include "FColor.hpp"
#include "UInterpGroup.hpp"
#include "UInterpTrack.hpp"
#include "UObject.hpp"
UInterpGroup* UInterpGroup::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpGroup");
    return (UInterpGroup*)res;
}
