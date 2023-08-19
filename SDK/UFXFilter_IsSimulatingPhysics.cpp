#include "UFXFilter.hpp"
#include "UFXFilter_IsSimulatingPhysics.hpp"
UFXFilter_IsSimulatingPhysics* UFXFilter_IsSimulatingPhysics::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_IsSimulatingPhysics");
    return (UFXFilter_IsSimulatingPhysics*)res;
}
