#include "UFXFilter.hpp"
#include "UFXFilter_IsCreature.hpp"
UFXFilter_IsCreature* UFXFilter_IsCreature::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_IsCreature");
    return (UFXFilter_IsCreature*)res;
}
