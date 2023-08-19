#include "UFXFilter.hpp"
#include "UFXFilter_SpellType.hpp"
UFXFilter_SpellType* UFXFilter_SpellType::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_SpellType");
    return (UFXFilter_SpellType*)res;
}
