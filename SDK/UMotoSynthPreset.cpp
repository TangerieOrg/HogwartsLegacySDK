#include "FMotoSynthRuntimeSettings.hpp"
#include "UMotoSynthPreset.hpp"
#include "UObject.hpp"
UMotoSynthPreset* UMotoSynthPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/MotoSynth.MotoSynthPreset");
    return (UMotoSynthPreset*)res;
}
