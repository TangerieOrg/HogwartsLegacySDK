#include "UBP_SplineToolGeneratorInterface_C.hpp"
#include "UFunction.hpp"
#include "UInstancedStaticMeshComponent.hpp"
#include "UInterface.hpp"
UBP_SplineToolGeneratorInterface_C* UBP_SplineToolGeneratorInterface_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineToolGeneratorInterface.BP_SplineToolGeneratorInterface_C");
    return (UBP_SplineToolGeneratorInterface_C*)res;
}
void UBP_SplineToolGeneratorInterface_C::RequestDestroyComponent(UInstancedStaticMeshComponent* ISM_Component, bool& Success) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineToolGeneratorInterface.BP_SplineToolGeneratorInterface_C.RequestDestroyComponent"));
    struct Params_RequestDestroyComponent {
        UInstancedStaticMeshComponent* ISM_Component; // 0x0
        bool Success; // 0x8
    }; // Size: 0x9
    Params_RequestDestroyComponent params{};
    params.ISM_Component = (UInstancedStaticMeshComponent*)ISM_Component;
    params.Success = (bool)Success;
    ProcessEvent(func, &params);
    Success = params.Success;
}
