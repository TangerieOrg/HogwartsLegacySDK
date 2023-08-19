#include "FPrimitiveMaterialRef.hpp"
#include "UInterpTrackFloatMaterialParam.hpp"
#include "UInterpTrackInst.hpp"
#include "UInterpTrackInstFloatMaterialParam.hpp"
#include "UMaterialInstanceDynamic.hpp"
UInterpTrackInstFloatMaterialParam* UInterpTrackInstFloatMaterialParam::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackInstFloatMaterialParam");
    return (UInterpTrackInstFloatMaterialParam*)res;
}
