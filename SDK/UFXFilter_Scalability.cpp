#include "EPhoenixScalabilityCategory.hpp"
#include "UFXFilter.hpp"
#include "UFXFilter_Scalability.hpp"
UFXFilter_Scalability* UFXFilter_Scalability::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_Scalability");
    return (UFXFilter_Scalability*)res;
}
