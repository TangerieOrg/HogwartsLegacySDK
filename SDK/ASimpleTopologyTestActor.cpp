#include "AActor.hpp"
#include "ASimpleTopologyTestActor.hpp"
#include "FSimpleTopologyParams.hpp"
#include "FSimpleTopologyVoxelArray.hpp"
#include "UFunction.hpp"
ASimpleTopologyTestActor* ASimpleTopologyTestActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SimpleTopologyTestActor");
    return (ASimpleTopologyTestActor*)res;
}
void ASimpleTopologyTestActor::Precompute() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SimpleTopologyTestActor.Precompute"));
    struct Params_Precompute {
    }; // Size: 0x0
    Params_Precompute params{};
    ProcessEvent(func, &params);
}
void ASimpleTopologyTestActor::AbortPrecompute() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SimpleTopologyTestActor.AbortPrecompute"));
    struct Params_AbortPrecompute {
    }; // Size: 0x0
    Params_AbortPrecompute params{};
    ProcessEvent(func, &params);
}
