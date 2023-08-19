#include "AActor.hpp"
#include "ATileableFrameActor.hpp"
#include "UFunction.hpp"
#include "UInstancedStaticMeshComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMesh.hpp"
ATileableFrameActor* ATileableFrameActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TileableFrameActor");
    return (ATileableFrameActor*)res;
}
void ATileableFrameActor::MakeFrame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TileableFrameActor.MakeFrame"));
    struct Params_MakeFrame {
    }; // Size: 0x0
    Params_MakeFrame params{};
    ProcessEvent(func, &params);
}
