#include "UModFilter_ObjectState_Base.hpp"
#include "UModFilter_PlantState_IsFullHealth.hpp"
UModFilter_PlantState_IsFullHealth* UModFilter_PlantState_IsFullHealth::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_PlantState_IsFullHealth");
    return (UModFilter_PlantState_IsFullHealth*)res;
}
