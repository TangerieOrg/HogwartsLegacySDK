#include "UBuildNavDataCommandlet.hpp"
#include "UCommandlet.hpp"
UBuildNavDataCommandlet* UBuildNavDataCommandlet::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BuildNavDataCommandlet");
    return (UBuildNavDataCommandlet*)res;
}
