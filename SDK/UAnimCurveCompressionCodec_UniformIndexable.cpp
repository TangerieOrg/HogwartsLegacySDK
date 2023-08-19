#include "UAnimCurveCompressionCodec.hpp"
#include "UAnimCurveCompressionCodec_UniformIndexable.hpp"
UAnimCurveCompressionCodec_UniformIndexable* UAnimCurveCompressionCodec_UniformIndexable::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimCurveCompressionCodec_UniformIndexable");
    return (UAnimCurveCompressionCodec_UniformIndexable*)res;
}
