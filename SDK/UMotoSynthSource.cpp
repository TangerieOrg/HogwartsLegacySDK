#include "FGrainTableEntry.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "UMotoSynthSource.hpp"
#include "UObject.hpp"
UMotoSynthSource* UMotoSynthSource::StaticClass() {
    static auto res = find_uobject("Class /Script/MotoSynth.MotoSynthSource");
    return (UMotoSynthSource*)res;
}
