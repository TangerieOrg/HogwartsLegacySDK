#include "UDynamicSculptToolActions.hpp"
#include "UFunction.hpp"
#include "UInteractiveToolPropertySet.hpp"
UDynamicSculptToolActions* UDynamicSculptToolActions::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.DynamicSculptToolActions");
    return (UDynamicSculptToolActions*)res;
}
void UDynamicSculptToolActions::DiscardAttributes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.DynamicSculptToolActions.DiscardAttributes"));
    struct Params_DiscardAttributes {
    }; // Size: 0x0
    Params_DiscardAttributes params{};
    ProcessEvent(func, &params);
}
