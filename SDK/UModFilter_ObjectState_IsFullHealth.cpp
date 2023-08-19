#include "UModFilter_ObjectState_Base.hpp"
#include "UModFilter_ObjectState_IsFullHealth.hpp"
UModFilter_ObjectState_IsFullHealth* UModFilter_ObjectState_IsFullHealth::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_ObjectState_IsFullHealth");
    return (UModFilter_ObjectState_IsFullHealth*)res;
}
