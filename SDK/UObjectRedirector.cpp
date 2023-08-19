#include "UObject.hpp"
#include "UObjectRedirector.hpp"
UObjectRedirector* UObjectRedirector::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.ObjectRedirector");
    return (UObjectRedirector*)res;
}
