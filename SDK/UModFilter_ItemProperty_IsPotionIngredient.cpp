#include "UModFilter_ItemProperty_Base.hpp"
#include "UModFilter_ItemProperty_IsPotionIngredient.hpp"
UModFilter_ItemProperty_IsPotionIngredient* UModFilter_ItemProperty_IsPotionIngredient::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_ItemProperty_IsPotionIngredient");
    return (UModFilter_ItemProperty_IsPotionIngredient*)res;
}
