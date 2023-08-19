#include "UModFilter.hpp"
#include "UModFilter_ObjectState_Base.hpp"
UModFilter_ObjectState_Base* UModFilter_ObjectState_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_ObjectState_Base");
    return (UModFilter_ObjectState_Base*)res;
}
