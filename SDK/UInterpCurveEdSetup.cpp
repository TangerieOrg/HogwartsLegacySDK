#include "FCurveEdTab.hpp"
#include "UInterpCurveEdSetup.hpp"
#include "UObject.hpp"
UInterpCurveEdSetup* UInterpCurveEdSetup::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpCurveEdSetup");
    return (UInterpCurveEdSetup*)res;
}
