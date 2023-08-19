#include "ULevelVariantSetsFunctionDirector.hpp"
#include "UObject.hpp"
ULevelVariantSetsFunctionDirector* ULevelVariantSetsFunctionDirector::StaticClass() {
    static auto res = find_uobject("Class /Script/VariantManagerContent.LevelVariantSetsFunctionDirector");
    return (ULevelVariantSetsFunctionDirector*)res;
}
