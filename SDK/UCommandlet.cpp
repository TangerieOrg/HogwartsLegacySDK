#include "UCommandlet.hpp"
#include "UObject.hpp"
UCommandlet* UCommandlet::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Commandlet");
    return (UCommandlet*)res;
}
