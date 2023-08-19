#include "UInterface.hpp"
#include "UPropertyAccess.hpp"
UPropertyAccess* UPropertyAccess::StaticClass() {
    static auto res = find_uobject("Class /Script/PropertyAccess.PropertyAccess");
    return (UPropertyAccess*)res;
}
