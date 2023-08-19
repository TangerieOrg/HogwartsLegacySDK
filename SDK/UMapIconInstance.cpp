#include "UMapIconInstance.hpp"
#include "UObject.hpp"
UMapIconInstance* UMapIconInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapIconInstance");
    return (UMapIconInstance*)res;
}
