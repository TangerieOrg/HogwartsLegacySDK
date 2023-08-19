#include "UFXFilter.hpp"
#include "UFXFilter_IsCompanion.hpp"
UFXFilter_IsCompanion* UFXFilter_IsCompanion::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_IsCompanion");
    return (UFXFilter_IsCompanion*)res;
}
