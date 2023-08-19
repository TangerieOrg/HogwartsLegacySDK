#include "UModFilter_OnHit_Base.hpp"
#include "UModFilter_OnHit_Target_IsUnaware.hpp"
UModFilter_OnHit_Target_IsUnaware* UModFilter_OnHit_Target_IsUnaware::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_OnHit_Target_IsUnaware");
    return (UModFilter_OnHit_Target_IsUnaware*)res;
}
