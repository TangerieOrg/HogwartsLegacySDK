#include "FTransform.hpp"
#include "UConstruction_Interface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UConstruction_Interface* UConstruction_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Construction_Interface");
    return (UConstruction_Interface*)res;
}
void UConstruction_Interface::Construct(FTransform& Transform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Construction_Interface.Construct"));
    struct Params_Construct {
        FTransform Transform; // 0x0
    }; // Size: 0x30
    Params_Construct params{};
    params.Transform = (FTransform)Transform;
    ProcessEvent(func, &params);
    Transform = params.Transform;
}
