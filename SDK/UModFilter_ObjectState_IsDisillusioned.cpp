#include "UModFilter_ObjectState_Base.hpp"
#include "UModFilter_ObjectState_IsDisillusioned.hpp"
UModFilter_ObjectState_IsDisillusioned* UModFilter_ObjectState_IsDisillusioned::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_ObjectState_IsDisillusioned");
    return (UModFilter_ObjectState_IsDisillusioned*)res;
}
