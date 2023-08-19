#include "FRuntimeFloatCurve.hpp"
#include "UMonoWaveTableSynthPreset.hpp"
#include "UObject.hpp"
UMonoWaveTableSynthPreset* UMonoWaveTableSynthPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.MonoWaveTableSynthPreset");
    return (UMonoWaveTableSynthPreset*)res;
}
