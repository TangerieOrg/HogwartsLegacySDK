#include "UMapOverland.hpp"
#include "UUI_BP_OverlandMapClass_C.hpp"
UUI_BP_OverlandMapClass_C* UUI_BP_OverlandMapClass_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/Map/UI_BP_OverlandMapClass.UI_BP_OverlandMapClass_C");
    return (UUI_BP_OverlandMapClass_C*)res;
}
