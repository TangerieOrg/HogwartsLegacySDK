#include "UInterpCurveEdSetup.hpp"
#include "UInterpData.hpp"
#include "UInterpGroup.hpp"
#include "UInterpGroupDirector.hpp"
#include "UObject.hpp"
UInterpData* UInterpData::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpData");
    return (UInterpData*)res;
}
