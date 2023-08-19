#include "UMapHogsmeade.hpp"
#include "UUI_BP_HogsmeadeMapClass_C.hpp"
UUI_BP_HogsmeadeMapClass_C* UUI_BP_HogsmeadeMapClass_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/Map/UI_BP_HogsmeadeMapClass.UI_BP_HogsmeadeMapClass_C");
    return (UUI_BP_HogsmeadeMapClass_C*)res;
}
