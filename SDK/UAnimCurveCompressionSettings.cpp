#include "UAnimCurveCompressionCodec.hpp"
#include "UAnimCurveCompressionSettings.hpp"
#include "UObject.hpp"
UAnimCurveCompressionSettings* UAnimCurveCompressionSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimCurveCompressionSettings");
    return (UAnimCurveCompressionSettings*)res;
}
