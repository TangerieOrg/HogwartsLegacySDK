#include "UModFilter_ObjectState_Base.hpp"
#include "UModFilter_ObjectState_IsImperiousControlled.hpp"
UModFilter_ObjectState_IsImperiousControlled* UModFilter_ObjectState_IsImperiousControlled::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_ObjectState_IsImperiousControlled");
    return (UModFilter_ObjectState_IsImperiousControlled*)res;
}
