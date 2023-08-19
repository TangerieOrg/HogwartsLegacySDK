#include "ULinkerPlaceholderExportObject.hpp"
#include "UObject.hpp"
ULinkerPlaceholderExportObject* ULinkerPlaceholderExportObject::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.LinkerPlaceholderExportObject");
    return (ULinkerPlaceholderExportObject*)res;
}
