#include "UModFilter_OnHit_Base.hpp"
#include "UModFilter_OnHit_Target_IsImmobilized.hpp"
UModFilter_OnHit_Target_IsImmobilized* UModFilter_OnHit_Target_IsImmobilized::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_OnHit_Target_IsImmobilized");
    return (UModFilter_OnHit_Target_IsImmobilized*)res;
}
