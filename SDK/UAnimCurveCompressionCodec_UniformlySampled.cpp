#include "UAnimCurveCompressionCodec.hpp"
#include "UAnimCurveCompressionCodec_UniformlySampled.hpp"
UAnimCurveCompressionCodec_UniformlySampled* UAnimCurveCompressionCodec_UniformlySampled::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimCurveCompressionCodec_UniformlySampled");
    return (UAnimCurveCompressionCodec_UniformlySampled*)res;
}
