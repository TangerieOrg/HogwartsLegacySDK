#include "UAnimCurveCompressionCodec.hpp"
#include "UAnimCurveCompressionCodec_CompressedRichCurve.hpp"
UAnimCurveCompressionCodec_CompressedRichCurve* UAnimCurveCompressionCodec_CompressedRichCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimCurveCompressionCodec_CompressedRichCurve");
    return (UAnimCurveCompressionCodec_CompressedRichCurve*)res;
}
