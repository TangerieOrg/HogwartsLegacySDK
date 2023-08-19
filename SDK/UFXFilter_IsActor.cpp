#include "UFXFilter.hpp"
#include "UFXFilter_IsActor.hpp"
UFXFilter_IsActor* UFXFilter_IsActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_IsActor");
    return (UFXFilter_IsActor*)res;
}
