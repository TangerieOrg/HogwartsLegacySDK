#include "UInterpTrackFloatBase.hpp"
#include "UInterpTrackFloatMaterialParam.hpp"
#include "UMaterialInterface.hpp"
UInterpTrackFloatMaterialParam* UInterpTrackFloatMaterialParam::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackFloatMaterialParam");
    return (UInterpTrackFloatMaterialParam*)res;
}
