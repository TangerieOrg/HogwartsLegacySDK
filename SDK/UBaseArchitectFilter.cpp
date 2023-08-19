#include "UBaseArchitectFilter.hpp"
#include "UObject.hpp"
UBaseArchitectFilter* UBaseArchitectFilter::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.BaseArchitectFilter");
    return (UBaseArchitectFilter*)res;
}
