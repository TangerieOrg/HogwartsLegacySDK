#include "AActor.hpp"
#include "AGeometryCacheActor.hpp"
#include "UFunction.hpp"
#include "UGeometryCacheComponent.hpp"
AGeometryCacheActor* AGeometryCacheActor::StaticClass() {
    static auto res = find_uobject("Class /Script/GeometryCache.GeometryCacheActor");
    return (AGeometryCacheActor*)res;
}
UGeometryCacheComponent* AGeometryCacheActor::GetGeometryCacheComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheActor.GetGeometryCacheComponent"));
    struct Params_GetGeometryCacheComponent {
        UGeometryCacheComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetGeometryCacheComponent params{};
    ProcessEvent(func, &params);
    return (UGeometryCacheComponent*)params.ReturnValue;
}
