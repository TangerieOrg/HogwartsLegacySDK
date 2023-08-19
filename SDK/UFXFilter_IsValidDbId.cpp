#include "UFXFilter.hpp"
#include "UFXFilter_IsValidDbId.hpp"
UFXFilter_IsValidDbId* UFXFilter_IsValidDbId::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_IsValidDbId");
    return (UFXFilter_IsValidDbId*)res;
}
