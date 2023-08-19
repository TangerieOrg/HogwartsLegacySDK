#include "FFontImportOptionsData.hpp"
#include "UFontImportOptions.hpp"
#include "UObject.hpp"
UFontImportOptions* UFontImportOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.FontImportOptions");
    return (UFontImportOptions*)res;
}
