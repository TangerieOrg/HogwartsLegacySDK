#include "EFieldFalloffType.hpp"
#include "EWaveFunctionType.hpp"
#include "FVector.hpp"
#include "UFieldNodeFloat.hpp"
#include "UFunction.hpp"
#include "UWaveScalar.hpp"
UWaveScalar* UWaveScalar::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.WaveScalar");
    return (UWaveScalar*)res;
}
UWaveScalar* UWaveScalar::SetWaveScalar(float Magnitude, FVector Position, float Wavelength, float Period, float Time, EWaveFunctionType Function, EFieldFalloffType Falloff) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.WaveScalar.SetWaveScalar"));
    struct Params_SetWaveScalar {
        float Magnitude; // 0x0
        FVector Position; // 0x4
        float Wavelength; // 0x10
        float Period; // 0x14
        float Time; // 0x18
        EWaveFunctionType Function; // 0x1c
        EFieldFalloffType Falloff; // 0x1d
        char pad_1e[0x2];
        UWaveScalar* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_SetWaveScalar params{};
    params.Magnitude = (float)Magnitude;
    params.Position = (FVector)Position;
    params.Wavelength = (float)Wavelength;
    params.Period = (float)Period;
    params.Time = (float)Time;
    params.Function = (EWaveFunctionType)Function;
    params.Falloff = (EFieldFalloffType)Falloff;
    ProcessEvent(func, &params);
    return (UWaveScalar*)params.ReturnValue;
}
