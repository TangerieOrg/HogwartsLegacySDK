#include "FRuntimeFloatCurve.hpp"
#include "UAnimMetaData.hpp"
#include "UAnimMetaDataQuadrupedSpine.hpp"
UAnimMetaDataQuadrupedSpine* UAnimMetaDataQuadrupedSpine::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimMetaDataQuadrupedSpine");
    return (UAnimMetaDataQuadrupedSpine*)res;
}
