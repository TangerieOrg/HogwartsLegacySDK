#include "AActor.hpp"
#include "ARenderingCutVolume.hpp"
#include "AVolume.hpp"
#include "FBlendDomain.hpp"
#include "FPostProcessSettings.hpp"
#include "FRenderingCutBits.hpp"
#include "UFunction.hpp"
ARenderingCutVolume* ARenderingCutVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RenderingCutVolume");
    return (ARenderingCutVolume*)res;
}
void ARenderingCutVolume::SetPriority(float NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RenderingCutVolume.SetPriority"));
    struct Params_SetPriority {
        float NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (float)NewPriority;
    ProcessEvent(func, &params);
}
void ARenderingCutVolume::ProcessBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RenderingCutVolume.ProcessBeginOverlap"));
    struct Params_ProcessBeginOverlap {
        AActor* OverlappedActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_ProcessBeginOverlap params{};
    params.OverlappedActor = (AActor*)OverlappedActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
