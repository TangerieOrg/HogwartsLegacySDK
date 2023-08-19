#include "AActor.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UPawnNoiseEmitterComponent.hpp"
UPawnNoiseEmitterComponent* UPawnNoiseEmitterComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PawnNoiseEmitterComponent");
    return (UPawnNoiseEmitterComponent*)res;
}
void UPawnNoiseEmitterComponent::MakeNoise(AActor* NoiseMaker, float Loudness, FVector& NoiseLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PawnNoiseEmitterComponent.MakeNoise"));
    struct Params_MakeNoise {
        AActor* NoiseMaker; // 0x0
        float Loudness; // 0x8
        FVector NoiseLocation; // 0xc
    }; // Size: 0x18
    Params_MakeNoise params{};
    params.NoiseMaker = (AActor*)NoiseMaker;
    params.Loudness = (float)Loudness;
    params.NoiseLocation = (FVector)NoiseLocation;
    ProcessEvent(func, &params);
    NoiseLocation = params.NoiseLocation;
}
