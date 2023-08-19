#include "UFXFilter.hpp"
#include "UFXFilter_IsMounted.hpp"
UFXFilter_IsMounted* UFXFilter_IsMounted::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_IsMounted");
    return (UFXFilter_IsMounted*)res;
}
