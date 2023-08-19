#include "AActor.hpp"
#include "AInstancedTrailActor.hpp"
#include "FInstancedTrailMember.hpp"
#include "FInstancedTrailMemberBehavior.hpp"
#include "FTransform.hpp"
#include "UFunction.hpp"
#include "UInstancedStaticMeshComponent.hpp"
#include "UStaticMesh.hpp"
AInstancedTrailActor* AInstancedTrailActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InstancedTrailActor");
    return (AInstancedTrailActor*)res;
}
void AInstancedTrailActor::Reset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedTrailActor.Reset"));
    struct Params_Reset {
    }; // Size: 0x0
    Params_Reset params{};
    ProcessEvent(func, &params);
}
void AInstancedTrailActor::Regenerate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedTrailActor.Regenerate"));
    struct Params_Regenerate {
    }; // Size: 0x0
    Params_Regenerate params{};
    ProcessEvent(func, &params);
}
