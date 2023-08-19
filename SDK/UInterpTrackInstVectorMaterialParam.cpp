#include "FPrimitiveMaterialRef.hpp"
#include "FVector.hpp"
#include "UInterpTrackInst.hpp"
#include "UInterpTrackInstVectorMaterialParam.hpp"
#include "UInterpTrackVectorMaterialParam.hpp"
#include "UMaterialInstanceDynamic.hpp"
UInterpTrackInstVectorMaterialParam* UInterpTrackInstVectorMaterialParam::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackInstVectorMaterialParam");
    return (UInterpTrackInstVectorMaterialParam*)res;
}
