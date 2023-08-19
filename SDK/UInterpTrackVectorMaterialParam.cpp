#include "UInterpTrackVectorBase.hpp"
#include "UInterpTrackVectorMaterialParam.hpp"
#include "UMaterialInterface.hpp"
UInterpTrackVectorMaterialParam* UInterpTrackVectorMaterialParam::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackVectorMaterialParam");
    return (UInterpTrackVectorMaterialParam*)res;
}
