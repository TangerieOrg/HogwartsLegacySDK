#include "AActor.hpp"
#include "AGeometryCollectionActor.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UGeometryCollectionComponent.hpp"
#include "UGeometryCollectionDebugDrawComponent.hpp"
bool AGeometryCollectionActor::RaycastSingle(FVector Start, FVector End, FHitResult& OutHit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle"));
    struct Params_RaycastSingle {
        FVector Start; // 0x0
        FVector End; // 0xc
        FHitResult OutHit; // 0x18
        bool ReturnValue; // 0xa0
    }; // Size: 0xa1
    Params_RaycastSingle params{};
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.OutHit = (FHitResult)OutHit;
    ProcessEvent(func, &params);
    OutHit = params.OutHit;
    return (bool)params.ReturnValue;
}
AGeometryCollectionActor* AGeometryCollectionActor::StaticClass() {
    static auto res = find_uobject("Class /Script/GeometryCollectionEngine.GeometryCollectionActor");
    return (AGeometryCollectionActor*)res;
}
