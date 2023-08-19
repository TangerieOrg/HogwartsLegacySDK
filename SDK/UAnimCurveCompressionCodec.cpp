#include "UAnimCurveCompressionCodec.hpp"
#include "UObject.hpp"
UAnimCurveCompressionCodec* UAnimCurveCompressionCodec::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimCurveCompressionCodec");
    return (UAnimCurveCompressionCodec*)res;
}
